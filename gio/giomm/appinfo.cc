// Generated by gtkmmproc -- DO NOT MODIFY!


#include <glibmm.h>

#include <giomm/appinfo.h>
#include <giomm/private/appinfo_p.h>


// -*- Mode: C++; indent-tabs-mode: nil; c-basic-offset: 2 -*-

/* Copyright (C) 2007 The gtkmm Development Team
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free
 * Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#include <giomm/file.h>
#include <glibmm/listhandle.h>
#include <glibmm/vectorutils.h>
#include <gio/gio.h>

namespace Gio
{

Glib::RefPtr<AppInfo>
AppInfo::create_from_commandline(const std::string& commandline,
                                 const std::string& application_name,
                                 AppInfoCreateFlags flags)
{
  GAppInfo* capp_info = 0;
  GError* gerror = 0;

  capp_info = g_app_info_create_from_commandline(commandline.c_str(),
                                                 application_name.c_str(),
                                                 static_cast<GAppInfoCreateFlags>(flags),
                                                 &gerror);

  if (gerror)
    ::Glib::Error::throw_exception(gerror);

  return Glib::wrap(capp_info);
}

Glib::RefPtr<AppInfo> AppInfo::create_duplicate() const
{
   return Glib::wrap(g_app_info_dup(const_cast<GAppInfo*>(gobj())));
}

bool AppInfo::launch(const Glib::RefPtr<Gio::File>& file, const Glib::RefPtr<AppLaunchContext>& launch_context)
{
  std::vector< Glib::RefPtr<Gio::File> > vec;
  vec.push_back(file);

  GError* gerror = 0;
  bool retvalue = g_app_info_launch(gobj(), Glib::ListHandler<Glib::RefPtr<Gio::File> >::vector_to_list(vec).data (), Glib::unwrap(launch_context), &(gerror));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);

  return retvalue;
}

bool AppInfo::launch(const Glib::RefPtr<Gio::File>& file)
{
  std::vector< Glib::RefPtr<Gio::File> > vec;
  vec.push_back(file);

  GError* gerror = 0;
  bool retvalue = g_app_info_launch(gobj(), Glib::ListHandler<Glib::RefPtr<Gio::File> >::vector_to_list(vec).data (), 0, &(gerror));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);

  return retvalue;
}

bool AppInfo::launch_uri(const std::string& uri, const Glib::RefPtr<AppLaunchContext>& launch_context)
{
  std::vector<std::string> vec;
  vec.push_back(uri);

  GError* gerror = 0;
  bool retvalue = g_app_info_launch_uris(gobj(), Glib::ListHandler<std::string>::vector_to_list(vec).data (), Glib::unwrap(launch_context), &(gerror));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);

  return retvalue;
}

bool AppInfo::launch_uri(const std::string& uri)
{
  std::vector<std::string> vec;
  vec.push_back(uri);

  GError* gerror = 0;
  bool retvalue = g_app_info_launch_uris(gobj(), Glib::ListHandler<std::string>::vector_to_list(vec).data (), 0, &(gerror));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);

  return retvalue;
}

} // namespace Gio

namespace
{
} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gio::AppInfo> wrap(GAppInfo* object, bool take_copy)
{
  return Glib::RefPtr<Gio::AppInfo>( dynamic_cast<Gio::AppInfo*> (Glib::wrap_auto_interface<Gio::AppInfo> ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} // namespace Glib


namespace Gio
{


/* The *_Class implementation: */

const Glib::Interface_Class& AppInfo_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Interface_Class has to know the interface init function
    // in order to add interfaces to implementing types.
    class_init_func_ = &AppInfo_Class::iface_init_function;

    // We can not derive from another interface, and it is not necessary anyway.
    gtype_ = g_app_info_get_type();
  }

  return *this;
}

void AppInfo_Class::iface_init_function(void* g_iface, void*)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_iface);

  //This is just to avoid an "unused variable" warning when there are no vfuncs or signal handlers to connect.
  //This is a temporary fix until I find out why I can not seem to derive a GtkFileChooser interface. murrayc
  g_assert(klass != 0); 


}


