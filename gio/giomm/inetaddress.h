// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GIOMM_INETADDRESS_H
#define _GIOMM_INETADDRESS_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

// -*- Mode: C++; indent-tabs-mode: nil; c-basic-offset: 2 -*-

/* Copyright (C) 2009 jonathon jongsma
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

#include <glibmm/object.h>
#include <giomm/enums.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GInetAddress GInetAddress;
typedef struct _GInetAddressClass GInetAddressClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gio
{ class InetAddress_Class; } // namespace Gio
namespace Gio
{

/** An IPv4/IPv6 address
 *
 * InetAddress represents an IPv4 or IPv6 internet address. Use
 * Resolver::lookup_by_name() or Resolver::lookup_by_name_async() to look up
 * the InetAddress for a hostname. Use Resolver::lookup_by_address() or
 * Resolver::lookup_by_address_async() to look up the hostname for a
 * InetAddress.
 *
 * To actually connect to a remote host, you will need a InetSocketAddress
 * (which includes a InetAddress as well as a port number).
 *
 * @newin{2,24}
 * @ingroup NetworkIO
 */

class InetAddress
: public Glib::Object
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  typedef InetAddress CppObjectType;
  typedef InetAddress_Class CppClassType;
  typedef GInetAddress BaseObjectType;
  typedef GInetAddressClass BaseClassType;

private:  friend class InetAddress_Class;
  static CppClassType inetaddress_class_;

private:
  // noncopyable
  InetAddress(const InetAddress&);
  InetAddress& operator=(const InetAddress&);

