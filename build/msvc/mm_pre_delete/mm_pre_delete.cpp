#include <io.h>
#include <stdio.h>
#include <string>

using namespace std;

int process_entries_in_delete_list (const string& folder_delete_list)
{
int ret=0, line=0;

	FILE *fh = fopen(folder_delete_list.c_str(), "r");

	if (NULL != fh)
	{
		char   buf[1024];
		string current_entry, file_to_delete, root_folder = folder_delete_list;

		string::size_type pos = folder_delete_list.find_last_of("\\");
		if ((string::npos != pos) && ((pos+1) != folder_delete_list.length()))
			root_folder.resize(pos+1);

		while (NULL != fgets(buf, 1024, fh))
		{
			line++;
			buf[1023] = 0;
			if (10 == buf[strlen(buf)-1])
				buf[strlen(buf)-1] = 0;
			current_entry = buf;

			if (current_entry.length())
			{
				// Let's check to make sure there are no wildcards / illegal characters etc
				if (string::npos != current_entry.find_first_of("!\"#*?"))
				{
					printf("Illegal entry in deletion list at line %d !\n", line);
					ret = (-1);
					break;
				}

				file_to_delete = root_folder + current_entry;

				struct _finddata_t file_info;
				long handle = _findfirst(file_to_delete.c_str(), &file_info);

				if ((-1) != handle)
				{
					// The file exists. Close our search handle.
					_findclose(handle);

					// If it isn't a folder, a hidden file or a system file, delete it.
					if ((!(file_info.attrib & _A_SUBDIR)) &&
						(!(file_info.attrib & _A_HIDDEN)) &&
						(!(file_info.attrib & _A_SYSTEM)))
					{
						// If the file can't be deleted, it's probably open in another process
						if (0 != remove(file_to_delete.c_str()))
						{
							printf("Error while deleting the file:-\n\t%s \n\t(file might be open in another process)\n", file_to_delete.c_str());
							ret = (-1);
							break;
						}
					}
				}
			}
		}

		if ((0 == ret) && (!feof(fh)))
		{
			printf("Unknown error while processing deletion list !\n");
			ret = (-1);
		}

		fclose(fh);
	}
	else
	{
		printf("Error while opening deletion list !\n");
		ret = (-1);
	}

	return ret;
}

int process_sub_folder (const string& sub_folder_delete_list)
{
	return process_entries_in_delete_list(sub_folder_delete_list);
}

int process_main_folder (const string& main_folder_delete_list)
{
	return process_entries_in_delete_list(main_folder_delete_list);
}

int main (int argc, char *argv[])
{
int ret = (-1);

	if (argc > 1)
	{
		string target_file, supplied_folder = argv[1];

		// Let's check to make sure there are no wildcards / illegal characters etc
		if (string::npos != supplied_folder.find_first_of("!\"#*?"))
			printf("Wildcard (or other illegal character) in the supplied directory path !\n");
		else
		{
			if ('/' == supplied_folder[supplied_folder.size()-1])
				supplied_folder.replace(supplied_folder.size()-1, 1, "\\");

			if ('\\' == supplied_folder[supplied_folder.size()-1])
				target_file = supplied_folder + string("auto-delete.list");
			else
				target_file = supplied_folder + string("\\auto-delete.list");

			// Let's find out if this folder has a file called "auto-delete.list"
			FILE *fh = fopen(target_file.c_str(), "r");

			if (NULL != fh)
			{
				fclose(fh);

				if (0 == process_main_folder(target_file))
				{
					if ('\\' == supplied_folder[supplied_folder.size()-1])
						target_file = supplied_folder + string("private\\auto-delete.list");
					else
						target_file = supplied_folder + string("\\private\\auto-delete.list");

					// Let's find out if the subfolder also has a file called "auto-delete.list"
					FILE *fh = fopen(target_file.c_str(), "r");

					if (NULL != fh)
					{
						fclose(fh);
					
						if (0 == process_sub_folder(target_file))
							ret = 0;
					}
					else
						// No target file is NOT regarded as an error
						ret = 0;
				}
			}
			else
				// No target file is NOT regarded as an error
				ret = 0;
		}
	}
	else
		printf("Please specify a directory to start from !\n");
	
	return ret;
}
