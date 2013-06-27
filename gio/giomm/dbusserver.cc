// Generated by gtkmmproc -- DO NOT MODIFY!


#include <glibmm.h>

#include <giomm/dbusserver.h>
#include <giomm/private/dbusserver_p.h>


// -*- Mode: C++; indent-tabs-mode: nil; c-basic-offset: 2 -*-

/* Copyright (C) 2010 The giomm Development Team
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
#include <glibmm/error.h>
#include <glibmm/exceptionhandler.h>
#include <giomm/dbusconnection.h>
#include <giomm/dbusauthobserver.h>

namespace Gio
{

namespace DBus
{

Server::Server(const std::string& address,
  const std::string& guid,
  const Glib::RefPtr<AuthObserver>& observer,
  const Glib::RefPtr<Cancellable>& cancellable,
  ServerFlags flags)
  : // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Glib::Object(Glib::ConstructParams(server_class_.init(), "address",(address.empty() ? static_cast<char*>(0) : address.c_str()),"flags",static_cast<GDBusServerFlags>(flags),"guid",(guid.empty() ? static_cast<char*>(0) : guid.c_str()),"authentication-observer",Glib::unwrap(observer), static_cast<char*>(0)))
{
  init(cancellable);
}

Server::Server(const std::string& address,
  const std::string& guid,
  const Glib::RefPtr<Cancellable>& cancellable,
  ServerFlags flags)
  : // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Glib::Object(Glib::ConstructParams(server_class_.init(), "address",(address.empty() ? static_cast<char*>(0) : address.c_str()),"flags",static_cast<GDBusServerFlags>(flags),"guid",(guid.empty() ? static_cast<char*>(0) : guid.c_str()),"authentication-observer",static_cast<GDBusAuthObserver*>(0), static_cast<char*>(0)))
{
  init(cancellable);
}

Server::Server(const std::string& address,
  const std::string& guid,
  const Glib::RefPtr<AuthObserver>& observer,
  ServerFlags flags)
  : // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Glib::Object(Glib::ConstructParams(server_class_.init(), "address",(address.empty() ? static_cast<char*>(0) : address.c_str()),"flags",static_cast<GDBusServerFlags>(flags),"guid",(guid.empty() ? static_cast<char*>(0) : guid.c_str()),"authentication-observer",Glib::unwrap(observer), static_cast<char*>(0)))
{
  init();
}

Server::Server(const std::string& address,
  const std::string& guid,
  ServerFlags flags)
  : // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Glib::Object(Glib::ConstructParams(server_class_.init(), "address",(address.empty() ? static_cast<char*>(0) : address.c_str()),"flags",static_cast<GDBusServerFlags>(flags),"guid",(guid.empty() ? static_cast<char*>(0) : guid.c_str()),"authentication-observer",static_cast<GDBusAuthObserver*>(0), static_cast<char*>(0)))
{
  init();
}

Glib::RefPtr<Server> Server::create_sync(const std::string& address,
  const std::string& guid,
  const Glib::RefPtr<AuthObserver>& observer,
  const Glib::RefPtr<Cancellable>& cancellable,
  ServerFlags flags)
{
  return Glib::RefPtr<Server>(new Server(address, guid, observer,
    cancellable, flags));
}

Glib::RefPtr<Server> Server::create_sync(const std::string& address,
  const std::string& guid,
  const Glib::RefPtr<Cancellable>& cancellable,
  ServerFlags flags)
{
  return Glib::RefPtr<Server>(new Server(address, guid,
    cancellable, flags));
}

Glib::RefPtr<Server> Server::create_sync(const std::string& address,
  const std::string& guid,
  const Glib::RefPtr<AuthObserver>& observer,
  ServerFlags flags)
{
  return Glib::RefPtr<Server>(new Server(address, guid, observer,
    flags));
}

Glib::RefPtr<Server> Server::create_sync(const std::string& address,
  const std::string& guid,
  ServerFlags flags)
{
  return Glib::RefPtr<Server>(new Server(address, guid, flags));
}

} // namespace DBus
} // namespace Gio

namespace
{


static gboolean Server_signal_new_connection_callback(GDBusServer* self, GDBusConnection* p0,void* data)
{
  using namespace Gio::DBus;
  typedef sigc::slot< bool,const Glib::RefPtr<Connection>& > SlotType;

  // Do not try to call a signal on a disassociated wrapper.
  if(Glib::ObjectBase::_get_current_wrapper((GObject*) self))
  {
    #ifdef GLIBMM_EXCEPTIONS_ENABLED
    try
    {
    #endif //GLIBMM_EXCEPTIONS_ENABLED
      if(sigc::slot_base *const slot = Glib::SignalProxyNormal::data_to_slot(data))
        return static_cast<int>((*static_cast<SlotType*>(slot))(Glib::wrap(p0, true)
));
    #ifdef GLIBMM_EXCEPTIONS_ENABLED
    }
    catch(...)
    {
      Glib::exception_handlers_invoke();
    }
    #endif //GLIBMM_EXCEPTIONS_ENABLED
  }

  typedef gboolean RType;
  return RType();
}

static gboolean Server_signal_new_connection_notify_callback(GDBusServer* self, GDBusConnection* p0, void* data)
{
  using namespace Gio::DBus;
  typedef sigc::slot< void,const Glib::RefPtr<Connection>& > SlotType;

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

  typedef gboolean RType;
  return RType();
}

static const Glib::SignalProxyInfo Server_signal_new_connection_info =
{
  "new-connection",
  (GCallback) &Server_signal_new_connection_callback,
  (GCallback) &Server_signal_new_connection_notify_callback
};


} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gio::DBus::Server> wrap(GDBusServer* object, bool take_copy)
{
  return Glib::RefPtr<Gio::DBus::Server>( dynamic_cast<Gio::DBus::Server*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gio
{

namespace DBus
{


/* The *_Class implementation: */

