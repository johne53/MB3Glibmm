// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GIOMM_ENUMS_H
#define _GIOMM_ENUMS_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

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
#include <glibmm/value.h>


namespace Gio
{

/** @addtogroup giommEnums giomm Enums and Flags */

/** 
 * DataStreamByteOrder is used to ensure proper endianness of streaming data sources
 * across various machine architectures.
 * @ingroup giommEnums
 */
enum DataStreamByteOrder
{
  /** Selects Big Endian byte order.
   */
  DATA_STREAM_BYTE_ORDER_BIG_ENDIAN,
  /** Selects Little Endian byte order.
   */
  DATA_STREAM_BYTE_ORDER_LITTLE_ENDIAN,
  /** Selects endianness based on host machine's architecture.
   */
  DATA_STREAM_BYTE_ORDER_HOST_ENDIAN
};


/** 
 * DataStreamNewlineType is used when checking for or setting the line endings for a given file.
 * @ingroup giommEnums
 */
enum DataStreamNewlineType
{
  /** Selects "LF" line endings, common on most modern UNIX platforms.
   */
  DATA_STREAM_NEWLINE_TYPE_LF,
  /** Selects "CR" line endings.
   */
  DATA_STREAM_NEWLINE_TYPE_CR,
  /** Selects "CR, LF" line ending, common on Microsoft Windows.
   */
  DATA_STREAM_NEWLINE_TYPE_CR_LF,
  /** Automatically try to handle any line ending type.
   */
  DATA_STREAM_NEWLINE_TYPE_ANY
};


/** 
 * Error codes returned by GIO functions.
 * @ingroup giommEnums
 */
enum ErrorEnum
{
  /** Generic error condition for when any operation fails.
   */
  IO_ERROR_FAILED,
  /** File not found.
   */
  IO_ERROR_NOT_FOUND,
  /** File already exists.
   */
  IO_ERROR_EXISTS,
  /** File is a directory.
   */
  IO_ERROR_IS_DIRECTORY,
  /** File is not a directory.
   */
  IO_ERROR_NOT_DIRECTORY,
  /** File is a directory that isn't empty.
   */
  IO_ERROR_NOT_EMPTY,
  /** File is not a regular file.
   */
  IO_ERROR_NOT_REGULAR_FILE,
  /** File is not a symbolic link.
   */
  IO_ERROR_NOT_SYMBOLIC_LINK,
  /** File cannot be mounted.
   */
  IO_ERROR_NOT_MOUNTABLE_FILE,
  /** Filename is too many characters.
   */
  IO_ERROR_FILENAME_TOO_LONG,
  /** Filename is invalid or contains invalid characters.
   */
  IO_ERROR_INVALID_FILENAME,
  /** File contains too many symbolic links.
   */
  IO_ERROR_TOO_MANY_LINKS,
  /** No space left on drive.
   */
  IO_ERROR_NO_SPACE,
  /** Invalid argument.
   */
  IO_ERROR_INVALID_ARGUMENT,
  /** Permission denied.
   */
  IO_ERROR_PERMISSION_DENIED,
  /** Operation not supported for the current backend.
   */
  IO_ERROR_NOT_SUPPORTED,
  /** File isn't mounted.
   */
  IO_ERROR_NOT_MOUNTED,
  /** File is already mounted.
   */
  IO_ERROR_ALREADY_MOUNTED,
  /** File was closed.
   */
  IO_ERROR_CLOSED,
  /** Operation was cancelled. See Cancellable.
   */
  IO_ERROR_CANCELLED,
  /** Operations are still pending.
   */
  IO_ERROR_PENDING,
  /** File is read only.
   */
  IO_ERROR_READ_ONLY,
  /** Backup couldn't be created.
   */
  IO_ERROR_CANT_CREATE_BACKUP,
  /** File's Entity Tag was incorrect.
   */
  IO_ERROR_WRONG_ETAG,
  /** Operation timed out.
   */
  IO_ERROR_TIMED_OUT,
  /** Operation would be recursive.
   */
  IO_ERROR_WOULD_RECURSE,
  /** File is busy.
   */
  IO_ERROR_BUSY,
  /** Operation would block.
   */
  IO_ERROR_WOULD_BLOCK,
  /** Host couldn't be found (remote operations).
   */
  IO_ERROR_HOST_NOT_FOUND,
  IO_ERROR_HOST_WAS_NOT_FOUND = IO_ERROR_HOST_NOT_FOUND,
  /** Operation would merge files.
   */
  IO_ERROR_WOULD_MERGE,
  /** Operation failed and a helper program has
   * already interacted with the user. Do not display any error dialog.
   */
  IO_ERROR_FAILED_HANDLED,
  /** The current process has too many files
   * open and can't open any more. Duplicate descriptors do count toward
   * this limit. @newin{2,20}
   */
  IO_ERROR_TOO_MANY_OPEN_FILES,
  /** The object has not been initialized. @newin{2,22}
   */
  IO_ERROR_NOT_INITIALIZED,
  /** The requested address is already in use. @newin{2,22}
   */
  IO_ERROR_ADDRESS_IN_USE,
  /** Need more input to finish operation. @newin{2,24}
   */
  IO_ERROR_PARTIAL_INPUT,
  /** The input data was invalid. @newin{2,24}
   */
  IO_ERROR_INVALID_DATA,
  /** A remote object generated an error that
   * doesn't correspond to a locally registered Error error
   * domain. Use g_dbus_error_get_remote_error() to extract the D-Bus
   * error name and g_dbus_error_strip_remote_error() to fix up the
   * message so it matches what was received on the wire. @newin{2,26}
   */
  IO_ERROR_DBUS_ERROR,
  /** Host unreachable. @newin{2,26}
   */
  IO_ERROR_HOST_UNREACHABLE,
  /** Network unreachable. @newin{2,26}
   */
  IO_ERROR_NETWORK_UNREACHABLE,
  /** Connection refused. @newin{2,26}
   */
  IO_ERROR_CONNECTION_REFUSED,
  /** Connection to proxy server failed. @newin{2,26}
   */
  IO_ERROR_PROXY_FAILED,
  /** Proxy authentication failed. @newin{2,26}
   */
  IO_ERROR_PROXY_AUTH_FAILED,
  /** Proxy server needs authentication. @newin{2,26}
   */
  IO_ERROR_PROXY_NEED_AUTH,
  /** Proxy connection is not allowed by ruleset.
   * @newin{2,26}
   */
  IO_ERROR_PROXY_NOT_ALLOWED,
  /** Broken pipe. @newin{2,36}
   */
  IO_ERROR_BROKEN_PIPE
};


/** 
 * The protocol family of a SocketAddress. (These values are
 * identical to the system defines Af::INET, Af::INET6 and Af::UNIX,
 * if available.)
 * 
 * @newin{2,22}
 * @ingroup giommEnums
 */
enum SocketFamily
{
  /** no address family
   */
  SOCKET_FAMILY_INVALID = 0,
  /** the UNIX domain family
   */
  SOCKET_FAMILY_UNIX = GLIB_SYSDEF_AF_UNIX,
  /** the IPv4 family
   */
  SOCKET_FAMILY_IPV4 = GLIB_SYSDEF_AF_INET,
  /** the IPv6 family
   */
  SOCKET_FAMILY_IPV6 = GLIB_SYSDEF_AF_INET6
};

} // namespace Gio


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class Value<Gio::SocketFamily> : public Glib::Value_Enum<Gio::SocketFamily>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gio
{


//TODO: Re-add after the next stable release (2.36) when development of its
//related classes can continue safely.
//_WRAP_ENUM(TlsAuthenticationMode, GTlsAuthenticationMode)

// This one is needed by SocketClient (not removed).
/** 
 * A set of flags describing TLS certification validation. This can be
 * used to set which validation steps to perform (eg, with
 * g_tls_client_connection_set_validation_flags()), or to describe why
 * a particular certificate was rejected (eg, in
 * TlsConnection::signal_accept_certificate()).
 * 
 * @newin{2,28}
 * @ingroup giommEnums
 * @par Bitwise operators:
 * <tt>%TlsCertificateFlags operator|(TlsCertificateFlags, TlsCertificateFlags)</tt><br>
 * <tt>%TlsCertificateFlags operator&(TlsCertificateFlags, TlsCertificateFlags)</tt><br>
 * <tt>%TlsCertificateFlags operator^(TlsCertificateFlags, TlsCertificateFlags)</tt><br>
 * <tt>%TlsCertificateFlags operator~(TlsCertificateFlags)</tt><br>
 * <tt>%TlsCertificateFlags& operator|=(TlsCertificateFlags&, TlsCertificateFlags)</tt><br>
 * <tt>%TlsCertificateFlags& operator&=(TlsCertificateFlags&, TlsCertificateFlags)</tt><br>
 * <tt>%TlsCertificateFlags& operator^=(TlsCertificateFlags&, TlsCertificateFlags)</tt><br>
 */
enum TlsCertificateFlags
{
  /** The signing certificate authority is
   * not known.
   */
  TLS_CERTIFICATE_UNKNOWN_CA = (1 << 0),
  /** The certificate does not match the
   * expected identity of the site that it was retrieved from.
   */
  TLS_CERTIFICATE_BAD_IDENTITY = (1 << 1),
  /** The certificate's activation time
   * is still in the future
   */
  TLS_CERTIFICATE_NOT_ACTIVATED = (1 << 2),
  /** The certificate has expired
   */
  TLS_CERTIFICATE_EXPIRED = (1 << 3),
  /** The certificate has been revoked
   * according to the TlsConnection's certificate revocation list.
   */
  TLS_CERTIFICATE_REVOKED = (1 << 4),
  /** The certificate's algorithm is
   * considered insecure.
   */
  TLS_CERTIFICATE_INSECURE = (1 << 5),
  /** Some other error occurred validating
   * the certificate
   */
  TLS_CERTIFICATE_GENERIC_ERROR = (1 << 6),
  /** the combination of all of the above
   * flags
   */
  TLS_CERTIFICATE_VALIDATE_ALL = 0x007f
};

/** @ingroup giommEnums */
inline TlsCertificateFlags operator|(TlsCertificateFlags lhs, TlsCertificateFlags rhs)
  { return static_cast<TlsCertificateFlags>(static_cast<unsigned>(lhs) | static_cast<unsigned>(rhs)); }

/** @ingroup giommEnums */
inline TlsCertificateFlags operator&(TlsCertificateFlags lhs, TlsCertificateFlags rhs)
  { return static_cast<TlsCertificateFlags>(static_cast<unsigned>(lhs) & static_cast<unsigned>(rhs)); }

/** @ingroup giommEnums */
inline TlsCertificateFlags operator^(TlsCertificateFlags lhs, TlsCertificateFlags rhs)
  { return static_cast<TlsCertificateFlags>(static_cast<unsigned>(lhs) ^ static_cast<unsigned>(rhs)); }

/** @ingroup giommEnums */
inline TlsCertificateFlags operator~(TlsCertificateFlags flags)
  { return static_cast<TlsCertificateFlags>(~static_cast<unsigned>(flags)); }

/** @ingroup giommEnums */
inline TlsCertificateFlags& operator|=(TlsCertificateFlags& lhs, TlsCertificateFlags rhs)
  { return (lhs = static_cast<TlsCertificateFlags>(static_cast<unsigned>(lhs) | static_cast<unsigned>(rhs))); }

/** @ingroup giommEnums */
inline TlsCertificateFlags& operator&=(TlsCertificateFlags& lhs, TlsCertificateFlags rhs)
  { return (lhs = static_cast<TlsCertificateFlags>(static_cast<unsigned>(lhs) & static_cast<unsigned>(rhs))); }

/** @ingroup giommEnums */
inline TlsCertificateFlags& operator^=(TlsCertificateFlags& lhs, TlsCertificateFlags rhs)
  { return (lhs = static_cast<TlsCertificateFlags>(static_cast<unsigned>(lhs) ^ static_cast<unsigned>(rhs))); }

} // namespace Gio


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class Value<Gio::TlsCertificateFlags> : public Glib::Value_Flags<Gio::TlsCertificateFlags>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gio
{


} // namespace Gio


#endif /* _GIOMM_ENUMS_H */
