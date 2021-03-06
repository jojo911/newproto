// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: im.hello.proto

#ifndef PROTOBUF_im_2ehello_2eproto__INCLUDED
#define PROTOBUF_im_2ehello_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace im {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_im_2ehello_2eproto();
void protobuf_AssignDesc_im_2ehello_2eproto();
void protobuf_ShutdownFile_im_2ehello_2eproto();

class hello;
class all;

enum status {
  suc = 101,
  fail = 102
};
bool status_IsValid(int value);
const status status_MIN = suc;
const status status_MAX = fail;
const int status_ARRAYSIZE = status_MAX + 1;

const ::google::protobuf::EnumDescriptor* status_descriptor();
inline const ::std::string& status_Name(status value) {
  return ::google::protobuf::internal::NameOfEnum(
    status_descriptor(), value);
}
inline bool status_Parse(
    const ::std::string& name, status* value) {
  return ::google::protobuf::internal::ParseNamedEnum<status>(
    status_descriptor(), name, value);
}
// ===================================================================

class hello : public ::google::protobuf::Message {
 public:
  hello();
  virtual ~hello();

  hello(const hello& from);

  inline hello& operator=(const hello& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const hello& default_instance();

  void Swap(hello* other);

  // implements Message ----------------------------------------------

  inline hello* New() const { return New(NULL); }

  hello* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const hello& from);
  void MergeFrom(const hello& from);
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
  void InternalSwap(hello* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int32 id = 1;
  bool has_id() const;
  void clear_id();
  static const int kIdFieldNumber = 1;
  ::google::protobuf::int32 id() const;
  void set_id(::google::protobuf::int32 value);

  // required string str = 2;
  bool has_str() const;
  void clear_str();
  static const int kStrFieldNumber = 2;
  const ::std::string& str() const;
  void set_str(const ::std::string& value);
  void set_str(const char* value);
  void set_str(const char* value, size_t size);
  ::std::string* mutable_str();
  ::std::string* release_str();
  void set_allocated_str(::std::string* str);

  // optional .im.status value = 3;
  bool has_value() const;
  void clear_value();
  static const int kValueFieldNumber = 3;
  ::im::status value() const;
  void set_value(::im::status value);

  // @@protoc_insertion_point(class_scope:im.hello)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_str();
  inline void clear_has_str();
  inline void set_has_value();
  inline void clear_has_value();

  // helper for ByteSize()
  int RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr str_;
  ::google::protobuf::int32 id_;
  int value_;
  friend void  protobuf_AddDesc_im_2ehello_2eproto();
  friend void protobuf_AssignDesc_im_2ehello_2eproto();
  friend void protobuf_ShutdownFile_im_2ehello_2eproto();

  void InitAsDefaultInstance();
  static hello* default_instance_;
};
// -------------------------------------------------------------------

class all : public ::google::protobuf::Message {
 public:
  all();
  virtual ~all();

  all(const all& from);

  inline all& operator=(const all& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const all& default_instance();

  void Swap(all* other);

  // implements Message ----------------------------------------------

  inline all* New() const { return New(NULL); }

  all* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const all& from);
  void MergeFrom(const all& from);
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
  void InternalSwap(all* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int32 id = 1;
  bool has_id() const;
  void clear_id();
  static const int kIdFieldNumber = 1;
  ::google::protobuf::int32 id() const;
  void set_id(::google::protobuf::int32 value);

  // required .im.hello t = 2;
  bool has_t() const;
  void clear_t();
  static const int kTFieldNumber = 2;
  const ::im::hello& t() const;
  ::im::hello* mutable_t();
  ::im::hello* release_t();
  void set_allocated_t(::im::hello* t);

  // @@protoc_insertion_point(class_scope:im.all)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_t();
  inline void clear_has_t();

  // helper for ByteSize()
  int RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::im::hello* t_;
  ::google::protobuf::int32 id_;
  friend void  protobuf_AddDesc_im_2ehello_2eproto();
  friend void protobuf_AssignDesc_im_2ehello_2eproto();
  friend void protobuf_ShutdownFile_im_2ehello_2eproto();

  void InitAsDefaultInstance();
  static all* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// hello

// required int32 id = 1;
inline bool hello::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void hello::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void hello::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void hello::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 hello::id() const {
  // @@protoc_insertion_point(field_get:im.hello.id)
  return id_;
}
inline void hello::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
  // @@protoc_insertion_point(field_set:im.hello.id)
}

// required string str = 2;
inline bool hello::has_str() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void hello::set_has_str() {
  _has_bits_[0] |= 0x00000002u;
}
inline void hello::clear_has_str() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void hello::clear_str() {
  str_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_str();
}
inline const ::std::string& hello::str() const {
  // @@protoc_insertion_point(field_get:im.hello.str)
  return str_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void hello::set_str(const ::std::string& value) {
  set_has_str();
  str_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:im.hello.str)
}
inline void hello::set_str(const char* value) {
  set_has_str();
  str_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:im.hello.str)
}
inline void hello::set_str(const char* value, size_t size) {
  set_has_str();
  str_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:im.hello.str)
}
inline ::std::string* hello::mutable_str() {
  set_has_str();
  // @@protoc_insertion_point(field_mutable:im.hello.str)
  return str_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* hello::release_str() {
  clear_has_str();
  return str_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void hello::set_allocated_str(::std::string* str) {
  if (str != NULL) {
    set_has_str();
  } else {
    clear_has_str();
  }
  str_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), str);
  // @@protoc_insertion_point(field_set_allocated:im.hello.str)
}

// optional .im.status value = 3;
inline bool hello::has_value() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void hello::set_has_value() {
  _has_bits_[0] |= 0x00000004u;
}
inline void hello::clear_has_value() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void hello::clear_value() {
  value_ = 101;
  clear_has_value();
}
inline ::im::status hello::value() const {
  // @@protoc_insertion_point(field_get:im.hello.value)
  return static_cast< ::im::status >(value_);
}
inline void hello::set_value(::im::status value) {
  assert(::im::status_IsValid(value));
  set_has_value();
  value_ = value;
  // @@protoc_insertion_point(field_set:im.hello.value)
}

// -------------------------------------------------------------------

// all

// required int32 id = 1;
inline bool all::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void all::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void all::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void all::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 all::id() const {
  // @@protoc_insertion_point(field_get:im.all.id)
  return id_;
}
inline void all::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
  // @@protoc_insertion_point(field_set:im.all.id)
}

// required .im.hello t = 2;
inline bool all::has_t() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void all::set_has_t() {
  _has_bits_[0] |= 0x00000002u;
}
inline void all::clear_has_t() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void all::clear_t() {
  if (t_ != NULL) t_->::im::hello::Clear();
  clear_has_t();
}
inline const ::im::hello& all::t() const {
  // @@protoc_insertion_point(field_get:im.all.t)
  return t_ != NULL ? *t_ : *default_instance_->t_;
}
inline ::im::hello* all::mutable_t() {
  set_has_t();
  if (t_ == NULL) {
    t_ = new ::im::hello;
  }
  // @@protoc_insertion_point(field_mutable:im.all.t)
  return t_;
}
inline ::im::hello* all::release_t() {
  clear_has_t();
  ::im::hello* temp = t_;
  t_ = NULL;
  return temp;
}
inline void all::set_allocated_t(::im::hello* t) {
  delete t_;
  t_ = t;
  if (t) {
    set_has_t();
  } else {
    clear_has_t();
  }
  // @@protoc_insertion_point(field_set_allocated:im.all.t)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace im

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::im::status> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::im::status>() {
  return ::im::status_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_im_2ehello_2eproto__INCLUDED
