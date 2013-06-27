// Generated by gtkmmproc -- DO NOT MODIFY!

#undef G_DISABLE_DEPRECATED
#define GLIB_DISABLE_DEPRECATION_WARNINGS 1
 

#include <glibmm.h>

#include <giomm/application.h>
#include <giomm/private/application_p.h>


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

#include <gio/gio.h>
#include <giomm/file.h>
#include <giomm/actiongroup.h>
#include <giomm/init.h>

namespace
{

static void Application_signal_open_callback(GApplication* self, GFile** files,
  gint n_files, const gchar* hint, void* data)
{
  typedef sigc::slot< void, const Gio::Application::type_vec_files&, const Glib::ustring& > SlotType;

  Gio::Application::type_vec_files vec_files(n_files);
  for(int i = 0; i < n_files; ++i)
  {
    vec_files[i] = Glib::wrap(files[i], true);
  }

  const Glib::ustring hint_str = (hint ? hint : Glib::ustring());

  // Do not try to call a signal on a disassociated wrapper.
  if(Glib::ObjectBase::_get_current_wrapper((GObject*) self))
  {
    try
    {
      if(sigc::slot_base *const slot = Glib::SignalProxyNormal::data_to_slot(data)) {
        (*static_cast<SlotType*>(slot))(vec_files, hint_str);
        return;
      }
    }
    catch(...)
    {
      Glib::exception_handlers_invoke();
    }
  }

  return;
}

static void Application_signal_open_notify_callback(GApplication* self, GFile** files,
                                             gint n_files, const gchar *hint, void* data)
{
  using namespace Gio;
  typedef sigc::slot< void, const Application::type_vec_files&, const Glib::ustring& > SlotType;

  Application::type_vec_files vec_files(n_files);
  for (int i = 0; i < n_files; i++)
  {
    vec_files[i] = Glib::wrap(files[i], true);
  }

  const Glib::ustring hint_str = (hint ? hint : Glib::ustring());

  // Do not try to call a signal on a disassociated wrapper.
  if(Glib::ObjectBase::_get_current_wrapper((GObject*) self))
  {
    try
    {
      if(sigc::slot_base *const slot = Glib::SignalProxyNormal::data_to_slot(data))
      {
        (*static_cast<SlotType*>(slot))(vec_files, hint_str);
        return;
      }
    }
    catch(...)
    {
      Glib::exception_handlers_invoke();
    }
  }

  return;
}

static const Glib::SignalProxyInfo Application_signal_open_info =
{
  "open",
  (GCallback) &Application_signal_open_callback,
  (GCallback) &Application_signal_open_notify_callback
};

}

namespace Gio
{


const Glib::Class& Application::custom_class_init()
{
  Glib::init();
  Gio::init();
  return application_class_.init();
}


Application::Application(const Glib::ustring& application_id, ApplicationFlags flags)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Glib::Object(Glib::ConstructParams(custom_class_init(), "application_id", (application_id.empty() ? 0 : application_id.c_str()), "flags", ((GApplicationFlags)(flags)), static_cast<char*>(0)))
{

}

//static
void Application::unset_default()
{
  g_application_set_default(0);
}

void Application_Class::open_callback(GApplication* self, GFile** files,
  gint n_files, const gchar *hint)
{
  Glib::ObjectBase *const obj_base = static_cast<Glib::ObjectBase*>(
      Glib::ObjectBase::_get_current_wrapper((GObject*)self));

  // Non-gtkmmproc-generated custom classes implicitly call the default
  // Glib::ObjectBase constructor, which sets is_derived_. But gtkmmproc-
  // generated classes can use this optimisation, which avoids the unnecessary
  // parameter conversions if there is no possibility of the virtual function
  // being overridden:

  if(obj_base && obj_base->is_derived_())
  {
    CppObjectType *const obj = dynamic_cast<CppObjectType* const>(obj_base);
    if(obj) // This can be NULL during destruction.
    {
      try // Trap C++ exceptions which would normally be lost because this is a C callback.
      {
        // Call the virtual member method, which derived classes might override.
        Application::type_vec_files vec_files(n_files);
        for (int i = 0; i < n_files; i++) {
          vec_files[i] = Glib::wrap(files[i], true);
        }

        const Glib::ustring hint_str = (hint ? hint : Glib::ustring());

        obj->on_open(vec_files, hint_str);
        return;
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
    }
  }

  BaseClassType *const base = static_cast<BaseClassType*>(
    g_type_class_peek_parent(G_OBJECT_GET_CLASS(self)) // Get the parent class of the object class (The original underlying C class).
    );

  // Call the original underlying C function:
  if(base && base->open)
    (*base->open)(self, files, n_files, hint);
}

Glib::SignalProxy2< void, const Application::type_vec_files&, const Glib::ustring& > Application::signal_open()
{
  return Glib::SignalProxy2< void, const Application::type_vec_files&, const Glib::ustring& >(this, &Application_signal_open_info);
}

void Gio::Application::on_open(const Application::type_vec_files& files, const Glib::ustring& hint)
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->open) {
    (*base->open)(gobj(),
      Glib::ArrayHandler<type_vec_files::value_type>::vector_to_array(files).data(),
      files.size(),
      hint.c_str());
  }
}

