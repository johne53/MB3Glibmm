// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GIOMM_SETTINGS_H
#define _GIOMM_SETTINGS_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

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

#include <glibmm/arrayhandle.h>
#include <glibmm/object.h>
#include <glibmm/variant.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GSettings GSettings;
typedef struct _GSettingsClass GSettingsClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gio
{ class Settings_Class; } // namespace Gio
namespace Gio
{

  /** @addtogroup giommEnums giomm Enums and Flags */

/** 
 * Flags used when creating a binding. These flags determine in which
 * direction the binding works. The default is to synchronize in both
 * directions.
 * @ingroup giommEnums
 * @par Bitwise operators:
 * <tt>%SettingsBindFlags operator|(SettingsBindFlags, SettingsBindFlags)</tt><br>
 * <tt>%SettingsBindFlags operator&(SettingsBindFlags, SettingsBindFlags)</tt><br>
 * <tt>%SettingsBindFlags operator^(SettingsBindFlags, SettingsBindFlags)</tt><br>
 * <tt>%SettingsBindFlags operator~(SettingsBindFlags)</tt><br>
 * <tt>%SettingsBindFlags& operator|=(SettingsBindFlags&, SettingsBindFlags)</tt><br>
 * <tt>%SettingsBindFlags& operator&=(SettingsBindFlags&, SettingsBindFlags)</tt><br>
 * <tt>%SettingsBindFlags& operator^=(SettingsBindFlags&, SettingsBindFlags)</tt><br>
 */
enum SettingsBindFlags
{
  /** Equivalent to <tt>G_SETTINGS_BIND_GET|G_SETTINGS_BIND_SET</tt>
   */
  SETTINGS_BIND_DEFAULT = 0x0,
  /** Update the Object property when the setting changes.
   * It is an error to use this flag if the property is not writable.
   */
  SETTINGS_BIND_GET = (1<<0),
  /** Update the setting when the Object property changes.
   * It is an error to use this flag if the property is not readable.
   */
  SETTINGS_BIND_SET = (1<<1),
  /** Do not try to bind a "sensitivity" property to the writability of the setting
   */
  SETTINGS_BIND_NO_SENSITIVITY = (1<<2),
  /** When set in addition to SETTINGS_BIND_GET, set the Object property
   * value initially from the setting, but do not listen for changes of the setting
   */
  SETTINGS_BIND_GET_NO_CHANGES = (1<<3),
  /** When passed to g_settings_bind(), uses a pair of mapping functions that invert
   * the boolean value when mapping between the setting and the property.  The setting and property must both
   * be booleans.  You cannot pass this flag to g_settings_bind_with_mapping().
   */
  SETTINGS_BIND_INVERT_BOOLEAN = (1<<4)
};

/** @ingroup giommEnums */
inline SettingsBindFlags operator|(SettingsBindFlags lhs, SettingsBindFlags rhs)
  { return static_cast<SettingsBindFlags>(static_cast<unsigned>(lhs) | static_cast<unsigned>(rhs)); }

/** @ingroup giommEnums */
inline SettingsBindFlags operator&(SettingsBindFlags lhs, SettingsBindFlags rhs)
  { return static_cast<SettingsBindFlags>(static_cast<unsigned>(lhs) & static_cast<unsigned>(rhs)); }

/** @ingroup giommEnums */
inline SettingsBindFlags operator^(SettingsBindFlags lhs, SettingsBindFlags rhs)
  { return static_cast<SettingsBindFlags>(static_cast<unsigned>(lhs) ^ static_cast<unsigned>(rhs)); }

/** @ingroup giommEnums */
inline SettingsBindFlags operator~(SettingsBindFlags flags)
  { return static_cast<SettingsBindFlags>(~static_cast<unsigned>(flags)); }

/** @ingroup giommEnums */
inline SettingsBindFlags& operator|=(SettingsBindFlags& lhs, SettingsBindFlags rhs)
  { return (lhs = static_cast<SettingsBindFlags>(static_cast<unsigned>(lhs) | static_cast<unsigned>(rhs))); }

/** @ingroup giommEnums */
inline SettingsBindFlags& operator&=(SettingsBindFlags& lhs, SettingsBindFlags rhs)
  { return (lhs = static_cast<SettingsBindFlags>(static_cast<unsigned>(lhs) & static_cast<unsigned>(rhs))); }

/** @ingroup giommEnums */
inline SettingsBindFlags& operator^=(SettingsBindFlags& lhs, SettingsBindFlags rhs)
  { return (lhs = static_cast<SettingsBindFlags>(static_cast<unsigned>(lhs) ^ static_cast<unsigned>(rhs))); }

} // namespace Gio


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class Value<Gio::SettingsBindFlags> : public Glib::Value_Flags<Gio::SettingsBindFlags>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gio
{


/** A high-level API for application settings
 *
 * The Settings class provides a convenient API for storing and retrieving
 * application settings.
 *
 * @newin{2,28}
 */

class Settings : public Glib::Object
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  typedef Settings CppObjectType;
  typedef Settings_Class CppClassType;
  typedef GSettings BaseObjectType;
  typedef GSettingsClass BaseClassType;

private:  friend class Settings_Class;
  static CppClassType settings_class_;

private:
  // noncopyable
  Settings(const Settings&);
  Settings& operator=(const Settings&);

protected:
  explicit Settings(const Glib::ConstructParams& construct_params);
  explicit Settings(GSettings* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
  virtual ~Settings();

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GSettings*       gobj()       { return reinterpret_cast<GSettings*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GSettings* gobj() const { return reinterpret_cast<GSettings*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GSettings* gobj_copy();

private:


protected:
    explicit Settings(const Glib::ustring& schema);

    explicit Settings(const Glib::ustring& schema, const Glib::ustring& path);

  //TODO: Requires SettingsBackend: _WRAP_CTOR(Settings(const Glib::ustring& schema, const Glib::RefPtr<SettingsBackend>& backend), g_settings_new_with_backend)
  //TODO: Requires SettingsBackend: _WRAP_CTOR(Settings(const Glib::ustring& schema, const Glib::RefPtr<SettingsBackend>& backend, const Glib::ustring& path), g_settings_new_with_backend_and_path)

public:
  
  static Glib::RefPtr<Settings> create(const Glib::ustring& schema);

  
  static Glib::RefPtr<Settings> create(const Glib::ustring& schema, const Glib::ustring& path);

  //TODO: Requires SettingsBackend: _WRAP_CREATE(const Glib::ustring& schema, const Glib::RefPtr<SettingsBackend>& backend)
  //TODO: Requires SettingsBackend: _WRAP_CREATE(const Glib::ustring& schema, const Glib::RefPtr<SettingsBackend>& backend, const Glib::ustring& path)

  
  /** Sets @a key in @a settings to @a value.
   * 
   * It is a programmer error to give a @a key that isn't contained in the
   * schema for @a settings or for @a value to have the incorrect type, per
   * the schema.
   * 
   * If @a value is floating then this function consumes the reference.
   * 
   * @newin{2,26}
   * @param key The name of the key to set.
   * @param value A Variant of the correct type.
   * @return <tt>true</tt> if setting the key succeeded,
   * <tt>false</tt> if the key was not writable.
   */
  bool set_value(const Glib::ustring& key, const Glib::VariantBase& value);

  /** Gets the value that is stored in the settings for a @a key.
   *
   * It is a programmer error to give a @a key that isn't contained in the
   * schema for the settings.
   *
   * @param key The key to get the value for.
   * @param value A Variant of the expected type.
   *
   * @newin{2,28}
   */
  void get_value(const Glib::ustring& key, Glib::VariantBase& value) const;
  

  /** Gets the value that is stored at @a key in @a settings.
   * 
   * A convenience variant of g_settings_get() for 32-bit integers.
   * 
   * It is a programmer error to give a @a key that isn't specified as
   * having a int32 type in the schema for @a settings.
   * 
   * @newin{2,26}
   * @param key The key to get the value for.
   * @return An integer.
   */
  int get_int(const Glib::ustring& key) const;
  
  /** Sets @a key in @a settings to @a value.
   * 
   * A convenience variant of g_settings_set() for 32-bit integers.
   * 
   * It is a programmer error to give a @a key that isn't specified as
   * having a int32 type in the schema for @a settings.
   * 
   * @newin{2,26}
   * @param key The name of the key to set.
   * @param value The value to set it to.
   * @return <tt>true</tt> if setting the key succeeded,
   * <tt>false</tt> if the key was not writable.
   */
  void set_int(const Glib::ustring& key, int value);
  
  /** Gets the value that is stored at @a key in @a settings.
   * 
   * A convenience variant of g_settings_get() for booleans.
   * 
   * It is a programmer error to give a @a key that isn't specified as
   * having a boolean type in the schema for @a settings.
   * 
   * @newin{2,26}
   * @param key The key to get the value for.
   * @return A boolean.
   */
  bool get_boolean(const Glib::ustring& key) const;
  
  /** Sets @a key in @a settings to @a value.
   * 
   * A convenience variant of g_settings_set() for booleans.
   * 
   * It is a programmer error to give a @a key that isn't specified as
   * having a boolean type in the schema for @a settings.
   * 
   * @newin{2,26}
   * @param key The name of the key to set.
   * @param value The value to set it to.
   * @return <tt>true</tt> if setting the key succeeded,
   * <tt>false</tt> if the key was not writable.
   */
  void set_boolean(const Glib::ustring& key, bool value);
  
  /** Gets the value that is stored at @a key in @a settings.
   * 
   * A convenience variant of g_settings_get() for strings.
   * 
   * It is a programmer error to give a @a key that isn't specified as
   * having a string type in the schema for @a settings.
   * 
   * @newin{2,26}
   * @param key The key to get the value for.
   * @return A newly-allocated string.
   */
  Glib::ustring get_string(const Glib::ustring& key) const;
  
  /** Sets @a key in @a settings to @a value.
   * 
   * A convenience variant of g_settings_set() for strings.
   * 
   * It is a programmer error to give a @a key that isn't specified as
   * having a string type in the schema for @a settings.
   * 
   * @newin{2,26}
   * @param key The name of the key to set.
   * @param value The value to set it to.
   * @return <tt>true</tt> if setting the key succeeded,
   * <tt>false</tt> if the key was not writable.
   */
  void set_string(const Glib::ustring& key, const Glib::ustring& value);
  
  /** Gets the value that is stored at @a key in @a settings.
   * 
   * A convenience variant of g_settings_get() for doubles.
   * 
   * It is a programmer error to give a @a key that isn't specified as
   * having a 'double' type in the schema for @a settings.
   * 
   * @newin{2,26}
   * @param key The key to get the value for.
   * @return A double.
   */
  double get_double(const Glib::ustring& key) const;
  
  /** Sets @a key in @a settings to @a value.
   * 
   * A convenience variant of g_settings_set() for doubles.
   * 
   * It is a programmer error to give a @a key that isn't specified as
   * having a 'double' type in the schema for @a settings.
   * 
   * @newin{2,26}
   * @param key The name of the key to set.
   * @param value The value to set it to.
   * @return <tt>true</tt> if setting the key succeeded,
   * <tt>false</tt> if the key was not writable.
   */
  void set_double(const Glib::ustring& key, double value);

   
  /** A convenience variant of g_settings_get() for string arrays.
   * 
   * It is a programmer error to give a @a key that isn't specified as
   * having an array of strings type in the schema for @a settings.
   * 
   * @newin{2,26}
   * @param key The key to get the value for.
   * @return A
   * newly-allocated, <tt>0</tt>-terminated array of strings, the value that
   * is stored at @a key in @a settings.
   */
  Glib::StringArrayHandle get_string_array(const Glib::ustring& key) const;

  
  /** Sets @a key in @a settings to @a value.
   * 
   * A convenience variant of g_settings_set() for string arrays.  If
   *  @a value is <tt>0</tt>, then @a key is set to be the empty array.
   * 
   * It is a programmer error to give a @a key that isn't specified as
   * having an array of strings type in the schema for @a settings.
   * 
   * @newin{2,26}
   * @param key The name of the key to set.
   * @param value The value to set it to, or <tt>0</tt>.
   * @return <tt>true</tt> if setting the key succeeded,
   * <tt>false</tt> if the key was not writable.
   */
  bool set_string_array(const Glib::ustring& key, const Glib::StringArrayHandle& value);

  
  /** Gets the value that is stored in @a settings for @a key and converts it
   * to the enum value that it represents.
   * 
   * In order to use this function the type of the value must be a string
   * and it must be marked in the schema file as an enumerated type.
   * 
   * It is a programmer error to give a @a key that isn't contained in the
   * schema for @a settings or is not marked as an enumerated type.
   * 
   * If the value stored in the configuration database is not a valid
   * value for the enumerated type then this function will return the
   * default value.
   * 
   * @newin{2,26}
   * @param key The key to get the value for.
   * @return The enum value.
   */
  int get_enum(const Glib::ustring& key) const;
  
  /** Looks up the enumerated type nick for @a value and writes it to @a key,
   * within @a settings.
   * 
   * It is a programmer error to give a @a key that isn't contained in the
   * schema for @a settings or is not marked as an enumerated type, or for
   *  @a value not to be a valid value for the named type.
   * 
   * After performing the write, accessing @a key directly with
   * g_settings_get_string() will return the 'nick' associated with
   *  @a value.
   * @param key A key, within @a settings.
   * @param value An enumerated value.
   * @return <tt>true</tt>, if the set succeeds.
   */
  bool get_enum(const Glib::ustring& key, int value);
  
  /** Gets the value that is stored in @a settings for @a key and converts it
   * to the flags value that it represents.
   * 
   * In order to use this function the type of the value must be an array
   * of strings and it must be marked in the schema file as an flags type.
   * 
   * It is a programmer error to give a @a key that isn't contained in the
   * schema for @a settings or is not marked as a flags type.
   * 
   * If the value stored in the configuration database is not a valid
   * value for the flags type then this function will return the default
   * value.
   * 
   * @newin{2,26}
   * @param key The key to get the value for.
   * @return The flags value.
   */
  guint get_flags(const Glib::ustring& key) const;
  
  /** Looks up the flags type nicks for the bits specified by @a value, puts
   * them in an array of strings and writes the array to @a key, within
   *  @a settings.
   * 
   * It is a programmer error to give a @a key that isn't contained in the
   * schema for @a settings or is not marked as a flags type, or for @a value
   * to contain any bits that are not value for the named type.
   * 
   * After performing the write, accessing @a key directly with
   * g_settings_get_strv() will return an array of 'nicks'; one for each
   * bit in @a value.
   * @param key A key, within @a settings.
   * @param value A flags value.
   * @return <tt>true</tt>, if the set succeeds.
   */
  bool get_flags(const Glib::ustring& key, guint value);

  // Ignore varargs functions.
  

  /** Creates a 'child' settings object which has a base path of
   * <em>base-path</em>/ @a name, where
   * <em>base-path</em> is the base path of @a settings.
   * 
   * The schema for the child settings object must have been declared
   * in the schema of @a settings using a <tag class="starttag">child</tag> element.
   * 
   * @newin{2,26}
   * @param name The name of the 'child' schema.
   * @return A 'child' settings object.
   */
  Glib::RefPtr<Settings> get_child(const Glib::ustring& name);
  
  /** Creates a 'child' settings object which has a base path of
   * <em>base-path</em>/ @a name, where
   * <em>base-path</em> is the base path of @a settings.
   * 
   * The schema for the child settings object must have been declared
   * in the schema of @a settings using a <tag class="starttag">child</tag> element.
   * 
   * @newin{2,26}
   * @param name The name of the 'child' schema.
   * @return A 'child' settings object.
   */
  Glib::RefPtr<const Settings> get_child(const Glib::ustring& name) const;
  
  /** Finds out if a key can be written or not
   * 
   * @newin{2,26}
   * @param name The name of a key.
   * @return <tt>true</tt> if the key @a name is writable.
   */
  bool is_writable(const Glib::ustring& key) const;

  
  /** Changes the Settings object into 'delay-apply' mode. In this
   * mode, changes to @a settings are not immediately propagated to the
   * backend, but kept locally until g_settings_apply() is called.
   * 
   * @newin{2,26}
   */
  void delay();
  
  /** Applies any changes that have been made to the settings.  This
   * function does nothing unless @a settings is in 'delay-apply' mode;
   * see g_settings_delay().  In the normal case settings are always
   * applied immediately.
   */
  void apply();
  
  /** Reverts all non-applied changes to the settings.  This function
   * does nothing unless @a settings is in 'delay-apply' mode; see
   * g_settings_delay().  In the normal case settings are always applied
   * immediately.
   * 
   * Change notifications will be emitted for affected keys.
   */
  void revert();
  
  /** Returns whether the Settings object has any unapplied
   * changes.  This can only be the case if it is in 'delayed-apply' mode.
   * 
   * @newin{2,26}
   * @return <tt>true</tt> if @a settings has unapplied changes.
   */
  bool get_has_unapplied() const;

  
  /** Resets @a key to its default value.
   * 
   * This call resets the key, as much as possible, to its default value.
   * That might the value specified in the schema or the one set by the
   * administrator.
   * @param key The name of a key.
   */
  void reset(const Glib::ustring& key);

//We must hand-code this because gmmproc is confused by the static keyword with the vector.
//#m4 __CONVERSION(`const gchar*const*',`std::vector<Glib::ustring>',`Glib::ArrayHandler<Glib::ustring>::array_to_vector($3, Glib::OWNERSHIP_NONE)')
  
  /** Gets a list of the Settings schemas installed on the system.  The
   * returned list is exactly the list of schemas for which you may call
   * g_settings_new() without adverse effects.
   * 
   * This function does not list the schemas that do not provide their own
   * paths (ie: schemas for which you must use
   * g_settings_new_with_path()).  See
   * g_settings_list_relocatable_schemas() for that.
   * 
   * @newin{2,26}
   * @return A list of Settings
   * schemas that are available.  The list must not be modified or
   * freed.
   */

  static std::vector<Glib::ustring> list_schemas();
  

  /** Gets the list of children on @a settings.
   * 
   * The list is exactly the list of strings for which it is not an error
   * to call g_settings_get_child().
   * 
   * For GSettings objects that are lists, this value can change at any
   * time and you should connect to the "children-changed" signal to watch
   * for those changes.  Note that there is a race condition here: you may
   * request a child after listing it only for it to have been destroyed
   * in the meantime.  For this reason, g_settings_get_child() may return
   * <tt>0</tt> even for a child that was listed by this function.
   * 
   * For GSettings objects that are not lists, you should probably not be
   * calling this function from "normal" code (since you should already
   * know what children are in your schema).  This function may still be
   * useful there for introspection reasons, however.
   * 
   * You should free the return value with Glib::strfreev() when you are done
   * with it.
   * @return A list of the children on @a settings.
   */
  std::vector<Glib::ustring> list_children() const;
  
  /** Introspects the list of keys on @a settings.
   * 
   * You should probably not be calling this function from "normal" code
   * (since you should already know what keys are in your schema).  This
   * function is intended for introspection reasons.
   * 
   * You should free the return value with Glib::strfreev() when you are done
   * with it.
   * @return A list of the keys on @a settings.
   */
  std::vector<Glib::ustring> list_keys() const;

  //TODO: Choose an appropriate Variant template type: GVariant* g_settings_get_range(const gchar* key)

  
  /** Checks if the given @a value is of the correct type and within the
   * permitted range for @a key.
   * 
   * This API is not intended to be used by normal programs -- they should
   * already know what is permitted by their own schemas.  This API is
   * meant to be used by programs such as editors or commandline tools.
   * 
   * It is a programmer error to give a @a key that isn't contained in the
   * schema for @a settings.
   * 
   * @newin{2,28}
   * @param key The key to check.
   * @param value The value to check.
   * @return <tt>true</tt> if @a value is valid for @a key.
   */
  bool range_check(const Glib::ustring& key, const Glib::VariantBase& value) const;

 
  /** Create a binding between the @a key in the @a settings object
   * and the property @a property of @a object.
   * 
   * The binding uses the default GIO mapping functions to map
   * between the settings and property values. These functions
   * handle booleans, numeric types and string types in a
   * straightforward way. Use g_settings_bind_with_mapping() if
   * you need a custom mapping, or map between types that are not
   * supported by the default mapping functions.
   * 
   * Unless the @a flags include SETTINGS_BIND_NO_SENSITIVITY, this
   * function also establishes a binding between the writability of
   *  @a key and the "sensitive" property of @a object (if @a object has
   * a boolean property by that name). See g_settings_bind_writable()
   * for more details about writable bindings.
   * 
   * Note that the lifecycle of the binding is tied to the object,
   * and that you can have only one binding per object property.
   * If you bind the same property twice on the same object, the second
   * binding overrides the first one.
   * 
   * @newin{2,26}
   * @param key The key to bind.
   * @param object A Object.
   * @param property The name of the property to bind.
   * @param flags Flags for the binding.
   */
  void bind(const Glib::ustring& key, Glib::ObjectBase* object, const Glib::ustring& property, SettingsBindFlags flags = SETTINGS_BIND_DEFAULT);
  void bind(const Glib::ustring& key, const Glib::PropertyProxy_Base& property_proxy, SettingsBindFlags flags=SETTINGS_BIND_DEFAULT);
  // TODO: implement bind_with_mapping
  
  /** Create a binding between the writability of @a key in the
   *  @a settings object and the property @a property of @a object.
   * The property must be boolean; "sensitive" or "visible"
   * properties of widgets are the most likely candidates.
   * 
   * Writable bindings are always uni-directional; changes of the
   * writability of the setting will be propagated to the object
   * property, not the other way.
   * 
   * When the @a inverted argument is <tt>true</tt>, the binding inverts the
   * value as it passes from the setting to the object, i.e. @a property
   * will be set to <tt>true</tt> if the key is <em>not</em>
   * writable.
   * 
   * Note that the lifecycle of the binding is tied to the object,
   * and that you can have only one binding per object property.
   * If you bind the same property twice on the same object, the second
   * binding overrides the first one.
   * 
   * @newin{2,26}
   * @param key The key to bind.
   * @param object A Object.
   * @param property The name of a boolean property to bind.
   * @param inverted Whether to 'invert' the value.
   */
  void bind_writable(const Glib::ustring& key, Glib::ObjectBase* object, const Glib::ustring& property, bool inverted = false);
  void bind_writable(const Glib::ustring& key, const Glib::PropertyProxy_Base& property_proxy, bool inverted=false);
  // TODO: unbind is not actually a class method

  //TODO?: _WRAP_SIGNAL(bool change_event(const Glib::ArrayHandle<Glib::QueryQuark>& keys, int n_keys), "change-event")

 
/**
   * @par Slot Prototype:
   * <tt>void on_my_%changed(const Glib::ustring& key)</tt>
   *
   * The "changed" signal is emitted when a key has potentially changed.
   * You should call one of the g_settings_get() calls to check the new
   * value.
   * 
   * This signal supports detailed connections.  You can connect to the
   * detailed signal "changed::x" in order to only receive callbacks
   * when key "x" changes.
   * @param key The name of the key that changed.
   */

  Glib::SignalProxy1< void,const Glib::ustring& > signal_changed();


/**
   * @par Slot Prototype:
   * <tt>bool on_my_%writable_change_event(guint key)</tt>
   *
   * The "writable-change-event" signal is emitted once per writability
   * change event that affects this settings object.  You should connect
   * to this signal if you are interested in viewing groups of changes
   * before they are split out into multiple emissions of the
   * "writable-changed" signal.  For most use cases it is more
   * appropriate to use the "writable-changed" signal.
   * 
   * In the event that the writability change applies only to a single
   * key, @a key will be set to the Quark for that key.  In the event
   * that the writability change affects the entire settings object,
   *  @a key will be 0.
   * 
   * The default handler for this signal invokes the "writable-changed"
   * and "changed" signals for each affected key.  This is done because
   * changes in writability might also imply changes in value (if for
   * example, a new mandatory setting is introduced).  If any other
   * connected handler returns <tt>true</tt> then this default functionality
   * will be suppressed.
   * @param key The quark of the key, or 0.
   * @return <tt>true</tt> to stop other handlers from being invoked for the
   * event. <tt>false</tt> to propagate the event further.
   */

  Glib::SignalProxy1< bool,guint > signal_writable_change_event();

  
/**
   * @par Slot Prototype:
   * <tt>void on_my_%writable_changed(const Glib::ustring& key)</tt>
   *
   * The "writable-changed" signal is emitted when the writability of a
   * key has potentially changed.  You should call
   * g_settings_is_writable() in order to determine the new status.
   * 
   * This signal supports detailed connections.  You can connect to the
   * detailed signal "writable-changed::x" in order to only receive
   * callbacks when the writability of "x" changes.
   * @param key The key.
   */

  Glib::SignalProxy1< void,const Glib::ustring& > signal_writable_changed();


public:

public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::
  /// This is a default handler for the signal signal_changed().
  virtual void on_changed(const Glib::ustring& key);
  /// This is a default handler for the signal signal_writable_change_event().
  virtual bool on_writable_change_event(guint key);
  /// This is a default handler for the signal signal_writable_changed().
  virtual void on_writable_changed(const Glib::ustring& key);


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
   * @relates Gio::Settings
   */
  Glib::RefPtr<Gio::Settings> wrap(GSettings* object, bool take_copy = false);
}


#endif /* _GIOMM_SETTINGS_H */

