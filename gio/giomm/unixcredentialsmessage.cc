// Generated by gtkmmproc -- DO NOT MODIFY!


#include <glibmm.h>

#include <giomm/unixcredentialsmessage.h>
#include <giomm/private/unixcredentialsmessage_p.h>


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

#include <gio/gunixcredentialsmessage.h>
#include <giomm/credentials.h>

namespace Gio
{

} // namespace Gio

namespace
{
} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gio::UnixCredentialsMessage> wrap(GUnixCredentialsMessage* object, bool take_copy)
{
  return Glib::RefPtr<Gio::UnixCredentialsMessage>( dynamic_cast<Gio::UnixCredentialsMessage*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gio
{


/* The *_Class implementation: */

const Glib::Class& UnixCredentialsMessage_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &UnixCredentialsMessage_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(g_unix_credentials_message_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void UnixCredentialsMessage_Class::class_init_function(void* g_class, void* class_data)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* UnixCredentialsMessage_Class::wrap_new(GObject* object)
{
  return new UnixCredentialsMessage((GUnixCredentialsMessage*)object);
}


/* The implementation: */

GUnixCredentialsMessage* UnixCredentialsMessage::gobj_copy()
{
  reference();
  return gobj();
}

UnixCredentialsMessage::UnixCredentialsMessage(const Glib::ConstructParams& construct_params)
:
  Gio::SocketControlMessage(construct_params)
{

}

UnixCredentialsMessage::UnixCredentialsMessage(GUnixCredentialsMessage* castitem)
:
  Gio::SocketControlMessage((GSocketControlMessage*)(castitem))
{}


UnixCredentialsMessage::~UnixCredentialsMessage()
{}


UnixCredentialsMessage::CppClassType UnixCredentialsMessage::unixcredentialsmessage_class_; // initialize static member

GType UnixCredentialsMessage::get_type()
{
  return unixcredentialsmessage_class_.init().get_type();
}


GType UnixCredentialsMessage::get_base_type()
{
  return g_unix_credentials_message_get_type();
}


UnixCredentialsMessage::UnixCredentialsMessage()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Gio::SocketControlMessage(Glib::ConstructParams(unixcredentialsmessage_class_.init()))
{
  

}

UnixCredentialsMessage::UnixCredentialsMessage(const Glib::RefPtr<Credentials>& credentials)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Gio::SocketControlMessage(Glib::ConstructParams(unixcredentialsmessage_class_.init(), "credentials", const_cast<GCredentials*>(Glib::unwrap<Gio::Credentials>(credentials)), static_cast<char*>(0)))
{
  

}

Glib::RefPtr<UnixCredentialsMessage> UnixCredentialsMessage::create()
{
  return Glib::RefPtr<UnixCredentialsMessage>( new UnixCredentialsMessage() );
}

Glib::RefPtr<UnixCredentialsMessage> UnixCredentialsMessage::create(const Glib::RefPtr<Credentials>& credentials)
{
  return Glib::RefPtr<UnixCredentialsMessage>( new UnixCredentialsMessage(credentials) );
}

Glib::RefPtr<Credentials> UnixCredentialsMessage::get_credentials()
{
  return Glib::wrap(g_unix_credentials_message_get_credentials(gobj()));
}

Glib::RefPtr<const Credentials> UnixCredentialsMessage::get_credentials() const
{
  return const_cast<UnixCredentialsMessage*>(this)->get_credentials();
}

bool UnixCredentialsMessage::is_supported()
{
  return g_unix_credentials_message_is_supported();
}


#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Credentials> > UnixCredentialsMessage::property_credentials() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Credentials> >(this, "credentials");
}
#endif //GLIBMM_PROPERTIES_ENABLED


} // namespace Gio