void Application::open(const type_vec_files& files, const Glib::ustring& hint)
{
  g_application_open(gobj(),
    Glib::ArrayHandler<type_vec_files::value_type>::vector_to_array(files).data(),
    files.size(),
    hint.c_str());
}

void Application::open(const Glib::RefPtr<Gio::File>& file, const Glib::ustring& hint)
{
  type_vec_files files(1);
  files[0] = file;
  open(files, hint);
}

} // namespace Gio

namespace
{


static const Glib::SignalProxyInfo Application_signal_startup_info =
{
  "startup",
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback,
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback
};


static const Glib::SignalProxyInfo Application_signal_activate_info =
{
  "activate",
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback,
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback
};


static gint Application_signal_command_line_callback(GApplication* self, GApplicationCommandLine* p0,void* data)
{
  using namespace Gio;
  typedef sigc::slot< int,const Glib::RefPtr<ApplicationCommandLine>& > SlotType;

  // Do not try to call a signal on a disassociated wrapper.
  if(Glib::ObjectBase::_get_current_wrapper((GObject*) self))
  {
    #ifdef GLIBMM_EXCEPTIONS_ENABLED
    try
    {
    #endif //GLIBMM_EXCEPTIONS_ENABLED
      if(sigc::slot_base *const slot = Glib::SignalProxyNormal::data_to_slot(data))
        return (*static_cast<SlotType*>(slot))(Glib::wrap(p0, true)
);
    #ifdef GLIBMM_EXCEPTIONS_ENABLED
    }
    catch(...)
    {
      Glib::exception_handlers_invoke();
    }
    #endif //GLIBMM_EXCEPTIONS_ENABLED
  }

  typedef gint RType;
  return RType();
}

static gint Application_signal_command_line_notify_callback(GApplication* self, GApplicationCommandLine* p0, void* data)
{
  using namespace Gio;
  typedef sigc::slot< void,const Glib::RefPtr<ApplicationCommandLine>& > SlotType;

  // Do not try to call a signal on a disassociated wrapper.
  if(Glib::ObjectBase::_get_current_wrapper((GObject*) self))
  {
    #ifdef GLIBMM_EXCEPTIONS_ENABLED
    try
    {
    #endif //GLIBMM_EXCEPTIONS_ENABLED
      if(sigc::slot_base *const slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(Glib::wrap(p0, true)
);
    #ifdef GLIBMM_EXCEPTIONS_ENABLED
    }
    catch(...)
    {
      Glib::exception_handlers_invoke();
    }
    #endif //GLIBMM_EXCEPTIONS_ENABLED
  }

  typedef gint RType;
  return RType();
}

static const Glib::SignalProxyInfo Application_signal_command_line_info =
{
  "command-line",
  (GCallback) &Application_signal_command_line_callback,
  (GCallback) &Application_signal_command_line_notify_callback
};


} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gio::Application> wrap(GApplication* object, bool take_copy)
{
  return Glib::RefPtr<Gio::Application>( dynamic_cast<Gio::Application*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gio
{


/* The *_Class implementation: */

const Glib::Class& Application_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &Application_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(g_application_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:
  ActionGroup::add_interface(get_type());
  ActionMap::add_interface(get_type());

  }

  return *this;
}


void Application_Class::class_init_function(void* g_class, void* class_data)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);

  klass->local_command_line = &local_command_line_vfunc_callback;
  klass->before_emit = &before_emit_vfunc_callback;
  klass->after_emit = &after_emit_vfunc_callback;
  klass->quit_mainloop = &quit_mainloop_vfunc_callback;
  klass->run_mainloop = &run_mainloop_vfunc_callback;

  klass->startup = &startup_callback;
  klass->activate = &activate_callback;
  klass->command_line = &command_line_callback;
  klass->open = &open_callback;
  }

gboolean Application_Class::local_command_line_vfunc_callback(GApplication* self, gchar*** arguments, int* exit_status)
{
  Glib::ObjectBase *const obj_base = static_cast<Glib::ObjectBase*>(
      Glib::ObjectBase::_get_current_wrapper((GObject*)self));

  // Non-gtkmmproc-generated custom classes implicitly call the default
  // Glib::ObjectBase constructor, which sets is_derived_. But gtkmmproc-
  // generated classes can use this optimisation, which avoids the unnecessary
  // parameter conversions if there is no possibility of the virtual function
  // being overridden:
  if(obj_base && obj_base->is_derived_())
  {
    CppObjectType *const obj = dynamic_cast<CppObjectType* const>(obj_base);
    if(obj) // This can be NULL during destruction.
    {
      #ifdef GLIBMM_EXCEPTIONS_ENABLED
      try // Trap C++ exceptions which would normally be lost because this is a C callback.
      {
      #endif //GLIBMM_EXCEPTIONS_ENABLED
        // Call the virtual member method, which derived classes might override.
        return static_cast<int>(obj->local_command_line_vfunc(*(arguments)
, *(exit_status)
));
      #ifdef GLIBMM_EXCEPTIONS_ENABLED
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
      #endif //GLIBMM_EXCEPTIONS_ENABLED
    }
  }

  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(self)) // Get the parent class of the object class (The original underlying C class).
  );

