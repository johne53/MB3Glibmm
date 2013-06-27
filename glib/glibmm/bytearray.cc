// Generated by gtkmmproc -- DO NOT MODIFY!


#include <glibmm.h>

#include <glibmm/bytearray.h>
#include <glibmm/private/bytearray_p.h>


/* Copyright (C) 2013 The glibmm Development Team
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

namespace
{

extern "C"
{

int ByteArray_Compare_Data_Func(gconstpointer a, gconstpointer b,
  gpointer user_data)
{
  Glib::ByteArray::SlotCompare* slot =
    static_cast<Glib::ByteArray::SlotCompare*>(user_data);

  return (*slot)(static_cast<const guint8*>(a), static_cast<const guint8*>(b));
}

}

}

namespace Glib
{

guint ByteArray::size() const
{
  return gobj()->len;
}

guint8* ByteArray::get_data()
{
  return gobj()->data;
}

const guint8* ByteArray::get_data() const
{
  return gobj()->data;
}

GType ByteArray::get_type()
{
  return g_byte_array_get_type();
}

} // namespace Glib

namespace
{
} // anonymous namespace


/* Why reinterpret_cast<ByteArray*>(gobject) is needed:
 *
 * A ByteArray instance is in fact always a GByteArray instance.
 * Unfortunately, GByteArray cannot be a member of ByteArray,
 * because it is an opaque struct.  Also, the C interface does not provide
 * any hooks to install a destroy notification handler, thus we cannot
 * wrap it dynamically either.
 *
 * The cast works because ByteArray does not have any member data, and
 * it is impossible to derive from it.  This is ensured by not implementing
 * the (protected) default constructor.  The ctor is protected rather than
 * private just to avoid a compile warning.
 */

namespace Glib
{

Glib::RefPtr<Glib::ByteArray> wrap(GByteArray* object, bool take_copy)
{
  if(take_copy && object)
    g_byte_array_ref(object);

  // See the comment at the top of this file, if you want to know why the cast works.
  return Glib::RefPtr<Glib::ByteArray>(reinterpret_cast<Glib::ByteArray*>(object));
}

} // namespace Glib


namespace Glib
{


void ByteArray::reference() const
{
  // See the comment at the top of this file, if you want to know why the cast works.
  g_byte_array_ref(reinterpret_cast<GByteArray*>(const_cast<ByteArray*>(this)));
}

void ByteArray::unreference() const
{
  // See the comment at the top of this file, if you want to know why the cast works.
  g_byte_array_unref(reinterpret_cast<GByteArray*>(const_cast<ByteArray*>(this)));
}

GByteArray* ByteArray::gobj()
{
  // See the comment at the top of this file, if you want to know why the cast works.
  return reinterpret_cast<GByteArray*>(this);
}

const GByteArray* ByteArray::gobj() const
{
  // See the comment at the top of this file, if you want to know why the cast works.
  return reinterpret_cast<const GByteArray*>(this);
}

GByteArray* ByteArray::gobj_copy() const
{
  // See the comment at the top of this file, if you want to know why the cast works.
  GByteArray *const gobject = reinterpret_cast<GByteArray*>(const_cast<ByteArray*>(this));
  g_byte_array_ref(gobject);
  return gobject;
}


Glib::RefPtr<ByteArray> ByteArray::create()
{
  return Glib::wrap(g_byte_array_new());
}


Glib::RefPtr<ByteArray> ByteArray::append(const guint8* data, guint len)
{
  return Glib::wrap(g_byte_array_append(gobj(), data, len));
}

Glib::RefPtr<ByteArray> ByteArray::prepend(const guint8* data, guint len)
{
  return Glib::wrap(g_byte_array_prepend(gobj(), data, len));
}

Glib::RefPtr<ByteArray> ByteArray::remove_index(guint index_)
{
  return Glib::wrap(g_byte_array_remove_index(gobj(), index_));
}

Glib::RefPtr<ByteArray> ByteArray::remove_index_fast(guint index_)
{
  return Glib::wrap(g_byte_array_remove_index_fast(gobj(), index_));
}

Glib::RefPtr<ByteArray> ByteArray::remove_range(guint index_, guint length)
{
  return Glib::wrap(g_byte_array_remove_range(gobj(), index_, length));
}

void ByteArray::sort(const SlotCompare& slot)
{
  // Use the original slot (not a copy).
  SlotCompare* slot_copy = const_cast<SlotCompare*>(&slot);

  g_byte_array_sort_with_data(gobj(), &ByteArray_Compare_Data_Func, slot_copy);
}

Glib::RefPtr<ByteArray> ByteArray::set_size(guint length)
{
  return Glib::wrap(g_byte_array_set_size(gobj(), length));
}


} // namespace Glib