Glib::ObjectBase* AppInfo_Class::wrap_new(GObject* object)
{
  return new AppInfo((GAppInfo*)(object));
}


/* The implementation: */

AppInfo::AppInfo()
:
  Glib::Interface(appinfo_class_.init())
{}

AppInfo::AppInfo(GAppInfo* castitem)
:
  Glib::Interface((GObject*)(castitem))
{}

AppInfo::AppInfo(const Glib::Interface_Class& interface_class)
: Glib::Interface(interface_class)
{
}

AppInfo::~AppInfo()
{}

// static
void AppInfo::add_interface(GType gtype_implementer)
{
  appinfo_class_.init().add_interface(gtype_implementer);
}

AppInfo::CppClassType AppInfo::appinfo_class_; // initialize static member

GType AppInfo::get_type()
{
  return appinfo_class_.init().get_type();
}


GType AppInfo::get_base_type()
{
  return g_app_info_get_type();
}


bool AppInfo::equal(const Glib::RefPtr<AppInfo>& other) const
{
  return g_app_info_equal(const_cast<GAppInfo*>(gobj()), Glib::unwrap(other));
}

std::string AppInfo::get_id() const
{
  return Glib::convert_const_gchar_ptr_to_stdstring(g_app_info_get_id(const_cast<GAppInfo*>(gobj())));
}

std::string AppInfo::get_name() const
{
  return Glib::convert_const_gchar_ptr_to_stdstring(g_app_info_get_name(const_cast<GAppInfo*>(gobj())));
}

std::string AppInfo::get_display_name() const
{
  return Glib::convert_const_gchar_ptr_to_stdstring(g_app_info_get_display_name(const_cast<GAppInfo*>(gobj())));
}

std::string AppInfo::get_description() const
{
  return Glib::convert_const_gchar_ptr_to_stdstring(g_app_info_get_description(const_cast<GAppInfo*>(gobj())));
}

std::string AppInfo::get_executable() const
{
  return Glib::convert_const_gchar_ptr_to_stdstring(g_app_info_get_executable(const_cast<GAppInfo*>(gobj())));
}

std::string AppInfo::get_commandline() const
{
  return Glib::convert_const_gchar_ptr_to_stdstring(g_app_info_get_commandline(const_cast<GAppInfo*>(gobj())));
}

