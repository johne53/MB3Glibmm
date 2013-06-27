// Generated by gtkmmproc -- DO NOT MODIFY!


#include <glibmm.h>

#include <giomm/socketclient.h>
#include <giomm/private/socketclient_p.h>


// -*- Mode: C++; indent-tabs-mode: nil; c-basic-offset: 2 -*-

/* Copyright (C) 2010 Jonathon Jongsma
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
#include <giomm/asyncresult.h>
#include "slot_async.h"

namespace Gio
{

void
SocketClient::connect_async(const Glib::RefPtr<SocketConnectable>& connectable,
                            const Glib::RefPtr<Cancellable>& cancellable,
                            const SlotAsyncReady& slot)
{
  // Create a copy of the slot.
  // A pointer to it will be passed through the callback's data parameter
  // and deleted in the callback.
  SlotAsyncReady* slot_copy = new SlotAsyncReady(slot);

  g_socket_client_connect_async (gobj(),
                                 connectable->gobj (),
                                 Glib::unwrap(cancellable),
                                 &SignalProxy_async_callback,
                                 slot_copy);
}

void
SocketClient::connect_async(const Glib::RefPtr<SocketConnectable>& connectable,
                            const SlotAsyncReady& slot)
{
  // Create a copy of the slot.
  // A pointer to it will be passed through the callback's data parameter
  // and deleted in the callback.
  SlotAsyncReady* slot_copy = new SlotAsyncReady(slot);

  g_socket_client_connect_async (gobj(),
                                 connectable->gobj (),
                                 0,
                                 &SignalProxy_async_callback,
                                 slot_copy);
}

void
SocketClient::connect_to_host_async(const Glib::ustring& host_and_port,
                                    guint16 default_port,
                                    const Glib::RefPtr<Cancellable>& cancellable,
                                    const SlotAsyncReady& slot)
{
  // Create a copy of the slot.
  // A pointer to it will be passed through the callback's data parameter
  // and deleted in the callback.
  SlotAsyncReady* slot_copy = new SlotAsyncReady(slot);

  g_socket_client_connect_to_host_async (gobj(),
                                         host_and_port.c_str (),
                                         default_port,
                                         Glib::unwrap(cancellable),
                                         &SignalProxy_async_callback,
                                         slot_copy);
}

void
SocketClient::connect_to_host_async(const Glib::ustring& host_and_port,
                                    guint16 default_port,
                                    const SlotAsyncReady& slot)
{
  // Create a copy of the slot.
  // A pointer to it will be passed through the callback's data parameter
  // and deleted in the callback.
  SlotAsyncReady* slot_copy = new SlotAsyncReady(slot);

  g_socket_client_connect_to_host_async (gobj(),
                                         host_and_port.c_str (),
                                         default_port,
                                         0,
                                         &SignalProxy_async_callback,
                                         slot_copy);
}

void
SocketClient::connect_to_service_async(const Glib::ustring& domain,
                                       const Glib::ustring& service,
                                       const Glib::RefPtr<Cancellable>& cancellable,
                                       const SlotAsyncReady& slot)
{
  // Create a copy of the slot.
  // A pointer to it will be passed through the callback's data parameter
  // and deleted in the callback.
  SlotAsyncReady* slot_copy = new SlotAsyncReady(slot);

  g_socket_client_connect_to_service_async (gobj(),
                                            domain.c_str (),
                                            service.c_str (),
                                            Glib::unwrap(cancellable),
                                            &SignalProxy_async_callback,
                                            slot_copy);
}

void
SocketClient::connect_to_service_async(const Glib::ustring& domain,
                                       const Glib::ustring& service,
                                       const SlotAsyncReady& slot)
{
  // Create a copy of the slot.
  // A pointer to it will be passed through the callback's data parameter
  // and deleted in the callback.
  SlotAsyncReady* slot_copy = new SlotAsyncReady(slot);

  g_socket_client_connect_to_service_async (gobj(),
                                            domain.c_str (),
                                            service.c_str (),
                                            0,
                                            &SignalProxy_async_callback,
                                            slot_copy);
}

void
SocketClient::connect_to_uri_async(const Glib::ustring& uri, guint16 default_port,
                                       const Glib::RefPtr<Cancellable>& cancellable,
                                       const SlotAsyncReady& slot)
{
  // Create a copy of the slot.
  // A pointer to it will be passed through the callback's data parameter
  // and deleted in the callback.
  SlotAsyncReady* slot_copy = new SlotAsyncReady(slot);

  g_socket_client_connect_to_uri_async (gobj(),
    uri.c_str(), default_port,
    Glib::unwrap(cancellable),
    &SignalProxy_async_callback,
    slot_copy);
}

void
SocketClient::connect_to_uri_async(const Glib::ustring& uri, guint16 default_port,
                                       const SlotAsyncReady& slot)
{
  // Create a copy of the slot.
  // A pointer to it will be passed through the callback's data parameter
  // and deleted in the callback.
  SlotAsyncReady* slot_copy = new SlotAsyncReady(slot);

  g_socket_client_connect_to_uri_async (gobj(),
    uri.c_str(), default_port,
    0,
    &SignalProxy_async_callback,
    slot_copy);
}


} // namespace Gio

namespace
{


static void SocketClient_signal_event_callback(GSocketClient* self, GSocketClientEvent p0,GSocketConnectable* p1,GIOStream* p2,void* data)
{
  using namespace Gio;
  typedef sigc::slot< void,SocketClientEvent,const Glib::RefPtr<SocketConnectable>&,const Glib::RefPtr<IOStream>& > SlotType;

  // Do not try to call a signal on a disassociated wrapper.
  if(Glib::ObjectBase::_get_current_wrapper((GObject*) self))
  {
    #ifdef GLIBMM_EXCEPTIONS_ENABLED
    try
    {
    #endif //GLIBMM_EXCEPTIONS_ENABLED
      if(sigc::slot_base *const slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(((SocketClientEvent)(p0))
, Glib::wrap(p1)
, Glib::wrap(p2)
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

static const Glib::SignalProxyInfo SocketClient_signal_event_info =
{
  "event",
  (GCallback) &SocketClient_signal_event_callback,
  (GCallback) &SocketClient_signal_event_callback
};


} // anonymous namespace

// static
GType Glib::Value<Gio::SocketClientEvent>::value_type()
{
  return g_socket_client_event_get_type();
}


namespace Glib
{

Glib::RefPtr<Gio::SocketClient> wrap(GSocketClient* object, bool take_copy)
{
  return Glib::RefPtr<Gio::SocketClient>( dynamic_cast<Gio::SocketClient*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gio
{


/* The *_Class implementation: */

