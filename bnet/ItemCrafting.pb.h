// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ItemCrafting.proto

#ifndef PROTOBUF_ItemCrafting_2eproto__INCLUDED
#define PROTOBUF_ItemCrafting_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2003000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2003000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_message_reflection.h>
// @@protoc_insertion_point(includes)

namespace D3 {
namespace ItemCrafting {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_ItemCrafting_2eproto();
void protobuf_AssignDesc_ItemCrafting_2eproto();
void protobuf_ShutdownFile_ItemCrafting_2eproto();

class CrafterData;
class CrafterSavedData;

// ===================================================================

class CrafterData : public ::google::protobuf::Message {
 public:
  CrafterData();
  virtual ~CrafterData();
  
  CrafterData(const CrafterData& from);
  
  inline CrafterData& operator=(const CrafterData& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const CrafterData& default_instance();
  
  void Swap(CrafterData* other);
  
  // implements Message ----------------------------------------------
  
  CrafterData* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CrafterData& from);
  void MergeFrom(const CrafterData& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // repeated sfixed32 recipes = 1;
  inline int recipes_size() const;
  inline void clear_recipes();
  static const int kRecipesFieldNumber = 1;
  inline ::google::protobuf::int32 recipes(int index) const;
  inline void set_recipes(int index, ::google::protobuf::int32 value);
  inline void add_recipes(::google::protobuf::int32 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      recipes() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_recipes();
  
  // repeated sfixed32 available_enchants = 2;
  inline int available_enchants_size() const;
  inline void clear_available_enchants();
  static const int kAvailableEnchantsFieldNumber = 2;
  inline ::google::protobuf::int32 available_enchants(int index) const;
  inline void set_available_enchants(int index, ::google::protobuf::int32 value);
  inline void add_available_enchants(::google::protobuf::int32 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      available_enchants() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_available_enchants();
  
  // required int32 level = 3;
  inline bool has_level() const;
  inline void clear_level();
  static const int kLevelFieldNumber = 3;
  inline ::google::protobuf::int32 level() const;
  inline void set_level(::google::protobuf::int32 value);
  
  // required sfixed64 cooldown_end = 4;
  inline bool has_cooldown_end() const;
  inline void clear_cooldown_end();
  static const int kCooldownEndFieldNumber = 4;
  inline ::google::protobuf::int64 cooldown_end() const;
  inline void set_cooldown_end(::google::protobuf::int64 value);
  
  // @@protoc_insertion_point(class_scope:D3.ItemCrafting.CrafterData)
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > recipes_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > available_enchants_;
  ::google::protobuf::int32 level_;
  ::google::protobuf::int64 cooldown_end_;
  friend void  protobuf_AddDesc_ItemCrafting_2eproto();
  friend void protobuf_AssignDesc_ItemCrafting_2eproto();
  friend void protobuf_ShutdownFile_ItemCrafting_2eproto();
  
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];
  
  // WHY DOES & HAVE LOWER PRECEDENCE THAN != !?
  inline bool _has_bit(int index) const {
    return (_has_bits_[index / 32] & (1u << (index % 32))) != 0;
  }
  inline void _set_bit(int index) {
    _has_bits_[index / 32] |= (1u << (index % 32));
  }
  inline void _clear_bit(int index) {
    _has_bits_[index / 32] &= ~(1u << (index % 32));
  }
  
  void InitAsDefaultInstance();
  static CrafterData* default_instance_;
};
// -------------------------------------------------------------------

class CrafterSavedData : public ::google::protobuf::Message {
 public:
  CrafterSavedData();
  virtual ~CrafterSavedData();
  
  CrafterSavedData(const CrafterSavedData& from);
  
  inline CrafterSavedData& operator=(const CrafterSavedData& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const CrafterSavedData& default_instance();
  
  void Swap(CrafterSavedData* other);
  
  // implements Message ----------------------------------------------
  
  CrafterSavedData* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CrafterSavedData& from);
  void MergeFrom(const CrafterSavedData& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // repeated .D3.ItemCrafting.CrafterData crafter_data = 1;
  inline int crafter_data_size() const;
  inline void clear_crafter_data();
  static const int kCrafterDataFieldNumber = 1;
  inline const ::D3::ItemCrafting::CrafterData& crafter_data(int index) const;
  inline ::D3::ItemCrafting::CrafterData* mutable_crafter_data(int index);
  inline ::D3::ItemCrafting::CrafterData* add_crafter_data();
  inline const ::google::protobuf::RepeatedPtrField< ::D3::ItemCrafting::CrafterData >&
      crafter_data() const;
  inline ::google::protobuf::RepeatedPtrField< ::D3::ItemCrafting::CrafterData >*
      mutable_crafter_data();
  
  // @@protoc_insertion_point(class_scope:D3.ItemCrafting.CrafterSavedData)
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  ::google::protobuf::RepeatedPtrField< ::D3::ItemCrafting::CrafterData > crafter_data_;
  friend void  protobuf_AddDesc_ItemCrafting_2eproto();
  friend void protobuf_AssignDesc_ItemCrafting_2eproto();
  friend void protobuf_ShutdownFile_ItemCrafting_2eproto();
  
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];
  
  // WHY DOES & HAVE LOWER PRECEDENCE THAN != !?
  inline bool _has_bit(int index) const {
    return (_has_bits_[index / 32] & (1u << (index % 32))) != 0;
  }
  inline void _set_bit(int index) {
    _has_bits_[index / 32] |= (1u << (index % 32));
  }
  inline void _clear_bit(int index) {
    _has_bits_[index / 32] &= ~(1u << (index % 32));
  }
  
  void InitAsDefaultInstance();
  static CrafterSavedData* default_instance_;
};
// ===================================================================


// ===================================================================

// CrafterData

// repeated sfixed32 recipes = 1;
inline int CrafterData::recipes_size() const {
  return recipes_.size();
}
inline void CrafterData::clear_recipes() {
  recipes_.Clear();
}
inline ::google::protobuf::int32 CrafterData::recipes(int index) const {
  return recipes_.Get(index);
}
inline void CrafterData::set_recipes(int index, ::google::protobuf::int32 value) {
  recipes_.Set(index, value);
}
inline void CrafterData::add_recipes(::google::protobuf::int32 value) {
  recipes_.Add(value);
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
CrafterData::recipes() const {
  return recipes_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
CrafterData::mutable_recipes() {
  return &recipes_;
}

// repeated sfixed32 available_enchants = 2;
inline int CrafterData::available_enchants_size() const {
  return available_enchants_.size();
}
inline void CrafterData::clear_available_enchants() {
  available_enchants_.Clear();
}
inline ::google::protobuf::int32 CrafterData::available_enchants(int index) const {
  return available_enchants_.Get(index);
}
inline void CrafterData::set_available_enchants(int index, ::google::protobuf::int32 value) {
  available_enchants_.Set(index, value);
}
inline void CrafterData::add_available_enchants(::google::protobuf::int32 value) {
  available_enchants_.Add(value);
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
CrafterData::available_enchants() const {
  return available_enchants_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
CrafterData::mutable_available_enchants() {
  return &available_enchants_;
}

// required int32 level = 3;
inline bool CrafterData::has_level() const {
  return _has_bit(2);
}
inline void CrafterData::clear_level() {
  level_ = 0;
  _clear_bit(2);
}
inline ::google::protobuf::int32 CrafterData::level() const {
  return level_;
}
inline void CrafterData::set_level(::google::protobuf::int32 value) {
  _set_bit(2);
  level_ = value;
}

// required sfixed64 cooldown_end = 4;
inline bool CrafterData::has_cooldown_end() const {
  return _has_bit(3);
}
inline void CrafterData::clear_cooldown_end() {
  cooldown_end_ = GOOGLE_LONGLONG(0);
  _clear_bit(3);
}
inline ::google::protobuf::int64 CrafterData::cooldown_end() const {
  return cooldown_end_;
}
inline void CrafterData::set_cooldown_end(::google::protobuf::int64 value) {
  _set_bit(3);
  cooldown_end_ = value;
}

// -------------------------------------------------------------------

// CrafterSavedData

// repeated .D3.ItemCrafting.CrafterData crafter_data = 1;
inline int CrafterSavedData::crafter_data_size() const {
  return crafter_data_.size();
}
inline void CrafterSavedData::clear_crafter_data() {
  crafter_data_.Clear();
}
inline const ::D3::ItemCrafting::CrafterData& CrafterSavedData::crafter_data(int index) const {
  return crafter_data_.Get(index);
}
inline ::D3::ItemCrafting::CrafterData* CrafterSavedData::mutable_crafter_data(int index) {
  return crafter_data_.Mutable(index);
}
inline ::D3::ItemCrafting::CrafterData* CrafterSavedData::add_crafter_data() {
  return crafter_data_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::D3::ItemCrafting::CrafterData >&
CrafterSavedData::crafter_data() const {
  return crafter_data_;
}
inline ::google::protobuf::RepeatedPtrField< ::D3::ItemCrafting::CrafterData >*
CrafterSavedData::mutable_crafter_data() {
  return &crafter_data_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace ItemCrafting
}  // namespace D3

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_ItemCrafting_2eproto__INCLUDED
