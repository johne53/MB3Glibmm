// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GIOMM_UNIXOUTPUTSTREAM_H
#define _GIOMM_UNIXOUTPUTSTREAM_H


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

#include <giomm/outputstream.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GUnixOutputStream GUnixOutputStream;
typedef struct _GUnixOutputStreamClass GUnixOutputStreamClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gio
{ class UnixOutputStream_Class; } // namespace Gio
namespace Gio
{

/** UnixOutputStream implements OutputStream for writing to a a unix file
 * descriptor, including asynchronous operations. The file descriptor much be
 * selectable, so it doesn't work with opened files.
 *
 * @ingroup Streams
 *
 * @newin{2,16}
 */

class UnixOutputStream : public Gio::OutputStream
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  typedef UnixOutputStream CppObjectType;
  typedef UnixOutputStream_Class CppClassType;
  typedef GUnixOutputStream BaseObjectType;
  typedef GUnixOutputStreamClass BaseClassType;

private:  friend class UnixOutputStream_Class;
  static CppClassType unixoutputstream_class_;

private:
  // noncopyable
  UnixOutputStream(const UnixOutputStream&);
  UnixOutputStream& operator=(const UnixOutputStream&);

protected:
  explicit UnixOutputStream(const Glib::ConstructParams& construct_params);
  explicit UnixOutputStream(GUnixOutputStream* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
  virtual ~UnixOutputStream();

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GUnixOutputStream*       gobj()       { return reinterpret_cast<GUnixOutputStream*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GUnixOutputStream* gobj() const { return reinterpret_cast<GUnixOutputStream*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GUnixOutputStream* gobj_copy();

private:

  //This is not available on Win32.
//This source file will not be compiled on Win32,
//and no class defined in it will be registered by wrap_init().


protected:
    explicit UnixOutputStream(int fd, bool close_fd);


public:
  
  static Glib::RefPtr<UnixOutputStream> create(int fd, bool close_fd);


  /** Sets whether the file descriptor of @a stream shall be closed
   * when the stream is closed.
   * 
   * @newin{2,20}
   * @param close_fd <tt>true</tt> to close the file descriptor when done.
   */
  void set_close_fd(bool close_fd =  true);
  
  /** Returns whether the file descriptor of @a stream will be
   * closed when the stream is closed.
   * 
   * @newin{2,20}
   * @return <tt>true</tt> if the file descriptor is closed when done.
   */
  bool get_close_fd() const;
  
  /** Return the UNIX file descriptor that the stream writes to.
   * 
   * @newin{2,20}
   * @return The file descriptor of @a stream.
   */
  int get_fd() const;

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** The file descriptor to write to.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< int > property_fd() const;
#endif //#GLIBMM_PROPERTIES_ENABLED


  #ifdef GLIBMM_PROPERTIES_ENABLED
/** Whether to close the file descriptor when the stream is closed.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_close_fd() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** Whether to close the file descriptor when the stream is closed.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_close_fd() const;
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
   * @relates Gio::UnixOutputStream
   */
  Glib::RefPtr<Gio::UnixOutputStream> wrap(GUnixOutputStream* object, bool take_copy = false);
}


#endif /* _GIOMM_UNIXOUTPUTSTREAM_H */
