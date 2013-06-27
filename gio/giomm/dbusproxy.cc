// Generated by gtkmmproc -- DO NOT MODIFY!


#include <glibmm.h>

#include <giomm/dbusproxy.h>
#include <giomm/private/dbusproxy_p.h>


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
#include <glibmm/vectorutils.h>
#include <giomm/asyncresult.h>
#include <giomm/dbusconnection.h>
#include <giomm/dbusintrospection.h>
#include <giomm/slot_async.h>

namespace Gio
{

namespace DBus
{

//Help the generate code:
typedef Proxy::MapChangedProperties MapChangedProperties;

Proxy::Proxy(const Glib::RefPtr<Connection>& connection,
  const Glib::ustring& name,
  const Glib::ustring& object_path,
  const Glib::ustring& interface_name,
  const SlotAsyncReady& slot,
  const Glib::RefPtr<Cancellable>& cancellable,
  const Glib::RefPtr<InterfaceInfo>& info,
  ProxyFlags flags)
:
// Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Glib::Object(Glib::ConstructParams(proxy_class_.init(), "g-connection",Glib::unwrap(connection),"g-flags",static_cast<GDBusProxyFlags>(flags),"g-interface-info",Glib::unwrap(info),"g-name",(name.empty() ? 0 : name.c_str()),"g-object-path",(object_path.empty() ? 0 : object_path.c_str()),"g-interface-name",(interface_name.empty() ? 0 : interface_name.c_str()), static_cast<char*>(0)))
{
  init_async(slot, cancellable);
}

Proxy::Proxy(const Glib::RefPtr<Connection>& connection,
  const Glib::ustring& name,
  const Glib::ustring& object_path,
  const Glib::ustring& interface_name,
  const SlotAsyncReady& slot,
  const Glib::RefPtr<InterfaceInfo>& info,
  ProxyFlags flags)
:
// Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Glib::Object(Glib::ConstructParams(proxy_class_.init(), "g-connection",Glib::unwrap(connection),"g-flags",static_cast<GDBusProxyFlags>(flags),"g-interface-info",Glib::unwrap(info),"g-name",(name.empty() ? 0 : name.c_str()),"g-object-path",(object_path.empty() ? 0 : object_path.c_str()),"g-interface-name",(interface_name.empty() ? 0 : interface_name.c_str()), static_cast<char*>(0)))
{
  init_async(slot);
}

Proxy::Proxy(const Glib::RefPtr<Connection>& connection,
  const Glib::ustring& name,
  const Glib::ustring& object_path,
  const Glib::ustring& interface_name,
  const Glib::RefPtr<Cancellable>& cancellable,
  const Glib::RefPtr<InterfaceInfo>& info,
  ProxyFlags flags)
:
// Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Glib::Object(Glib::ConstructParams(proxy_class_.init(), "g-connection",Glib::unwrap(connection),"g-flags",static_cast<GDBusProxyFlags>(flags),"g-interface-info",Glib::unwrap(info),"g-name",(name.empty() ? 0 : name.c_str()),"g-object-path",(object_path.empty() ? 0 : object_path.c_str()),"g-interface-name",(interface_name.empty() ? 0 : interface_name.c_str()), static_cast<char*>(0)))
{
  init(cancellable);
}

Proxy::Proxy(const Glib::RefPtr<Connection>& connection,
  const Glib::ustring& name,
  const Glib::ustring& object_path,
  const Glib::ustring& interface_name,
  const Glib::RefPtr<InterfaceInfo>& info,
  ProxyFlags flags)
:
// Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Glib::Object(Glib::ConstructParams(proxy_class_.init(), "g-connection",Glib::unwrap(connection),"g-flags",static_cast<GDBusProxyFlags>(flags),"g-interface-info",Glib::unwrap(info),"g-name",(name.empty() ? 0 : name.c_str()),"g-object-path",(object_path.empty() ? 0 : object_path.c_str()),"g-interface-name",(interface_name.empty() ? 0 : interface_name.c_str()), static_cast<char*>(0)))
{
  init();
}

Proxy::Proxy(BusType bus_type,
  const Glib::ustring& name,
  const Glib::ustring& object_path,
  const Glib::ustring& interface_name,
  const SlotAsyncReady& slot,
  const Glib::RefPtr<Cancellable>& cancellable,
  const Glib::RefPtr<InterfaceInfo>& info,
  ProxyFlags flags)
:
// Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Glib::Object(Glib::ConstructParams(proxy_class_.init(), "g-bus-type",static_cast<GBusType>(bus_type),"g-flags",static_cast<GDBusProxyFlags>(flags),"g-interface-info",Glib::unwrap(info),"g-name",(name.empty() ? 0 : name.c_str()),"g-object-path",(object_path.empty() ? 0 : object_path.c_str()),"g-interface-name",(interface_name.empty() ? 0 : interface_name.c_str()), static_cast<char*>(0)))
{
  init_async(slot, cancellable);
}

Proxy::Proxy(BusType bus_type,
  const Glib::ustring& name,
  const Glib::ustring& object_path,
  const Glib::ustring& interface_name,
  const SlotAsyncReady& slot,
  const Glib::RefPtr<InterfaceInfo>& info,
  ProxyFlags flags)
:
// Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Glib::Object(Glib::ConstructParams(proxy_class_.init(), "g-bus-type",static_cast<GBusType>(bus_type),"g-flags",static_cast<GDBusProxyFlags>(flags),"g-interface-info",Glib::unwrap(info),"g-name",(name.empty() ? 0 : name.c_str()),"g-object-path",(object_path.empty() ? 0 : object_path.c_str()),"g-interface-name",(interface_name.empty() ? 0 : interface_name.c_str()), static_cast<char*>(0)))
{
  init_async(slot);
}

Proxy::Proxy(BusType bus_type,
  const Glib::ustring& name,
  const Glib::ustring& object_path,
  const Glib::ustring& interface_name,
  const Glib::RefPtr<Cancellable>& cancellable,
  const Glib::RefPtr<InterfaceInfo>& info,
  ProxyFlags flags)
:
// Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Glib::Object(Glib::ConstructParams(proxy_class_.init(), "g-bus-type",static_cast<GBusType>(bus_type),"g-flags",static_cast<GDBusProxyFlags>(flags),"g-interface-info",Glib::unwrap(info),"g-name",(name.empty() ? 0 : name.c_str()),"g-object-path",(object_path.empty() ? 0 : object_path.c_str()),"g-interface-name",(interface_name.empty() ? 0 : interface_name.c_str()), static_cast<char*>(0)))
{
  init(cancellable);
}

Proxy::Proxy(BusType bus_type,
  const Glib::ustring& name,
  const Glib::ustring& object_path,
  const Glib::ustring& interface_name,
  const Glib::RefPtr<InterfaceInfo>& info,
  ProxyFlags flags)
:
// Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Glib::Object(Glib::ConstructParams(proxy_class_.init(), "g-bus-type",static_cast<GBusType>(bus_type),"g-flags",static_cast<GDBusProxyFlags>(flags),"g-interface-info",Glib::unwrap(info),"g-name",(name.empty() ? 0 : name.c_str()),"g-object-path",(object_path.empty() ? 0 : object_path.c_str()),"g-interface-name",(interface_name.empty() ? 0 : interface_name.c_str()), static_cast<char*>(0)))
{
  init();
}

void Proxy::create(const Glib::RefPtr<Connection>& connection,
  const Glib::ustring& name,
  const Glib::ustring& object_path,
  const Glib::ustring& interface_name,
  const SlotAsyncReady& slot,
  const Glib::RefPtr<Cancellable>& cancellable,
  const Glib::RefPtr<InterfaceInfo>& info,
  ProxyFlags flags)
{
  Proxy(connection, name, object_path, interface_name, slot,
    cancellable, info, flags);
}

void Proxy::create(const Glib::RefPtr<Connection>& connection,
  const Glib::ustring& name,
  const Glib::ustring& object_path,
  const Glib::ustring& interface_name,
  const SlotAsyncReady& slot,
  const Glib::RefPtr<InterfaceInfo>& info,
  ProxyFlags flags)
{
  Proxy(connection, name, object_path, interface_name, slot, info, flags);
}

Glib::RefPtr<Proxy>
Proxy::create_sync(const Glib::RefPtr<Connection>& connection,
  const Glib::ustring& name,
  const Glib::ustring& object_path,
  const Glib::ustring& interface_name,
  const Glib::RefPtr<Cancellable>& cancellable,
  const Glib::RefPtr<InterfaceInfo>& info,
  ProxyFlags flags)
{
  return Glib::RefPtr<Proxy>(new Proxy(connection, name,
    object_path, interface_name, cancellable, info, flags));
}

Glib::RefPtr<Proxy>
Proxy::create_sync(const Glib::RefPtr<Connection>& connection,
  const Glib::ustring& name,
  const Glib::ustring& object_path,
  const Glib::ustring& interface_name,
  const Glib::RefPtr<InterfaceInfo>& info,
  ProxyFlags flags)
{
  return Glib::RefPtr<Proxy>(new Proxy(connection, name,
    object_path, interface_name, info, flags));
}

void Proxy::create_for_bus(BusType bus_type,
  const Glib::ustring& name,
  const Glib::ustring& object_path,
  const Glib::ustring& interface_name,
  const SlotAsyncReady& slot,
  const Glib::RefPtr<Cancellable>& cancellable,
  const Glib::RefPtr<InterfaceInfo>& info,
  ProxyFlags flags)
{
  Proxy(bus_type, name, object_path, interface_name, slot, cancellable,
    info, flags);
}

void Proxy::create_for_bus(BusType bus_type,
  const Glib::ustring& name,
  const Glib::ustring& object_path,
  const Glib::ustring& interface_name,
  const SlotAsyncReady& slot,
  const Glib::RefPtr<InterfaceInfo>& info,
  ProxyFlags flags)
{
  Proxy(bus_type, name, object_path, interface_name, slot, info, flags);
}

Glib::RefPtr<Proxy> Proxy::create_for_bus_sync(BusType bus_type,
  const Glib::ustring& name,
  const Glib::ustring& object_path,
  const Glib::ustring& interface_name,
  const Glib::RefPtr<Cancellable>& cancellable,
  const Glib::RefPtr<InterfaceInfo>& info,
  ProxyFlags flags)
{
  return Glib::RefPtr<Proxy>(new Proxy(bus_type, name,
    object_path, interface_name, cancellable, info, flags));
}

Glib::RefPtr<Proxy> Proxy::create_for_bus_sync(BusType bus_type,
  const Glib::ustring& name,
  const Glib::ustring& object_path,
  const Glib::ustring& interface_name,
  const Glib::RefPtr<InterfaceInfo>& info,
  ProxyFlags flags)
{
  return Glib::RefPtr<Proxy>(new Proxy(bus_type, name,
    object_path, interface_name, info, flags));
}

void Proxy::get_cached_property(Glib::VariantBase& property,
  const Glib::ustring& property_name) const
{
  GVariant* const g_variant =
    g_dbus_proxy_get_cached_property(const_cast<GDBusProxy*>(gobj()),
    property_name.c_str());

  property.init(g_variant, false /* no extra reference needed */);
}

void Proxy::call(const Glib::ustring& method_name,
  const SlotAsyncReady& slot,
  const Glib::RefPtr<Cancellable>& cancellable,
  const Glib::VariantContainerBase& parameters,
  int timeout_msec,
  CallFlags flags
)
{
  // Create a copy of the slot.
  // A pointer to it will be passed through the callback's data parameter
  // and deleted in the callback.
  SlotAsyncReady* slot_copy = new SlotAsyncReady(slot);

  g_dbus_proxy_call(gobj(), method_name.c_str(),
    const_cast<GVariant*>(parameters.gobj()),
    static_cast<GDBusCallFlags>(flags), timeout_msec,
    Glib::unwrap(cancellable), &SignalProxy_async_callback, slot_copy);
}

void Proxy::call(const Glib::ustring& method_name,
  const SlotAsyncReady& slot,
  const Glib::VariantContainerBase& parameters,
  int timeout_msec,
  CallFlags flags
)
{
  // Create a copy of the slot.
  // A pointer to it will be passed through the callback's data parameter
  // and deleted in the callback.
  SlotAsyncReady* slot_copy = new SlotAsyncReady(slot);

  g_dbus_proxy_call(gobj(), method_name.c_str(),
    const_cast<GVariant*>(parameters.gobj()),
    static_cast<GDBusCallFlags>(flags), timeout_msec,
    0, &SignalProxy_async_callback, slot_copy);
}

Glib::VariantContainerBase Proxy::call_sync(
  const Glib::ustring& method_name,
  const Glib::RefPtr<Cancellable>& cancellable,
  const Glib::VariantContainerBase& parameters,
  int timeout_msec,
  CallFlags flags
)
{
  GError* g_error = 0;

  GVariant* const gvariant =
    g_dbus_proxy_call_sync(gobj(), method_name.c_str(),
    const_cast<GVariant*>(parameters.gobj()),
    static_cast<GDBusCallFlags>(flags), timeout_msec,
    Glib::unwrap(cancellable), &g_error);

  if(g_error)
    ::Glib::Error::throw_exception(g_error);

  return Glib::VariantContainerBase(gvariant, false); //Dont' take an extra reference.
}

Glib::VariantContainerBase Proxy::call_sync(
  const Glib::ustring& method_name,
  const Glib::VariantContainerBase& parameters,
  int timeout_msec,
  CallFlags flags
)
{
  GError* g_error = 0;

  GVariant* const gvariant =
    g_dbus_proxy_call_sync(gobj(), method_name.c_str(),
    const_cast<GVariant*>(parameters.gobj()),
    static_cast<GDBusCallFlags>(flags), timeout_msec, 0, &g_error);

  if(g_error)
    ::Glib::Error::throw_exception(g_error);

  return Glib::VariantContainerBase(gvariant, false); //Dont' take an extra reference.
}

#ifdef G_OS_UNIX
// With a UnixFDList.
void Proxy::call(
  const Glib::ustring&                method_name,
  const Glib::VariantContainerBase&   parameters,
  const SlotAsyncReady&               slot,
  const Glib::RefPtr<Cancellable>&    cancellable,
  const Glib::RefPtr<UnixFDList>&     fd_list,
  int                                 timeout_msec,
  CallFlags                           flags)
{
  // Create a copy of the slot.
  // A pointer to it will be passed through the callback's data parameter
  // and deleted in the callback.
  SlotAsyncReady* slot_copy = new SlotAsyncReady(slot);

  g_dbus_proxy_call_with_unix_fd_list(gobj(), method_name.c_str(),
    const_cast<GVariant*>(parameters.gobj()),
    static_cast<GDBusCallFlags>(flags), timeout_msec, Glib::unwrap(fd_list),
    Glib::unwrap(cancellable), &SignalProxy_async_callback, slot_copy);
}

// Non-cancellable version (with a UnixFDList).
void Proxy::call(
  const Glib::ustring&                method_name,
  const Glib::VariantContainerBase&   parameters,
  const SlotAsyncReady&               slot,
  const Glib::RefPtr<UnixFDList>&     fd_list,
  int                                 timeout_msec,
  CallFlags                           flags)
{
  // Create a copy of the slot.
  // A pointer to it will be passed through the callback's data parameter
  // and deleted in the callback.
  SlotAsyncReady* slot_copy = new SlotAsyncReady(slot);

  g_dbus_proxy_call_with_unix_fd_list(gobj(), method_name.c_str(),
    const_cast<GVariant*>(parameters.gobj()),
    static_cast<GDBusCallFlags>(flags), timeout_msec, Glib::unwrap(fd_list),
    0, &SignalProxy_async_callback, slot_copy);
}
#endif // G_OS_UNIX

} //namespace DBus

} // namespace Gio

