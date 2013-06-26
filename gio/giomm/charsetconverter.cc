// Generated by gtkmmproc -- DO NOT MODIFY!


#include <glibmm.h>

#include <giomm/charsetconverter.h>
#include <giomm/private/charsetconverter_p.h>


/* Copyright (C) 2012 The giomm Development Team
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

namespace Gio
{

CharsetConverter::CharsetConverter(const Glib::ustring& to_charset,
  const Glib::ustring& from_charset)
: // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Glib::Object(Glib::ConstructParams(charsetconverter_class_.init(), "to-charset",to_charset.c_str(),"from-charset",from_charset.c_str(), static_cast<char*>(0)))
{
}

} // namespace Gio

namespace
{
} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gio::CharsetConverter> wrap(GCharsetConverter* object, bool take_copy)
{
  return Glib::RefPtr<Gio::CharsetConverter>( dynamic_cast<Gio::CharsetConverter*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gio
{


/* The *_Class implementation: */

const Glib::Class& CharsetConverter_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &CharsetConverter_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(g_charset_converter_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:
  Converter::add_interface(get_type());

  }

  return *this;
}


void CharsetConverter_Class::class_init_function(void* g_class, void* class_data)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* CharsetConverter_Class::wrap_new(GObject* object)
{
  return new CharsetConverter((GCharsetConverter*)object);
}


/* The implementation: */

GCharsetConverter* CharsetConverter::gobj_copy()
{
  reference();
  return gobj();
}

CharsetConverter::CharsetConverter(const Glib::ConstructParams& construct_params)
:
  Glib::Object(construct_params)
{

}

CharsetConverter::CharsetConverter(GCharsetConverter* castitem)
:
  Glib::Object((GObject*)(castitem))
{}


CharsetConverter::~CharsetConverter()
{}


CharsetConverter::CppClassType CharsetConverter::charsetconverter_class_; // initialize static member

GType CharsetConverter::get_type()
{
  return charsetconverter_class_.init().get_type();
}


GType CharsetConverter::get_base_type()
{
  return g_charset_converter_get_type();
}


Glib::RefPtr<CharsetConverter> CharsetConverter::create(const Glib::ustring& to_charset, const Glib::ustring& from_charset)
{
  return Glib::RefPtr<CharsetConverter>( new CharsetConverter(to_charset, from_charset) );
}

void CharsetConverter::set_use_fallback(bool use_fallback)
{
  g_charset_converter_set_use_fallback(gobj(), static_cast<int>(use_fallback));
}

bool CharsetConverter::get_use_fallback() const
{
  return g_charset_converter_get_use_fallback(const_cast<GCharsetConverter*>(gobj()));
}

guint CharsetConverter::get_num_fallbacks() const
{
  return g_charset_converter_get_num_fallbacks(const_cast<GCharsetConverter*>(gobj()));
}


#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< Glib::ustring > CharsetConverter::property_from_charset() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "from-charset");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< Glib::ustring > CharsetConverter::property_to_charset() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "to-charset");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< bool > CharsetConverter::property_use_fallback() 
{
  return Glib::PropertyProxy< bool >(this, "use-fallback");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< bool > CharsetConverter::property_use_fallback() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "use-fallback");
}
#endif //GLIBMM_PROPERTIES_ENABLED


} // namespace Gio