  // Call the original underlying C function:
  if(base && base->local_command_line)
  {
    gboolean retval = (*base->local_command_line)(self, arguments, exit_status);
    return retval;
  }


  typedef gboolean RType;
  return RType();
}
void Application_Class::before_emit_vfunc_callback(GApplication* self, GVariant* platform_data)
{
  Glib::ObjectBase *const obj_base = static_cast<Glib::ObjectBase*>(
      Glib::ObjectBase::_get_current_wrapper((GObject*)self));

  // Non-gtkmmproc-generated custom classes implicitly call the default
  // Glib::ObjectBase constructor, which sets is_derived_. But gtkmmproc-
  // generated classes can use this optimisation, which avoids the unnecessary
  // parameter conversions if there is no possibility of the virtual function
  // being overridden:
  if(obj_base && obj_base->is_derived_())
  {
    CppObjectType *const obj = dynamic_cast<CppObjectType* const>(obj_base);
    if(obj) // This can be NULL during destruction.
    {
      #ifdef GLIBMM_EXCEPTIONS_ENABLED
      try // Trap C++ exceptions which would normally be lost because this is a C callback.
      {
      #endif //GLIBMM_EXCEPTIONS_ENABLED
        // Call the virtual member method, which derived classes might override.
        obj->before_emit_vfunc(Glib::wrap(platform_data,true)
);
        return;
      #ifdef GLIBMM_EXCEPTIONS_ENABLED
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
      #endif //GLIBMM_EXCEPTIONS_ENABLED
    }
  }

  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(self)) // Get the parent class of the object class (The original underlying C class).
  );

  // Call the original underlying C function:
  if(base && base->before_emit)
  {
    (*base->before_emit)(self, platform_data);
  }

}
void Application_Class::after_emit_vfunc_callback(GApplication* self, GVariant* platform_data)
{
  Glib::ObjectBase *const obj_base = static_cast<Glib::ObjectBase*>(
      Glib::ObjectBase::_get_current_wrapper((GObject*)self));

  // Non-gtkmmproc-generated custom classes implicitly call the default
  // Glib::ObjectBase constructor, which sets is_derived_. But gtkmmproc-
  // generated classes can use this optimisation, which avoids the unnecessary
  // parameter conversions if there is no possibility of the virtual function
  // being overridden:
  if(obj_base && obj_base->is_derived_())
  {
    CppObjectType *const obj = dynamic_cast<CppObjectType* const>(obj_base);
    if(obj) // This can be NULL during destruction.
    {
      #ifdef GLIBMM_EXCEPTIONS_ENABLED
      try // Trap C++ exceptions which would normally be lost because this is a C callback.
      {
      #endif //GLIBMM_EXCEPTIONS_ENABLED
        // Call the virtual member method, which derived classes might override.
        obj->after_emit_vfunc(Glib::wrap(platform_data,true)
);
        return;
      #ifdef GLIBMM_EXCEPTIONS_ENABLED
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
      #endif //GLIBMM_EXCEPTIONS_ENABLED
    }
  }

  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(self)) // Get the parent class of the object class (The original underlying C class).
  );

  // Call the original underlying C function:
  if(base && base->after_emit)
  {
    (*base->after_emit)(self, platform_data);
  }

}
void Application_Class::quit_mainloop_vfunc_callback(GApplication* self)
{
  Glib::ObjectBase *const obj_base = static_cast<Glib::ObjectBase*>(
      Glib::ObjectBase::_get_current_wrapper((GObject*)self));

  // Non-gtkmmproc-generated custom classes implicitly call the default
  // Glib::ObjectBase constructor, which sets is_derived_. But gtkmmproc-
  // generated classes can use this optimisation, which avoids the unnecessary
  // parameter conversions if there is no possibility of the virtual function
  // being overridden:
  if(obj_base && obj_base->is_derived_())
  {
    CppObjectType *const obj = dynamic_cast<CppObjectType* const>(obj_base);
    if(obj) // This can be NULL during destruction.
    {
      #ifdef GLIBMM_EXCEPTIONS_ENABLED
      try // Trap C++ exceptions which would normally be lost because this is a C callback.
      {
      #endif //GLIBMM_EXCEPTIONS_ENABLED
        // Call the virtual member method, which derived classes might override.
        obj->quit_mainloop_vfunc();
        return;
      #ifdef GLIBMM_EXCEPTIONS_ENABLED
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
      #endif //GLIBMM_EXCEPTIONS_ENABLED
    }
  }

  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(self)) // Get the parent class of the object class (The original underlying C class).
  );

  // Call the original underlying C function:
  if(base && base->quit_mainloop)
  {
    (*base->quit_mainloop)(self);
  }

}
void Application_Class::run_mainloop_vfunc_callback(GApplication* self)
{
  Glib::ObjectBase *const obj_base = static_cast<Glib::ObjectBase*>(
      Glib::ObjectBase::_get_current_wrapper((GObject*)self));

  // Non-gtkmmproc-generated custom classes implicitly call the default
  // Glib::ObjectBase constructor, which sets is_derived_. But gtkmmproc-
  // generated classes can use this optimisation, which avoids the unnecessary
  // parameter conversions if there is no possibility of the virtual function
  // being overridden:
  if(obj_base && obj_base->is_derived_())
  {
    CppObjectType *const obj = dynamic_cast<CppObjectType* const>(obj_base);
    if(obj) // This can be NULL during destruction.
    {
      #ifdef GLIBMM_EXCEPTIONS_ENABLED
      try // Trap C++ exceptions which would normally be lost because this is a C callback.
      {
      #endif //GLIBMM_EXCEPTIONS_ENABLED
        // Call the virtual member method, which derived classes might override.
        obj->run_mainloop_vfunc();
        return;
      #ifdef GLIBMM_EXCEPTIONS_ENABLED
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
      #endif //GLIBMM_EXCEPTIONS_ENABLED
    }
  }

  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(self)) // Get the parent class of the object class (The original underlying C class).
  );

  // Call the original underlying C function:
  if(base && base->run_mainloop)
  {
    (*base->run_mainloop)(self);
  }

}