const Glib::Class& Server_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &Server_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(g_dbus_server_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:
  Initable::add_interface(get_type());

  }

  return *this;
}


void Server_Class::class_init_function(void* g_class, void* class_data)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* Server_Class::wrap_new(GObject* object)
{
  return new Server((GDBusServer*)object);
}


/* The implementation: */

GDBusServer* Server::gobj_copy()
{
  reference();
  return gobj();
}

Server::Server(const Glib::ConstructParams& construct_params)
:
  Glib::Object(construct_params)
{

}

Server::Server(GDBusServer* castitem)
:
  Glib::Object((GObject*)(castitem))
{}


Server::~Server()
{}


Server::CppClassType Server::server_class_; // initialize static member

GType Server::get_type()
{
  return server_class_.init().get_type();
}


GType Server::get_base_type()
{
  return g_dbus_server_get_type();
}


void Server::start()
{
  g_dbus_server_start(gobj());
}

void Server::stop()
{
  g_dbus_server_stop(gobj());
}

bool Server::is_active() const
{
  return g_dbus_server_is_active(const_cast<GDBusServer*>(gobj()));
}

std::string Server::get_guid() const
{
  return Glib::convert_const_gchar_ptr_to_stdstring(g_dbus_server_get_guid(const_cast<GDBusServer*>(gobj())));
}

ServerFlags Server::get_flags() const
{
  return ((ServerFlags)(g_dbus_server_get_flags(const_cast<GDBusServer*>(gobj()))));
}

std::string Server::get_client_address() const
{
  return Glib::convert_const_gchar_ptr_to_stdstring(g_dbus_server_get_client_address(const_cast<GDBusServer*>(gobj())));
}


Glib::SignalProxy1< bool,const Glib::RefPtr<Connection>& > Server::signal_new_connection()
{
  return Glib::SignalProxy1< bool,const Glib::RefPtr<Connection>& >(this, &Server_signal_new_connection_info);
}


#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< bool > Server::property_active() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "active");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< std::string > Server::property_address() const
{
  return Glib::PropertyProxy_ReadOnly< std::string >(this, "address");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< Glib::RefPtr<AuthObserver> > Server::property_authentication_observer() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<AuthObserver> >(this, "authentication-observer");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< std::string > Server::property_client_address() const
{
  return Glib::PropertyProxy_ReadOnly< std::string >(this, "client-address");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< ServerFlags > Server::property_flags() const
{
  return Glib::PropertyProxy_ReadOnly< ServerFlags >(this, "flags");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< std::string > Server::property_guid() const
{
  return Glib::PropertyProxy_ReadOnly< std::string >(this, "guid");
}
#endif //GLIBMM_PROPERTIES_ENABLED


} // namespace DBus

} // namespace Gio

