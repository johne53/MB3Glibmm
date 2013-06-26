// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GIOMM_DBUSADDRESS_H
#define _GIOMM_DBUSADDRESS_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

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

#include <giomm/dbusconnection.h>


namespace Gio
{

namespace DBus
{

namespace Address
{

/** Checks if @a string is a D-Bus address.
 *
 * This doesn't check if @a string is actually supported by BusServer or
 * BusConnection - use is_supported_address() to do more checks.
 *
 * @param string A string.
 * @return <tt>true</tt> if @a string is a valid D-Bus address, <tt>false</tt>
 * otherwise.
 * @newin{2,28}
 * @ingroup DBus
 */
bool is_address(const std::string& string);

/** Like is_address() but also checks if the library supports the transports
 * in @a address and that key/value pairs for each transport are valid.
 *
 * @param address A supposed address.
 * @return <tt>true</tt> if @a address is a valid D-Bus address that is
 * supported by this library, <tt>false</tt> otherwise.
 * @throw Glib::Error.
 * @newin{2,28}
 * @ingroup DBus
 */
bool is_supported(const std::string& address);

/** Asynchronously connects to an endpoint specified by @a address and sets up
 * the connection so it is in a state to run the client-side of the D-Bus
 * authentication conversation.
 *
 * When the operation is finished, @a slot will be invoked. You can then call
 * get_stream_finish() to get the result of the operation.
 *
 * This is an asynchronous failable function. See get_stream_sync() for the
 * synchronous version.
 *
 * @param address A valid D-Bus address.
 * @param cancellable A Cancellable.
 * @param slot A SlotAsyncReady to call when the request is satisfied.
 * @newin{2,28}
 * @ingroup DBus
 */
void get_stream(const std::string& address, const SlotAsyncReady slot,
  const Glib::RefPtr<Cancellable>& cancellable);

/// A non-cancellable version of get_stream().
void get_stream(const std::string& address, const SlotAsyncReady slot);

/** Finishes an operation started with get_stream().
 *
 * @param res A AsyncResult obtained from the SlotAsyncReady passed to
 * get_stream().
 * @param out_guid Return location to store the GUID extracted from address,
 * if any.
 * @return A IOStream.
 * @throw Glib::Error.
 * @newin{2,28}
 * @ingroup DBus
 */
Glib::RefPtr<IOStream> get_stream_finish(const Glib::RefPtr<AsyncResult>& res,
  std::string& out_guid);

/** Finishes an operation started with get_stream().
 *
 * @param res A AsyncResult obtained from the SlotAsyncReady passed to
 * get_stream().
 * @return A IOStream.
 * @throw Glib::Error.
 * @newin{2,28}
 * @ingroup DBus
 */
Glib::RefPtr<IOStream> get_stream_finish(const Glib::RefPtr<AsyncResult>& res);

/** Synchronously connects to an endpoint specified by @a address and sets up
 * the connection so it is in a state to run the client-side of the D-Bus
 * authentication conversation.
 *
 * This is a synchronous failable function. See get_stream() for the
 * asynchronous version.
 *
 * @param address A valid D-Bus address.
 * @param cancellable A Cancellable.
 * @param out_guid A return location to store the GUID extracted from address,
 * if any.
 * @return A IOStream.
 * @throw Glib::Error.
 * @newin{2,28}
 * @ingroup DBus
 */
Glib::RefPtr<IOStream> get_stream_sync(const std::string& address,
  const Glib::RefPtr<Cancellable>& cancellable, std::string& out_guid);

/// A non-cancellable version of get_stream_sync().
Glib::RefPtr<IOStream> get_stream_sync(const std::string& address,
  std::string& out_guid);

/** Synchronously connects to an endpoint specified by @a address and sets up
 * the connection so it is in a state to run the client-side of the D-Bus
 * authentication conversation.
 *
 * This is a synchronous failable function. See get_stream() for the
 * asynchronous version.
 *
 * @param address A valid D-Bus address.
 * @param cancellable A Cancellable.
 * @return A IOStream.
 * @throw Glib::Error.
 * @newin{2,28}
 * @ingroup DBus
 */
Glib::RefPtr<IOStream> get_stream_sync(const std::string& address,
  const Glib::RefPtr<Cancellable>& cancellable);

/// A non-cancellable version of get_stream_sync().
Glib::RefPtr<IOStream> get_stream_sync(const std::string& address);

/** Synchronously looks up the D-Bus address for the well-known message bus
 * instance specified by @a bus_type. This may involve using various platform
 * specific mechanisms.
 *
 * @param bus_type A BusType.
 * @param cancellable A Cancellable.
 * @return A valid D-Bus address string for @a bus_type.
 * @throw Glib::Error.
 * @newin{2,28}
 * @ingroup DBus
 */
std::string get_for_bus_sync(BusType bus_type,
  const Glib::RefPtr<Cancellable>& cancellable);

/// A non-cancellable get_for_bus_sync().
std::string get_for_bus_sync(BusType bus_type);

} // namespace Address

} // namespace DBus

} // namespace Gio


#endif /* _GIOMM_DBUSADDRESS_H */