Glib::RefPtr<Icon> AppInfo::get_icon()
{
  Glib::RefPtr<Icon> retvalue = Glib::wrap(g_app_info_get_icon(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

const Glib::RefPtr<const Icon> AppInfo::get_icon() const
{
  return const_cast<AppInfo*>(this)->get_icon();
}

bool AppInfo::launch(const std::vector< Glib::RefPtr<Gio::File> >& files, const Glib::RefPtr<AppLaunchContext>& launch_context)
{
  GError* gerror = 0;
  bool retvalue = g_app_info_launch(gobj(), Glib::ListHandler<Glib::RefPtr<Gio::File> >::vector_to_list(files).data (), Glib::unwrap(launch_context), &(gerror));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}

bool AppInfo::launch(const std::vector< Glib::RefPtr<Gio::File> >& files)
{
  GError* gerror = 0;
  bool retvalue = g_app_info_launch(gobj(), Glib::ListHandler<Glib::RefPtr<Gio::File> >::vector_to_list(files).data (), 0, &(gerror));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}

bool AppInfo::supports_uris() const
{
  return g_app_info_supports_uris(const_cast<GAppInfo*>(gobj()));
}

bool AppInfo::supports_files() const
{
  return g_app_info_supports_files(const_cast<GAppInfo*>(gobj()));
}

#ifndef GIOMM_DISABLE_DEPRECATED

bool AppInfo::launch_uris(const Glib::ListHandle<std::string>& uris, GAppLaunchContext* launch_context)
{
  GError* gerror = 0;
  bool retvalue = g_app_info_launch_uris(gobj(), uris.data(), launch_context, &(gerror));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}

#endif // GIOMM_DISABLE_DEPRECATED

bool AppInfo::launch_uris(const Glib::ListHandle<std::string>& uris, const Glib::RefPtr<AppLaunchContext>& launch_context)
{
  GError* gerror = 0;
  bool retvalue = g_app_info_launch_uris(gobj(), uris.data(), Glib::unwrap(launch_context), &(gerror));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}

bool AppInfo::launch_uris(const Glib::ListHandle<std::string>& uris)
{
  GError* gerror = 0;
  bool retvalue = g_app_info_launch_uris(gobj(), uris.data(), 0, &(gerror));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}

bool AppInfo::should_show() const
{
  return g_app_info_should_show(const_cast<GAppInfo*>(gobj()));
}

bool AppInfo::can_delete() const
{
  return g_app_info_can_delete(const_cast<GAppInfo*>(gobj()));
}

bool AppInfo::do_delete()
{
  return g_app_info_delete(gobj());
}

bool AppInfo::set_as_default_for_type(const std::string& content_type)
{
  GError* gerror = 0;
  bool retvalue = g_app_info_set_as_default_for_type(gobj(), content_type.c_str(), &(gerror));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}

bool AppInfo::set_as_default_for_extension(const std::string& extension)
{
  GError* gerror = 0;
  bool retvalue = g_app_info_set_as_default_for_extension(gobj(), extension.c_str(), &(gerror));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}

bool AppInfo::add_supports_type(const std::string& content_type)
{
  GError* gerror = 0;
  bool retvalue = g_app_info_add_supports_type(gobj(), content_type.c_str(), &(gerror));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}

bool AppInfo::can_remove_supports_type() const
{
  return g_app_info_can_remove_supports_type(const_cast<GAppInfo*>(gobj()));
}

bool AppInfo::remove_supports_type(const std::string& content_type)
{
  GError* gerror = 0;
  bool retvalue = g_app_info_remove_supports_type(gobj(), content_type.c_str(), &(gerror));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}

Glib::StringArrayHandle AppInfo::get_supported_types() const
{
  return Glib::StringArrayHandle(g_app_info_get_supported_types(const_cast<GAppInfo*>(gobj())), Glib::OWNERSHIP_NONE);
}

bool AppInfo::set_as_last_used_for_type(const std::string& content_type)
{
  GError* gerror = 0;
  bool retvalue = g_app_info_set_as_last_used_for_type(gobj(), content_type.c_str(), &(gerror));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}

Glib::ListHandle<Glib::RefPtr<AppInfo> > AppInfo::get_all()
{
  return Glib::ListHandle<Glib::RefPtr<AppInfo> >(g_app_info_get_all(), Glib::OWNERSHIP_DEEP);
}


Glib::ListHandle<Glib::RefPtr<AppInfo> > AppInfo::get_all_for_type(const std::string& content_type)
{
  return Glib::ListHandle<Glib::RefPtr<AppInfo> >(g_app_info_get_all_for_type(content_type.c_str()), Glib::OWNERSHIP_DEEP);
}


Glib::RefPtr<AppInfo> AppInfo::get_default_for_type(const std::string& content_type, bool must_support_uris)
{
  return Glib::wrap(g_app_info_get_default_for_type(content_type.c_str(), static_cast<int>(must_support_uris)));
}


Glib::RefPtr<AppInfo> AppInfo::get_default_for_uri_scheme(const std::string& uri_scheme)
{
  return Glib::wrap(g_app_info_get_default_for_uri_scheme(uri_scheme.c_str()));
}


void AppInfo::reset_type_associations(const std::string& content_type)
{
  g_app_info_reset_type_associations(content_type.c_str());
}


bool AppInfo::launch_default_for_uri(const std::string& uri, const Glib::RefPtr<AppLaunchContext>& launch_context)
{
  GError* gerror = 0;
  bool retvalue = g_app_info_launch_default_for_uri(uri.c_str(), Glib::unwrap(launch_context), &(gerror));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}


bool AppInfo::launch_default_for_uri(const std::string& uri)
{
  GError* gerror = 0;
  bool retvalue = g_app_info_launch_default_for_uri(uri.c_str(), 0, &(gerror));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}


} // namespace Gio


