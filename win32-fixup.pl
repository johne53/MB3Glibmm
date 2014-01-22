#! e:/program files/perl/bin/perl.exe
#  version info can be found in 'configure.ac'

require "../local-paths.lib";

$glibmm_version = "2.39.03";
$major = 2;
$minor = 39;
$micro = 3;
$binary_age = 3903;
$interface_age = 1;
$current_minus_age = 0;
$exec_prefix = "lib";

sub process_file
{
        my $outfilename = shift;
	my $infilename = $outfilename . ".in";
	
	open (INPUT, "< $infilename") || exit 1;
	open (OUTPUT, "> $outfilename") || exit 1;
	
	while (<INPUT>) {
	    s/\@PACKAGE_VERSION@/$glibmm_version/g;
	    s/\@GIOMM_MAJOR_VERSION\@/$major/g;
	    s/\@GIOMM_MINOR_VERSION\@/$minor/g;
	    s/\@GIOMM_MICRO_VERSION\@/$micro/g;
	    s/\@GLIBMM_MAJOR_VERSION\@/$major/g;
	    s/\@GLIBMM_MINOR_VERSION\@/$minor/g;
	    s/\@GLIBMM_MICRO_VERSION\@/$micro/g;
	    s/\@GLIBMM_INTERFACE_AGE\@/$interface_age/g;
	    s/\@GLIBMM_BINARY_AGE\@/$binary_age/g;
	    s/\@LT_CURRENT_MINUS_AGE@/$current_minus_age/g;
	    s/\@GLIBMM_MODULE_NAME@/$glibmm_module_name/g;
	    s/\@GIOMM_MODULE_NAME@/$giomm_module_name/g;
	    s/\@PERL@/$perl_path/g;
	    s/\@prefix@/$prefix/g;
	    s/\@exec_prefix@/$exec_prefix/g;
	    s/\@datarootdir@/$data_root_dir/g;
	    s/\@M4@/$m4_path/g;
	    s/\@libdir@/$generic_library_folder/g;
	    s/\@GlibBuildRootFolder@/$glib_build_root_folder/g;
	    s/\@GlibmmBuildRootFolder@/$glibmm_build_root_folder/g;
	    s/\@GenericIncludeFolder@/$generic_include_folder/g;
	    s/\@GenericLibraryFolder@/$generic_library_folder/g;
	    s/\@GenericWin32LibraryFolder@/$generic_win32_library_folder/g;
	    s/\@GenericWin32BinaryFolder@/$generic_win32_binary_folder/g;
	    s/\@Debug32TestSuiteFolder@/$debug32_testsuite_folder/g;
	    s/\@Release32TestSuiteFolder@/$release32_testsuite_folder/g;
	    s/\@Debug32TargetFolder@/$debug32_target_folder/g;
	    s/\@Release32TargetFolder@/$release32_target_folder/g;
	    s/\@TargetSxSFolder@/$target_sxs_folder/g;
	    s/\@includedir@/$generic_include_folder/g;
	    s/\@GLIBMM_API_VERSION\@/$api_version/g;
	    s/\@GIOMM_API_VERSION\@/$api_version/g;
	    print OUTPUT;
	}
}

my $command=join(' ',@ARGV);

if (-1 != index($command, "-X64")) {
	$glibmm_module_name = "libglibmm64-2.4";
	$giomm_module_name = "libgiomm64-2.4";
	$api_version = "64-2.4-0";
} else {
	$glibmm_module_name = "libglibmm32-2.4";
	$giomm_module_name = "libgiomm32-2.4";
	$api_version = "32-2.4-0";
}

process_file ("glib/glibmmconfig.h");
process_file ("glib/glibmm.pc");
process_file ("gio/giomm.pc");
process_file ("gio/giommconfig.h");
process_file ("tools/gmmproc");

if (-1 != index($command, "-buildall")) {
	process_file ("build/msvc/glibmm.vsprops");
	process_file ("tools/generate_wrap_init.pl");
	process_file ("gio/giomm.rc");
	process_file ("glib/glibmm.rc");
}