namespace
{


static void Proxy_signal_properties_changed_callback(GDBusProxy* self, GVariant* p0,const gchar*const* p1,void* data)
{
  using namespace Gio::DBus;
  typedef sigc::slot< void,const MapChangedProperties&,const std::vector<Glib::ustring>& > SlotType;

  // Do not try to call a signal on a disassociated wrapper.
  if(Glib::ObjectBase::_get_current_wrapper((GObject*) self))
  {
    #ifdef GLIBMM_EXCEPTIONS_ENABLED
    try
    {
    #endif //GLIBMM_EXCEPTIONS_ENABLED
      if(sigc::slot_base *const slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(Glib::Variant<MapChangedProperties>(p0, true).get()
, Glib::ArrayHandler<Glib::ustring>::array_to_vector(p1, Glib::OWNERSHIP_NONE)
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

static const Glib::SignalProxyInfo Proxy_signal_properties_changed_info =
{
  "g-properties-changed",
  (GCallback) &Proxy_signal_properties_changed_callback,
  (GCallback) &Proxy_signal_properties_changed_callback
};


static void Proxy_signal_signal_callback(GDBusProxy* self, const gchar* p0,const gchar* p1,GVariant* p2,void* data)
{
  using namespace Gio::DBus;
  typedef sigc::slot< void,const Glib::ustring&,const Glib::ustring&,const Glib::VariantContainerBase& > SlotType;

  // Do not try to call a signal on a disassociated wrapper.
  if(Glib::ObjectBase::_get_current_wrapper((GObject*) self))
  {
    #ifdef GLIBMM_EXCEPTIONS_ENABLED
    try
    {
    #endif //GLIBMM_EXCEPTIONS_ENABLED
      if(sigc::slot_base *const slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(Glib::convert_const_gchar_ptr_to_ustring(p0)
, Glib::convert_const_gchar_ptr_to_ustring(p1)
, Glib::VariantContainerBase(p2, true)
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

static const Glib::SignalProxyInfo Proxy_signal_signal_info =
{
  "g-signal",
  (GCallback) &Proxy_signal_signal_callback,
  (GCallback) &Proxy_signal_signal_callback
};


} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gio::DBus::Proxy> wrap(GDBusProxy* object, bool take_copy)
{
  return Glib::RefPtr<Gio::DBus::Proxy>( dynamic_cast<Gio::DBus::Proxy*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gio
{

namespace DBus
{


/* The *_Class implementation: */

const Glib::Class& Proxy_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &Proxy_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(g_dbus_proxy_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:
  Initable::add_interface(get_type());
  AsyncInitable::add_interface(get_type());

  }

  return *this;
}


void Proxy_Class::class_init_function(void* g_class, void* class_data)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


  klass->g_properties_changed = &g_properties_changed_callback;
  klass->g_signal = &g_signal_callback;
}


void Proxy_Class::g_properties_changed_callback(GDBusProxy* self, GVariant* p0, const gchar*const* p1)
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
        obj->on_properties_changed(Glib::Variant<MapChangedProperties>(p0, true).get()
, Glib::ArrayHandler<Glib::ustring>::array_to_vector(p1, Glib::OWNERSHIP_NONE)
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
  if(base && base->g_properties_changed)
    (*base->g_properties_changed)(self, p0, p1);
}
void Proxy_Class::g_signal_callback(GDBusProxy* self, const gchar* p0, const gchar* p1, GVariant* p2)
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
        obj->on_signal(Glib::convert_const_gchar_ptr_to_ustring(p0)
, Glib::convert_const_gchar_ptr_to_ustring(p1)
, Glib::VariantContainerBase(p2, true)
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
  if(base && base->g_signal)
    (*base->g_signal)(self, p0, p1, p2);
}


Glib::ObjectBase* Proxy_Class::wrap_new(GObject* object)
{
  return new Proxy((GDBusProxy*)object);
}


/* The implementation: */

GDBusProxy* Proxy::gobj_copy()
{
  reference();
  return gobj();
}

Proxy::Proxy(const Glib::ConstructParams& construct_params)
:
  Glib::Object(construct_params)
{

}

Proxy::Proxy(GDBusProxy* castitem)
:
  Glib::Object((GObject*)(castitem))
{}


Proxy::~Proxy()
{}


Proxy::CppClassType Proxy::proxy_class_; // initialize static member

GType Proxy::get_type()
{
  return proxy_class_.init().get_type();
}


GType Proxy::get_base_type()
{
  return g_dbus_proxy_get_type();
}


Glib::RefPtr<Proxy> Proxy::create_finish(const Glib::RefPtr<AsyncResult>& res)
{
  GError* gerror = 0;
  Glib::RefPtr<Proxy> retvalue = Glib::wrap(g_dbus_proxy_new_finish(Glib::unwrap(res), &(gerror)));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}


Glib::RefPtr<Proxy> Proxy::create_for_bus_finish(const Glib::RefPtr<AsyncResult>& res)
{
  GError* gerror = 0;
  Glib::RefPtr<Proxy> retvalue = Glib::wrap(g_dbus_proxy_new_for_bus_finish(Glib::unwrap(res), &(gerror)));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}


ProxyFlags Proxy::get_flags() const
{
  return ((ProxyFlags)(g_dbus_proxy_get_flags(const_cast<GDBusProxy*>(gobj()))));
}

Glib::RefPtr<Connection> Proxy::get_connection()
{
  return Glib::wrap(g_dbus_proxy_get_connection(gobj()));
}

Glib::RefPtr<const Connection> Proxy::get_connection() const
{
  return Glib::wrap(g_dbus_proxy_get_connection(const_cast<GDBusProxy*>(gobj())));
}

Glib::ustring Proxy::get_name() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(g_dbus_proxy_get_name(const_cast<GDBusProxy*>(gobj())));
}

Glib::ustring Proxy::get_name_owner() const
{
  return Glib::convert_return_gchar_ptr_to_ustring(g_dbus_proxy_get_name_owner(const_cast<GDBusProxy*>(gobj())));
}

Glib::ustring Proxy::get_object_path() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(g_dbus_proxy_get_object_path(const_cast<GDBusProxy*>(gobj())));
}

Glib::ustring Proxy::get_interface_name() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(g_dbus_proxy_get_interface_name(const_cast<GDBusProxy*>(gobj())));
}

int Proxy::get_default_timeout() const
{
  return g_dbus_proxy_get_default_timeout(const_cast<GDBusProxy*>(gobj()));
}

void Proxy::set_default_timeout(int timeout_msec)
{
  g_dbus_proxy_set_default_timeout(gobj(), timeout_msec);
}

void Proxy::set_cached_property(const Glib::ustring& property_name, const Glib::VariantBase& value)
{
  g_dbus_proxy_set_cached_property(gobj(), property_name.c_str(), const_cast<GVariant*>((value).gobj()));
}

Glib::StringArrayHandle Proxy::get_cached_property_names() const
{
  return Glib::StringArrayHandle(g_dbus_proxy_get_cached_property_names(const_cast<GDBusProxy*>(gobj())));
}

void Proxy::set_interface_info(const Glib::RefPtr<InterfaceInfo>& info)
{
  g_dbus_proxy_set_interface_info(gobj(), Glib::unwrap(info));
}

Glib::RefPtr<InterfaceInfo> Proxy::get_interface_info()
{
  return Glib::wrap(g_dbus_proxy_get_interface_info(gobj()));
}

Glib::RefPtr<const InterfaceInfo> Proxy::get_interface_info() const
{
  return const_cast<Proxy*>(this)->get_interface_info();
}

Glib::VariantContainerBase Proxy::call_finish(const Glib::RefPtr<AsyncResult>& res)
{
  GError* gerror = 0;
  Glib::VariantContainerBase retvalue = Glib::VariantContainerBase(g_dbus_proxy_call_finish(gobj(), Glib::unwrap(res), &(gerror)), false);
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}

#ifdef G_OS_UNIX
Glib::VariantContainerBase Proxy::call_finish(const Glib::RefPtr<AsyncResult>& res, Glib::RefPtr<UnixFDList>& out_fd_list)
{
  GError* gerror = 0;
  GUnixFDList* g_out_fd_list = 0;
  Glib::VariantContainerBase retvalue = Glib::VariantContainerBase(g_dbus_proxy_call_with_unix_fd_list_finish(gobj(), &g_out_fd_list, Glib::unwrap(res), &(gerror)), false);
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
out_fd_list = Glib::wrap(g_out_fd_list);
  return retvalue;
}


#endif // G_OS_UNIX
#ifdef G_OS_UNIX
Glib::VariantContainerBase Proxy::call_sync(const Glib::ustring& method_name, const Glib::VariantContainerBase& parameters, const Glib::RefPtr<Cancellable>& cancellable, const Glib::RefPtr<UnixFDList>& fd_list, Glib::RefPtr<UnixFDList>& out_fd_list, int timeout_msec, CallFlags flags)
{
  GError* gerror = 0;
  GUnixFDList* g_out_fd_list = 0;
  Glib::VariantContainerBase retvalue = Glib::VariantContainerBase(g_dbus_proxy_call_with_unix_fd_list_sync(gobj(), method_name.c_str(), const_cast<GVariant*>((parameters).gobj()), ((GDBusCallFlags)(flags)), timeout_msec, Glib::unwrap(fd_list), &g_out_fd_list, const_cast<GCancellable*>(Glib::unwrap(cancellable)), &(gerror)), false);
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
out_fd_list = Glib::wrap(g_out_fd_list);
  return retvalue;
}


#endif // G_OS_UNIX
#ifdef G_OS_UNIX
Glib::VariantContainerBase Proxy::call_sync(const Glib::ustring& method_name, const Glib::VariantContainerBase& parameters, const Glib::RefPtr<UnixFDList>& fd_list, Glib::RefPtr<UnixFDList>& out_fd_list, int timeout_msec, CallFlags flags)
{
  GError* gerror = 0;
  GUnixFDList* g_out_fd_list = 0;
  Glib::VariantContainerBase retvalue = Glib::VariantContainerBase(g_dbus_proxy_call_with_unix_fd_list_sync(gobj(), method_name.c_str(), const_cast<GVariant*>((parameters).gobj()), ((GDBusCallFlags)(flags)), timeout_msec, Glib::unwrap(fd_list), &g_out_fd_list, 0, &(gerror)), false);
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
out_fd_list = Glib::wrap(g_out_fd_list);
  return retvalue;
}


#endif // G_OS_UNIX


Glib::SignalProxy2< void,const MapChangedProperties&,const std::vector<Glib::ustring>& > Proxy::signal_properties_changed()
{
  return Glib::SignalProxy2< void,const MapChangedProperties&,const std::vector<Glib::ustring>& >(this, &Proxy_signal_properties_changed_info);
}


Glib::SignalProxy3< void,const Glib::ustring&,const Glib::ustring&,const Glib::VariantContainerBase& > Proxy::signal_signal()
{
  return Glib::SignalProxy3< void,const Glib::ustring&,const Glib::ustring&,const Glib::VariantContainerBase& >(this, &Proxy_signal_signal_info);
}


#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Connection> > Proxy::property_g_connection() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Connection> >(this, "g-connection");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< int > Proxy::property_g_default_timeout() 
{
  return Glib::PropertyProxy< int >(this, "g-default-timeout");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< int > Proxy::property_g_default_timeout() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "g-default-timeout");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< ProxyFlags > Proxy::property_g_flags() const
{
  return Glib::PropertyProxy_ReadOnly< ProxyFlags >(this, "g-flags");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< Glib::RefPtr<InterfaceInfo> > Proxy::property_g_interface_info() 
{
  return Glib::PropertyProxy< Glib::RefPtr<InterfaceInfo> >(this, "g-interface-info");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< Glib::RefPtr<InterfaceInfo> > Proxy::property_g_interface_info() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<InterfaceInfo> >(this, "g-interface-info");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< Glib::ustring > Proxy::property_g_interface_name() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "g-interface-name");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< Glib::ustring > Proxy::property_g_name() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "g-name");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< Glib::ustring > Proxy::property_g_name_owner() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "g-name-owner");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< Glib::ustring > Proxy::property_g_object_path() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "g-object-path");
}
#endif //GLIBMM_PROPERTIES_ENABLED


void Gio::DBus::Proxy::on_properties_changed(const MapChangedProperties& changed_properties, const std::vector<Glib::ustring>& invalidated_properties)
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->g_properties_changed)
    (*base->g_properties_changed)(gobj(),const_cast<GVariant*>(Glib::Variant<MapChangedProperties>::create(changed_properties).gobj()),Glib::ArrayHandler<Glib::ustring>::vector_to_array(invalidated_properties).data());
}
void Gio::DBus::Proxy::on_signal(const Glib::ustring& sender_name, const Glib::ustring& signal_name, const Glib::VariantContainerBase& parameters)
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->g_signal)
    (*base->g_signal)(gobj(),sender_name.c_str(),signal_name.c_str(),const_cast<GVariant*>((parameters).gobj()));
}


} // namespace DBus

} // namespace Gio