void Application_Class::startup_callback(GApplication* self)
{
  Glib::ObjectBase *const obj_base = static_cast<Glib::ObjectBase*>(
      Glib::ObjectBase::_get_current_wrapper((GObject*)self));

  // Non-gtkmmproc-generated custom classes implicitly call the default
  // Glib::ObjectBase constructor, which sets is_derived_. But gtkmmproc-
  // generated classes can use this optimisation, which avoids the unnecessary
  // parameter conversions if there is no possibility of the virtual function
  // being overridden:
  if(obj_base && obj_base->is_derived_())
  {
    CppObjectType *const obj = dynamic_cast<CppObjectType* const>(obj_base);
    if(obj) // This can be NULL during destruction.
    {
      #ifdef GLIBMM_EXCEPTIONS_ENABLED
      try // Trap C++ exceptions which would normally be lost because this is a C callback.
      {
      #endif //GLIBMM_EXCEPTIONS_ENABLED
        // Call the virtual member method, which derived classes might override.
        obj->on_startup();
        return;
      #ifdef GLIBMM_EXCEPTIONS_ENABLED
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
      #endif //GLIBMM_EXCEPTIONS_ENABLED
    }
  }

  BaseClassType *const base = static_cast<BaseClassType*>(
        g_type_class_peek_parent(G_OBJECT_GET_CLASS(self)) // Get the parent class of the object class (The original underlying C class).
    );

  // Call the original underlying C function:
  if(base && base->startup)
    (*base->startup)(self);
}
void Application_Class::activate_callback(GApplication* self)
{
  Glib::ObjectBase *const obj_base = static_cast<Glib::ObjectBase*>(
      Glib::ObjectBase::_get_current_wrapper((GObject*)self));

  // Non-gtkmmproc-generated custom classes implicitly call the default
  // Glib::ObjectBase constructor, which sets is_derived_. But gtkmmproc-
  // generated classes can use this optimisation, which avoids the unnecessary
  // parameter conversions if there is no possibility of the virtual function
  // being overridden:
  if(obj_base && obj_base->is_derived_())
  {
    CppObjectType *const obj = dynamic_cast<CppObjectType* const>(obj_base);
    if(obj) // This can be NULL during destruction.
    {
      #ifdef GLIBMM_EXCEPTIONS_ENABLED
      try // Trap C++ exceptions which would normally be lost because this is a C callback.
      {
      #endif //GLIBMM_EXCEPTIONS_ENABLED
        // Call the virtual member method, which derived classes might override.
        obj->on_activate();
        return;
      #ifdef GLIBMM_EXCEPTIONS_ENABLED
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
      #endif //GLIBMM_EXCEPTIONS_ENABLED
    }
  }

  BaseClassType *const base = static_cast<BaseClassType*>(
        g_type_class_peek_parent(G_OBJECT_GET_CLASS(self)) // Get the parent class of the object class (The original underlying C class).
    );

  // Call the original underlying C function:
  if(base && base->activate)
    (*base->activate)(self);
}
gint Application_Class::command_line_callback(GApplication* self, GApplicationCommandLine* p0)
{
  Glib::ObjectBase *const obj_base = static_cast<Glib::ObjectBase*>(
      Glib::ObjectBase::_get_current_wrapper((GObject*)self));

  // Non-gtkmmproc-generated custom classes implicitly call the default
  // Glib::ObjectBase constructor, which sets is_derived_. But gtkmmproc-
  // generated classes can use this optimisation, which avoids the unnecessary
  // parameter conversions if there is no possibility of the virtual function
  // being overridden:
  if(obj_base && obj_base->is_derived_())
  {
    CppObjectType *const obj = dynamic_cast<CppObjectType* const>(obj_base);
    if(obj) // This can be NULL during destruction.
    {
      #ifdef GLIBMM_EXCEPTIONS_ENABLED
      try // Trap C++ exceptions which would normally be lost because this is a C callback.
      {
      #endif //GLIBMM_EXCEPTIONS_ENABLED
        // Call the virtual member method, which derived classes might override.
        return obj->on_command_line(Glib::wrap(p0, true)
);
      #ifdef GLIBMM_EXCEPTIONS_ENABLED
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
      #endif //GLIBMM_EXCEPTIONS_ENABLED
    }
  }

  BaseClassType *const base = static_cast<BaseClassType*>(
        g_type_class_peek_parent(G_OBJECT_GET_CLASS(self)) // Get the parent class of the object class (The original underlying C class).
    );

  // Call the original underlying C function:
  if(base && base->command_line)
    return (*base->command_line)(self, p0);

  typedef gint RType;
  return RType();
}


Glib::ObjectBase* Application_Class::wrap_new(GObject* object)
{
  return new Application((GApplication*)object);
}


/* The implementation: */

GApplication* Application::gobj_copy()
{
  reference();
  return gobj();
}

Application::Application(const Glib::ConstructParams& construct_params)
:
  Glib::Object(construct_params)
{

}

Application::Application(GApplication* castitem)
:
  Glib::Object((GObject*)(castitem))
{}


Application::~Application()
{}


Application::CppClassType Application::application_class_; // initialize static member

GType Application::get_type()
{
  return application_class_.init().get_type();
}


GType Application::get_base_type()
{
  return g_application_get_type();
}


Glib::RefPtr<Application> Application::create(const Glib::ustring& application_id, ApplicationFlags flags)
{
  return Glib::RefPtr<Application>( new Application(application_id, flags) );
}

bool Application::id_is_valid(const Glib::ustring& application_id)
{
  return g_application_id_is_valid(application_id.c_str());
}


Glib::ustring Application::get_id() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(g_application_get_application_id(const_cast<GApplication*>(gobj())));
}

void Application::set_id(const Glib::ustring& application_id)
{
  g_application_set_application_id(gobj(), application_id.c_str());
}

Glib::RefPtr<DBus::Connection> Application::get_dbus_connection()
{
  Glib::RefPtr<DBus::Connection> retvalue = Glib::wrap(g_application_get_dbus_connection(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const DBus::Connection> Application::get_dbus_connection() const
{
  return const_cast<Application*>(this)->get_dbus_connection();
}

Glib::ustring Application::get_dbus_object_path() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(g_application_get_dbus_object_path(const_cast<GApplication*>(gobj())));
}

guint Application::get_inactivity_timeout() const
{
  return g_application_get_inactivity_timeout(const_cast<GApplication*>(gobj()));
}

void Application::set_inactivity_timeout(guint inactivity_timeout)
{
  g_application_set_inactivity_timeout(gobj(), inactivity_timeout);
}

ApplicationFlags Application::get_flags() const
{
  return ((ApplicationFlags)(g_application_get_flags(const_cast<GApplication*>(gobj()))));
}

void Application::set_flags(ApplicationFlags flags)
{
  g_application_set_flags(gobj(), ((GApplicationFlags)(flags)));
}

void Application::set_action_group(const Glib::RefPtr<ActionGroup>& action_group)
{
  g_application_set_action_group(gobj(), Glib::unwrap(action_group));
}

bool Application::is_registered() const
{
  return g_application_get_is_registered(const_cast<GApplication*>(gobj()));
}

bool Application::is_remote() const
{
  return g_application_get_is_remote(const_cast<GApplication*>(gobj()));
}

bool Application::register_application(const Glib::RefPtr<Gio::Cancellable>& cancellable)
{
  GError* gerror = 0;
  bool retvalue = g_application_register(gobj(), const_cast<GCancellable*>(Glib::unwrap(cancellable)), &(gerror));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}

bool Application::register_application()
{
  GError* gerror = 0;
  bool retvalue = g_application_register(gobj(), 0, &(gerror));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}

void Application::hold()
{
  g_application_hold(gobj());
}

void Application::release()
{
  g_application_release(gobj());
}

void Application::activate()
{
  g_application_activate(gobj());
}

int Application::run(int argc, char** argv)
{
  return g_application_run(gobj(), argc, argv);
}

void Application::quit()
{
  g_application_quit(gobj());
}

void Application::set_default(const Glib::RefPtr<Application>& application)
{
  g_application_set_default(const_cast<GApplication*>(Glib::unwrap(application)));
}


Glib::RefPtr<Application> Application::get_default()
{
  return Glib::wrap(g_application_get_default());
}


Glib::SignalProxy0< void > Application::signal_startup()
{
  return Glib::SignalProxy0< void >(this, &Application_signal_startup_info);
}


Glib::SignalProxy0< void > Application::signal_activate()
{
  return Glib::SignalProxy0< void >(this, &Application_signal_activate_info);
}


Glib::SignalProxy1< int,const Glib::RefPtr<ApplicationCommandLine>& > Application::signal_command_line()
{
  return Glib::SignalProxy1< int,const Glib::RefPtr<ApplicationCommandLine>& >(this, &Application_signal_command_line_info);
}


#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_WriteOnly< Glib::RefPtr<ActionGroup> > Application::property_action_group() 
{
  return Glib::PropertyProxy_WriteOnly< Glib::RefPtr<ActionGroup> >(this, "action-group");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< Glib::ustring > Application::property_application_id() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "application-id");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< Glib::ustring > Application::property_application_id() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "application-id");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< ApplicationFlags > Application::property_flags() 
{
  return Glib::PropertyProxy< ApplicationFlags >(this, "flags");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< ApplicationFlags > Application::property_flags() const
{
  return Glib::PropertyProxy_ReadOnly< ApplicationFlags >(this, "flags");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< guint > Application::property_inactivity_timeout() 
{
  return Glib::PropertyProxy< guint >(this, "inactivity-timeout");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< guint > Application::property_inactivity_timeout() const
{
  return Glib::PropertyProxy_ReadOnly< guint >(this, "inactivity-timeout");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< bool > Application::property_is_registered() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "is-registered");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< bool > Application::property_is_remote() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "is-remote");
}
#endif //GLIBMM_PROPERTIES_ENABLED


void Gio::Application::on_startup()
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->startup)
    (*base->startup)(gobj());
}
void Gio::Application::on_activate()
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->activate)
    (*base->activate)(gobj());
}
int Gio::Application::on_command_line(const Glib::RefPtr<ApplicationCommandLine>& command_line)
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->command_line)
    return (*base->command_line)(gobj(),const_cast<GApplicationCommandLine*>(Glib::unwrap(command_line)));

  typedef int RType;
  return RType();
}

bool Gio::Application::local_command_line_vfunc(char**& arguments, int& exit_status) 
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->local_command_line)
  {
    bool retval((*base->local_command_line)(gobj(),&(arguments),&(exit_status)));
    return retval;
  }

  typedef bool RType;
  return RType();
}
void Gio::Application::before_emit_vfunc(const Glib::VariantBase& platform_data) 
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->before_emit)
  {
    (*base->before_emit)(gobj(),const_cast<GVariant*>((platform_data).gobj()));
  }
}
void Gio::Application::after_emit_vfunc(const Glib::VariantBase& platform_data) 
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->after_emit)
  {
    (*base->after_emit)(gobj(),const_cast<GVariant*>((platform_data).gobj()));
  }
}
void Gio::Application::quit_mainloop_vfunc() 
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->quit_mainloop)
  {
    (*base->quit_mainloop)(gobj());
  }
}
void Gio::Application::run_mainloop_vfunc() 
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->run_mainloop)
  {
    (*base->run_mainloop)(gobj());
  }
}


} // namespace Gio