protected:
  explicit InetAddress(const Glib::ConstructParams& construct_params);
  explicit InetAddress(GInetAddress* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
  virtual ~InetAddress();

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GInetAddress*       gobj()       { return reinterpret_cast<GInetAddress*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GInetAddress* gobj() const { return reinterpret_cast<GInetAddress*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GInetAddress* gobj_copy();

private:


protected:
   explicit InetAddress(const guint8 * bytes, SocketFamily family);


public:
  static Glib::RefPtr<InetAddress> create(const Glib::ustring& string);
  
  static Glib::RefPtr<InetAddress> create(const guint8 * bytes, SocketFamily family);

  static Glib::RefPtr<InetAddress> create_any(SocketFamily family);
  static Glib::RefPtr<InetAddress> create_loopback(SocketFamily family);

  
  /** Checks if two InetAddress instances are equal, e.g.\ the same address.
   * 
   * @newin{2,30}
   * @param other_address Another InetAddress.
   * @return <tt>true</tt> if @a address and @a other_address are equal, <tt>false</tt> otherwise.
   */
  bool address_equal(const Glib::RefPtr<const InetAddress>& other_address) const;

  
  /** Gets the raw binary address data from @a address.
   * 
   * @newin{2,22}
   * @return A pointer to an internal array of the bytes in @a address,
   * which should not be modified, stored, or freed. The size of this
   * array can be gotten with g_inet_address_get_native_size().
   */
  const guint8* to_bytes() const;
  
  /** Converts @a address to string form.
   * 
   * @newin{2,22}
   * @return A representation of @a address as a string, which should be
   * freed after use.
   */
  Glib::ustring to_string() const;
  
  /** Gets @a address's family
   * 
   * @newin{2,22}
   * @return  @a address's family.
   */
  SocketFamily get_family() const;
  
  /** Tests whether @a address is the "any" address for its family.
   * 
   * @newin{2,22}
   * @return <tt>true</tt> if @a address is the "any" address for its family.
   */
  bool get_is_any() const;
  
  /** Tests whether @a address is a link-local address (that is, if it
   * identifies a host on a local network that is not connected to the
   * Internet).
   * 
   * @newin{2,22}
   * @return <tt>true</tt> if @a address is a link-local address.
   */
  bool get_is_link_local() const;
  
  /** Tests whether @a address is the loopback address for its family.
   * 
   * @newin{2,22}
   * @return <tt>true</tt> if @a address is the loopback address for its family.
   */
  bool get_is_loopback() const;
  
  /** Tests whether @a address is a global multicast address.
   * 
   * @newin{2,22}
   * @return <tt>true</tt> if @a address is a global multicast address.
   */
  bool get_is_mc_global() const;
  
  /** Tests whether @a address is a link-local multicast address.
   * 
   * @newin{2,22}
   * @return <tt>true</tt> if @a address is a link-local multicast address.
   */
  bool get_is_mc_link_local() const;
  
  /** Tests whether @a address is a node-local multicast address.
   * 
   * @newin{2,22}
   * @return <tt>true</tt> if @a address is a node-local multicast address.
   */
  bool get_is_mc_node_local() const;
  
  /** Tests whether @a address is an organization-local multicast address.
   * 
   * @newin{2,22}
   * @return <tt>true</tt> if @a address is an organization-local multicast address.
   */
  bool get_is_mc_org_local() const;
  
  /** Tests whether @a address is a site-local multicast address.
   * 
   * @newin{2,22}
   * @return <tt>true</tt> if @a address is a site-local multicast address.
   */
  bool get_is_mc_site_local() const;
  
  /** Tests whether @a address is a multicast address.
   * 
   * @newin{2,22}
   * @return <tt>true</tt> if @a address is a multicast address.
   */
  bool get_is_multicast() const;
  
  /** Tests whether @a address is a site-local address such as 10.0.0.1
   * (that is, the address identifies a host on a local network that can
   * not be reached directly from the Internet, but which may have
   * outgoing Internet connectivity via a NAT or firewall).
   * 
   * @newin{2,22}
   * @return <tt>true</tt> if @a address is a site-local address.
   */
  bool get_is_site_local() const;
  
  /** Gets the size of the native raw binary address for @a address. This
   * is the size of the data that you get from g_inet_address_to_bytes().
   * 
   * @newin{2,22}
   * @return The number of bytes used for the native version of @a address.
   */
  gsize get_native_size() const;

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** The raw address data.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< void* > property_bytes() const;
#endif //#GLIBMM_PROPERTIES_ENABLED


  #ifdef GLIBMM_PROPERTIES_ENABLED
/** The address family (IPv4 or IPv6).
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< SocketFamily > property_family() const;
#endif //#GLIBMM_PROPERTIES_ENABLED


  #ifdef GLIBMM_PROPERTIES_ENABLED
/** Whether this is the 'any' address for its family.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_is_any() const;
#endif //#GLIBMM_PROPERTIES_ENABLED


  #ifdef GLIBMM_PROPERTIES_ENABLED
/** Whether this is a link-local address.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_is_link_local() const;
#endif //#GLIBMM_PROPERTIES_ENABLED


  #ifdef GLIBMM_PROPERTIES_ENABLED
/** Whether this is the loopback address for its family.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_is_loopback() const;
#endif //#GLIBMM_PROPERTIES_ENABLED


  #ifdef GLIBMM_PROPERTIES_ENABLED
/** Whether this is a global multicast address.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_is_mc_global() const;
#endif //#GLIBMM_PROPERTIES_ENABLED


  #ifdef GLIBMM_PROPERTIES_ENABLED
/** Whether this is a link-local multicast address.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_is_mc_link_local() const;
#endif //#GLIBMM_PROPERTIES_ENABLED


  #ifdef GLIBMM_PROPERTIES_ENABLED
/** Whether this is a node-local multicast address.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_is_mc_node_local() const;
#endif //#GLIBMM_PROPERTIES_ENABLED


  #ifdef GLIBMM_PROPERTIES_ENABLED
/** Whether this is an organization-local multicast address.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_is_mc_org_local() const;
#endif //#GLIBMM_PROPERTIES_ENABLED


  #ifdef GLIBMM_PROPERTIES_ENABLED
/** Whether this is a site-local multicast address.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_is_mc_site_local() const;
#endif //#GLIBMM_PROPERTIES_ENABLED


  #ifdef GLIBMM_PROPERTIES_ENABLED
/** Whether this is a multicast address.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_is_multicast() const;
#endif //#GLIBMM_PROPERTIES_ENABLED


  #ifdef GLIBMM_PROPERTIES_ENABLED
/** Whether this is a site-local address.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_is_site_local() const;
#endif //#GLIBMM_PROPERTIES_ENABLED


public:

public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


};

} // namespace Gio


namespace Glib
{
  /** A Glib::wrap() method for this object.
   * 
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gio::InetAddress
   */
  Glib::RefPtr<Gio::InetAddress> wrap(GInetAddress* object, bool take_copy = false);
}


#endif /* _GIOMM_INETADDRESS_H */