const Glib::Class& SocketClient_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &SocketClient_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(g_socket_client_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void SocketClient_Class::class_init_function(void* g_class, void* class_data)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* SocketClient_Class::wrap_new(GObject* object)
{
  return new SocketClient((GSocketClient*)object);
}


/* The implementation: */

GSocketClient* SocketClient::gobj_copy()
{
  reference();
  return gobj();
}

SocketClient::SocketClient(const Glib::ConstructParams& construct_params)
:
  Glib::Object(construct_params)
{

}

SocketClient::SocketClient(GSocketClient* castitem)
:
  Glib::Object((GObject*)(castitem))
{}


SocketClient::~SocketClient()
{}


SocketClient::CppClassType SocketClient::socketclient_class_; // initialize static member

GType SocketClient::get_type()
{
  return socketclient_class_.init().get_type();
}


GType SocketClient::get_base_type()
{
  return g_socket_client_get_type();
}


SocketClient::SocketClient()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Glib::Object(Glib::ConstructParams(socketclient_class_.init()))
{
  

}

Glib::RefPtr<SocketClient> SocketClient::create()
{
  return Glib::RefPtr<SocketClient>( new SocketClient() );
}

SocketFamily SocketClient::get_family() const
{
  return ((SocketFamily)(g_socket_client_get_family(const_cast<GSocketClient*>(gobj()))));
}

void SocketClient::set_family(SocketFamily family)
{
  g_socket_client_set_family(gobj(), ((GSocketFamily)(family)));
}

SocketType SocketClient::get_socket_type() const
{
  return ((SocketType)(g_socket_client_get_socket_type(const_cast<GSocketClient*>(gobj()))));
}

void SocketClient::set_socket_type(SocketType type)
{
  g_socket_client_set_socket_type(gobj(), ((GSocketType)(type)));
}

SocketProtocol SocketClient::get_protocol() const
{
  return ((SocketProtocol)(g_socket_client_get_protocol(const_cast<GSocketClient*>(gobj()))));
}

void SocketClient::set_protocol(SocketProtocol protocol)
{
  g_socket_client_set_protocol(gobj(), ((GSocketProtocol)(protocol)));
}

Glib::RefPtr<SocketAddress> SocketClient::get_local_address()
{
  return Glib::wrap(g_socket_client_get_local_address(gobj()));
}

Glib::RefPtr<const SocketAddress> SocketClient::get_local_address() const
{
  return const_cast<SocketClient*>(this)->get_local_address();
}

void SocketClient::set_local_address(const Glib::RefPtr<SocketAddress>& address)
{
  g_socket_client_set_local_address(gobj(), const_cast<GSocketAddress*>(Glib::unwrap(address)));
}

Glib::RefPtr<SocketConnection> SocketClient::connect(const Glib::RefPtr<SocketConnectable>& connectable, const Glib::RefPtr<Cancellable>& cancellable)
{
  GError* gerror = 0;
  Glib::RefPtr<SocketConnection> retvalue = Glib::wrap(g_socket_client_connect(gobj(), const_cast<GSocketConnectable*>(Glib::unwrap(connectable)), const_cast<GCancellable*>(Glib::unwrap(cancellable)), &(gerror)));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}

Glib::RefPtr<SocketConnection> SocketClient::connect(const Glib::RefPtr<SocketConnectable>& connectable)
{
  GError* gerror = 0;
  Glib::RefPtr<SocketConnection> retvalue = Glib::wrap(g_socket_client_connect(gobj(), const_cast<GSocketConnectable*>(Glib::unwrap(connectable)), 0, &(gerror)));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}

Glib::RefPtr<SocketConnection> SocketClient::connect_to_host(const Glib::ustring& host_and_port, guint16 default_port, const Glib::RefPtr<Cancellable>& cancellable)
{
  GError* gerror = 0;
  Glib::RefPtr<SocketConnection> retvalue = Glib::wrap(g_socket_client_connect_to_host(gobj(), host_and_port.c_str(), default_port, const_cast<GCancellable*>(Glib::unwrap(cancellable)), &(gerror)));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}

Glib::RefPtr<SocketConnection> SocketClient::connect_to_host(const Glib::ustring& host_and_port, guint16 default_port)
{
  GError* gerror = 0;
  Glib::RefPtr<SocketConnection> retvalue = Glib::wrap(g_socket_client_connect_to_host(gobj(), host_and_port.c_str(), default_port, 0, &(gerror)));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}

Glib::RefPtr<SocketConnection> SocketClient::connect_to_service(const Glib::ustring& domain, const Glib::ustring& service, const Glib::RefPtr<Cancellable>& cancellable)
{
  GError* gerror = 0;
  Glib::RefPtr<SocketConnection> retvalue = Glib::wrap(g_socket_client_connect_to_service(gobj(), domain.c_str(), service.c_str(), const_cast<GCancellable*>(Glib::unwrap(cancellable)), &(gerror)));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}

Glib::RefPtr<SocketConnection> SocketClient::connect_to_service(const Glib::ustring& domain, const Glib::ustring& service)
{
  GError* gerror = 0;
  Glib::RefPtr<SocketConnection> retvalue = Glib::wrap(g_socket_client_connect_to_service(gobj(), domain.c_str(), service.c_str(), 0, &(gerror)));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}

Glib::RefPtr<SocketConnection> SocketClient::connect_to_uri(const Glib::ustring& uri, guint16 default_port, const Glib::RefPtr<Cancellable>& cancellable)
{
  GError* gerror = 0;
  Glib::RefPtr<SocketConnection> retvalue = Glib::wrap(g_socket_client_connect_to_uri(gobj(), uri.c_str(), default_port, const_cast<GCancellable*>(Glib::unwrap(cancellable)), &(gerror)));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}

Glib::RefPtr<SocketConnection> SocketClient::connect_to_uri(const Glib::ustring& uri, guint16 default_port)
{
  GError* gerror = 0;
  Glib::RefPtr<SocketConnection> retvalue = Glib::wrap(g_socket_client_connect_to_uri(gobj(), uri.c_str(), default_port, 0, &(gerror)));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}

Glib::RefPtr<SocketConnection> SocketClient::connect_finish(const Glib::RefPtr<AsyncResult>& result)
{
  GError* gerror = 0;
  Glib::RefPtr<SocketConnection> retvalue = Glib::wrap(g_socket_client_connect_finish(gobj(), Glib::unwrap(result), &(gerror)));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}

Glib::RefPtr<SocketConnection> SocketClient::connect_to_host_finish(const Glib::RefPtr<AsyncResult>& result)
{
  GError* gerror = 0;
  Glib::RefPtr<SocketConnection> retvalue = Glib::wrap(g_socket_client_connect_to_host_finish(gobj(), Glib::unwrap(result), &(gerror)));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}

Glib::RefPtr<SocketConnection> SocketClient::connect_to_service_finish(const Glib::RefPtr<AsyncResult>& result)
{
  GError* gerror = 0;
  Glib::RefPtr<SocketConnection> retvalue = Glib::wrap(g_socket_client_connect_to_service_finish(gobj(), Glib::unwrap(result), &(gerror)));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}

Glib::RefPtr<SocketConnection> SocketClient::connect_to_uri_finish(const Glib::RefPtr<AsyncResult>& result)
{
  GError* gerror = 0;
  Glib::RefPtr<SocketConnection> retvalue = Glib::wrap(g_socket_client_connect_to_uri_finish(gobj(), Glib::unwrap(result), &(gerror)));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}

bool SocketClient::get_enable_proxy() const
{
  return g_socket_client_get_enable_proxy(const_cast<GSocketClient*>(gobj()));
}

void SocketClient::set_enable_proxy(bool enable)
{
  g_socket_client_set_enable_proxy(gobj(), static_cast<int>(enable));
}

bool SocketClient::get_tls() const
{
  return g_socket_client_get_tls(const_cast<GSocketClient*>(gobj()));
}

void SocketClient::set_tls(bool tls)
{
  g_socket_client_set_tls(gobj(), static_cast<int>(tls));
}

TlsCertificateFlags SocketClient::get_tls_validation_flags() const
{
  return ((TlsCertificateFlags)(g_socket_client_get_tls_validation_flags(const_cast<GSocketClient*>(gobj()))));
}

void SocketClient::set_tls_validation_flags(TlsCertificateFlags flags)
{
  g_socket_client_set_tls_validation_flags(gobj(), ((GTlsCertificateFlags)(flags)));
}

Glib::RefPtr<ProxyResolver> SocketClient::get_proxy_resolver()
{
  Glib::RefPtr<ProxyResolver> retvalue = Glib::wrap(g_socket_client_get_proxy_resolver(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const ProxyResolver> SocketClient::get_proxy_resolver() const
{
  return const_cast<SocketClient*>(this)->get_proxy_resolver();
}

void SocketClient::set_proxy_resolver(const Glib::RefPtr<ProxyResolver>& proxy_resolver)
{
  g_socket_client_set_proxy_resolver(gobj(), const_cast<GProxyResolver*>(Glib::unwrap(proxy_resolver)));
}

guint SocketClient::get_timeout() const
{
  return g_socket_client_get_timeout(const_cast<GSocketClient*>(gobj()));
}

void SocketClient::set_timeout(guint timeout)
{
  g_socket_client_set_timeout(gobj(), timeout);
}

void SocketClient::add_application_proxy(const Glib::ustring& protocol)
{
  g_socket_client_add_application_proxy(gobj(), protocol.c_str());
}


Glib::SignalProxy3< void,SocketClientEvent,const Glib::RefPtr<SocketConnectable>&,const Glib::RefPtr<IOStream>& > SocketClient::signal_event()
{
  return Glib::SignalProxy3< void,SocketClientEvent,const Glib::RefPtr<SocketConnectable>&,const Glib::RefPtr<IOStream>& >(this, &SocketClient_signal_event_info);
}


#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< SocketFamily > SocketClient::property_family() 
{
  return Glib::PropertyProxy< SocketFamily >(this, "family");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< SocketFamily > SocketClient::property_family() const
{
  return Glib::PropertyProxy_ReadOnly< SocketFamily >(this, "family");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< Glib::RefPtr<SocketAddress> > SocketClient::property_local_address() 
{
  return Glib::PropertyProxy< Glib::RefPtr<SocketAddress> >(this, "local-address");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< Glib::RefPtr<SocketAddress> > SocketClient::property_local_address() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<SocketAddress> >(this, "local-address");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< SocketProtocol > SocketClient::property_protocol() 
{
  return Glib::PropertyProxy< SocketProtocol >(this, "protocol");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< SocketProtocol > SocketClient::property_protocol() const
{
  return Glib::PropertyProxy_ReadOnly< SocketProtocol >(this, "protocol");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< SocketType > SocketClient::property_type() 
{
  return Glib::PropertyProxy< SocketType >(this, "type");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< SocketType > SocketClient::property_type() const
{
  return Glib::PropertyProxy_ReadOnly< SocketType >(this, "type");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< guint > SocketClient::property_timeout() 
{
  return Glib::PropertyProxy< guint >(this, "timeout");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< guint > SocketClient::property_timeout() const
{
  return Glib::PropertyProxy_ReadOnly< guint >(this, "timeout");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< bool > SocketClient::property_enable_proxy() 
{
  return Glib::PropertyProxy< bool >(this, "enable-proxy");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< bool > SocketClient::property_enable_proxy() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "enable-proxy");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< bool > SocketClient::property_tls() 
{
  return Glib::PropertyProxy< bool >(this, "tls");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< bool > SocketClient::property_tls() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "tls");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< TlsCertificateFlags > SocketClient::property_tls_validation_flags() 
{
  return Glib::PropertyProxy< TlsCertificateFlags >(this, "tls-validation-flags");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< TlsCertificateFlags > SocketClient::property_tls_validation_flags() const
{
  return Glib::PropertyProxy_ReadOnly< TlsCertificateFlags >(this, "tls-validation-flags");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< Glib::RefPtr<ProxyResolver> > SocketClient::property_proxy_resolver() 
{
  return Glib::PropertyProxy< Glib::RefPtr<ProxyResolver> >(this, "proxy-resolver");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< Glib::RefPtr<ProxyResolver> > SocketClient::property_proxy_resolver() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<ProxyResolver> >(this, "proxy-resolver");
}
#endif //GLIBMM_PROPERTIES_ENABLED


} // namespace Gio

