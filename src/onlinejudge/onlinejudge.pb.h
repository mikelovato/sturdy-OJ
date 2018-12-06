// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: onlinejudge.proto

#ifndef PROTOBUF_INCLUDED_onlinejudge_2eproto
#define PROTOBUF_INCLUDED_onlinejudge_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_onlinejudge_2eproto 

namespace protobuf_onlinejudge_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[4];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_onlinejudge_2eproto
namespace onlinejudge {
class qName;
class qNameDefaultTypeInternal;
extern qNameDefaultTypeInternal _qName_default_instance_;
class qSubmit;
class qSubmitDefaultTypeInternal;
extern qSubmitDefaultTypeInternal _qSubmit_default_instance_;
class qUestion;
class qUestionDefaultTypeInternal;
extern qUestionDefaultTypeInternal _qUestion_default_instance_;
class replyResult;
class replyResultDefaultTypeInternal;
extern replyResultDefaultTypeInternal _replyResult_default_instance_;
}  // namespace onlinejudge
namespace google {
namespace protobuf {
template<> ::onlinejudge::qName* Arena::CreateMaybeMessage<::onlinejudge::qName>(Arena*);
template<> ::onlinejudge::qSubmit* Arena::CreateMaybeMessage<::onlinejudge::qSubmit>(Arena*);
template<> ::onlinejudge::qUestion* Arena::CreateMaybeMessage<::onlinejudge::qUestion>(Arena*);
template<> ::onlinejudge::replyResult* Arena::CreateMaybeMessage<::onlinejudge::replyResult>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace onlinejudge {

// ===================================================================

class qName : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:onlinejudge.qName) */ {
 public:
  qName();
  virtual ~qName();

  qName(const qName& from);

  inline qName& operator=(const qName& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  qName(qName&& from) noexcept
    : qName() {
    *this = ::std::move(from);
  }

  inline qName& operator=(qName&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const qName& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const qName* internal_default_instance() {
    return reinterpret_cast<const qName*>(
               &_qName_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(qName* other);
  friend void swap(qName& a, qName& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline qName* New() const final {
    return CreateMaybeMessage<qName>(NULL);
  }

  qName* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<qName>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const qName& from);
  void MergeFrom(const qName& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(qName* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string keyname = 1;
  void clear_keyname();
  static const int kKeynameFieldNumber = 1;
  const ::std::string& keyname() const;
  void set_keyname(const ::std::string& value);
  #if LANG_CXX11
  void set_keyname(::std::string&& value);
  #endif
  void set_keyname(const char* value);
  void set_keyname(const char* value, size_t size);
  ::std::string* mutable_keyname();
  ::std::string* release_keyname();
  void set_allocated_keyname(::std::string* keyname);

  // @@protoc_insertion_point(class_scope:onlinejudge.qName)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr keyname_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_onlinejudge_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class qUestion : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:onlinejudge.qUestion) */ {
 public:
  qUestion();
  virtual ~qUestion();

  qUestion(const qUestion& from);

  inline qUestion& operator=(const qUestion& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  qUestion(qUestion&& from) noexcept
    : qUestion() {
    *this = ::std::move(from);
  }

  inline qUestion& operator=(qUestion&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const qUestion& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const qUestion* internal_default_instance() {
    return reinterpret_cast<const qUestion*>(
               &_qUestion_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(qUestion* other);
  friend void swap(qUestion& a, qUestion& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline qUestion* New() const final {
    return CreateMaybeMessage<qUestion>(NULL);
  }

  qUestion* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<qUestion>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const qUestion& from);
  void MergeFrom(const qUestion& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(qUestion* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string message = 2;
  void clear_message();
  static const int kMessageFieldNumber = 2;
  const ::std::string& message() const;
  void set_message(const ::std::string& value);
  #if LANG_CXX11
  void set_message(::std::string&& value);
  #endif
  void set_message(const char* value);
  void set_message(const char* value, size_t size);
  ::std::string* mutable_message();
  ::std::string* release_message();
  void set_allocated_message(::std::string* message);

  // .onlinejudge.qName N = 1;
  bool has_n() const;
  void clear_n();
  static const int kNFieldNumber = 1;
  private:
  const ::onlinejudge::qName& _internal_n() const;
  public:
  const ::onlinejudge::qName& n() const;
  ::onlinejudge::qName* release_n();
  ::onlinejudge::qName* mutable_n();
  void set_allocated_n(::onlinejudge::qName* n);

  // @@protoc_insertion_point(class_scope:onlinejudge.qUestion)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr message_;
  ::onlinejudge::qName* n_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_onlinejudge_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class qSubmit : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:onlinejudge.qSubmit) */ {
 public:
  qSubmit();
  virtual ~qSubmit();

  qSubmit(const qSubmit& from);

  inline qSubmit& operator=(const qSubmit& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  qSubmit(qSubmit&& from) noexcept
    : qSubmit() {
    *this = ::std::move(from);
  }

  inline qSubmit& operator=(qSubmit&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const qSubmit& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const qSubmit* internal_default_instance() {
    return reinterpret_cast<const qSubmit*>(
               &_qSubmit_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  void Swap(qSubmit* other);
  friend void swap(qSubmit& a, qSubmit& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline qSubmit* New() const final {
    return CreateMaybeMessage<qSubmit>(NULL);
  }

  qSubmit* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<qSubmit>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const qSubmit& from);
  void MergeFrom(const qSubmit& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(qSubmit* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string qSubmitCode = 2;
  void clear_qsubmitcode();
  static const int kQSubmitCodeFieldNumber = 2;
  const ::std::string& qsubmitcode() const;
  void set_qsubmitcode(const ::std::string& value);
  #if LANG_CXX11
  void set_qsubmitcode(::std::string&& value);
  #endif
  void set_qsubmitcode(const char* value);
  void set_qsubmitcode(const char* value, size_t size);
  ::std::string* mutable_qsubmitcode();
  ::std::string* release_qsubmitcode();
  void set_allocated_qsubmitcode(::std::string* qsubmitcode);

  // .onlinejudge.qName N = 1;
  bool has_n() const;
  void clear_n();
  static const int kNFieldNumber = 1;
  private:
  const ::onlinejudge::qName& _internal_n() const;
  public:
  const ::onlinejudge::qName& n() const;
  ::onlinejudge::qName* release_n();
  ::onlinejudge::qName* mutable_n();
  void set_allocated_n(::onlinejudge::qName* n);

  // @@protoc_insertion_point(class_scope:onlinejudge.qSubmit)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr qsubmitcode_;
  ::onlinejudge::qName* n_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_onlinejudge_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class replyResult : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:onlinejudge.replyResult) */ {
 public:
  replyResult();
  virtual ~replyResult();

  replyResult(const replyResult& from);

  inline replyResult& operator=(const replyResult& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  replyResult(replyResult&& from) noexcept
    : replyResult() {
    *this = ::std::move(from);
  }

  inline replyResult& operator=(replyResult&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const replyResult& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const replyResult* internal_default_instance() {
    return reinterpret_cast<const replyResult*>(
               &_replyResult_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    3;

  void Swap(replyResult* other);
  friend void swap(replyResult& a, replyResult& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline replyResult* New() const final {
    return CreateMaybeMessage<replyResult>(NULL);
  }

  replyResult* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<replyResult>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const replyResult& from);
  void MergeFrom(const replyResult& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(replyResult* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string message = 1;
  void clear_message();
  static const int kMessageFieldNumber = 1;
  const ::std::string& message() const;
  void set_message(const ::std::string& value);
  #if LANG_CXX11
  void set_message(::std::string&& value);
  #endif
  void set_message(const char* value);
  void set_message(const char* value, size_t size);
  ::std::string* mutable_message();
  ::std::string* release_message();
  void set_allocated_message(::std::string* message);

  // @@protoc_insertion_point(class_scope:onlinejudge.replyResult)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr message_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_onlinejudge_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// qName

// string keyname = 1;
inline void qName::clear_keyname() {
  keyname_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& qName::keyname() const {
  // @@protoc_insertion_point(field_get:onlinejudge.qName.keyname)
  return keyname_.GetNoArena();
}
inline void qName::set_keyname(const ::std::string& value) {
  
  keyname_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:onlinejudge.qName.keyname)
}
#if LANG_CXX11
inline void qName::set_keyname(::std::string&& value) {
  
  keyname_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:onlinejudge.qName.keyname)
}
#endif
inline void qName::set_keyname(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  keyname_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:onlinejudge.qName.keyname)
}
inline void qName::set_keyname(const char* value, size_t size) {
  
  keyname_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:onlinejudge.qName.keyname)
}
inline ::std::string* qName::mutable_keyname() {
  
  // @@protoc_insertion_point(field_mutable:onlinejudge.qName.keyname)
  return keyname_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* qName::release_keyname() {
  // @@protoc_insertion_point(field_release:onlinejudge.qName.keyname)
  
  return keyname_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void qName::set_allocated_keyname(::std::string* keyname) {
  if (keyname != NULL) {
    
  } else {
    
  }
  keyname_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), keyname);
  // @@protoc_insertion_point(field_set_allocated:onlinejudge.qName.keyname)
}

// -------------------------------------------------------------------

// qUestion

// .onlinejudge.qName N = 1;
inline bool qUestion::has_n() const {
  return this != internal_default_instance() && n_ != NULL;
}
inline void qUestion::clear_n() {
  if (GetArenaNoVirtual() == NULL && n_ != NULL) {
    delete n_;
  }
  n_ = NULL;
}
inline const ::onlinejudge::qName& qUestion::_internal_n() const {
  return *n_;
}
inline const ::onlinejudge::qName& qUestion::n() const {
  const ::onlinejudge::qName* p = n_;
  // @@protoc_insertion_point(field_get:onlinejudge.qUestion.N)
  return p != NULL ? *p : *reinterpret_cast<const ::onlinejudge::qName*>(
      &::onlinejudge::_qName_default_instance_);
}
inline ::onlinejudge::qName* qUestion::release_n() {
  // @@protoc_insertion_point(field_release:onlinejudge.qUestion.N)
  
  ::onlinejudge::qName* temp = n_;
  n_ = NULL;
  return temp;
}
inline ::onlinejudge::qName* qUestion::mutable_n() {
  
  if (n_ == NULL) {
    auto* p = CreateMaybeMessage<::onlinejudge::qName>(GetArenaNoVirtual());
    n_ = p;
  }
  // @@protoc_insertion_point(field_mutable:onlinejudge.qUestion.N)
  return n_;
}
inline void qUestion::set_allocated_n(::onlinejudge::qName* n) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete n_;
  }
  if (n) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      n = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, n, submessage_arena);
    }
    
  } else {
    
  }
  n_ = n;
  // @@protoc_insertion_point(field_set_allocated:onlinejudge.qUestion.N)
}

// string message = 2;
inline void qUestion::clear_message() {
  message_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& qUestion::message() const {
  // @@protoc_insertion_point(field_get:onlinejudge.qUestion.message)
  return message_.GetNoArena();
}
inline void qUestion::set_message(const ::std::string& value) {
  
  message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:onlinejudge.qUestion.message)
}
#if LANG_CXX11
inline void qUestion::set_message(::std::string&& value) {
  
  message_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:onlinejudge.qUestion.message)
}
#endif
inline void qUestion::set_message(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:onlinejudge.qUestion.message)
}
inline void qUestion::set_message(const char* value, size_t size) {
  
  message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:onlinejudge.qUestion.message)
}
inline ::std::string* qUestion::mutable_message() {
  
  // @@protoc_insertion_point(field_mutable:onlinejudge.qUestion.message)
  return message_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* qUestion::release_message() {
  // @@protoc_insertion_point(field_release:onlinejudge.qUestion.message)
  
  return message_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void qUestion::set_allocated_message(::std::string* message) {
  if (message != NULL) {
    
  } else {
    
  }
  message_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), message);
  // @@protoc_insertion_point(field_set_allocated:onlinejudge.qUestion.message)
}

// -------------------------------------------------------------------

// qSubmit

// .onlinejudge.qName N = 1;
inline bool qSubmit::has_n() const {
  return this != internal_default_instance() && n_ != NULL;
}
inline void qSubmit::clear_n() {
  if (GetArenaNoVirtual() == NULL && n_ != NULL) {
    delete n_;
  }
  n_ = NULL;
}
inline const ::onlinejudge::qName& qSubmit::_internal_n() const {
  return *n_;
}
inline const ::onlinejudge::qName& qSubmit::n() const {
  const ::onlinejudge::qName* p = n_;
  // @@protoc_insertion_point(field_get:onlinejudge.qSubmit.N)
  return p != NULL ? *p : *reinterpret_cast<const ::onlinejudge::qName*>(
      &::onlinejudge::_qName_default_instance_);
}
inline ::onlinejudge::qName* qSubmit::release_n() {
  // @@protoc_insertion_point(field_release:onlinejudge.qSubmit.N)
  
  ::onlinejudge::qName* temp = n_;
  n_ = NULL;
  return temp;
}
inline ::onlinejudge::qName* qSubmit::mutable_n() {
  
  if (n_ == NULL) {
    auto* p = CreateMaybeMessage<::onlinejudge::qName>(GetArenaNoVirtual());
    n_ = p;
  }
  // @@protoc_insertion_point(field_mutable:onlinejudge.qSubmit.N)
  return n_;
}
inline void qSubmit::set_allocated_n(::onlinejudge::qName* n) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete n_;
  }
  if (n) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      n = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, n, submessage_arena);
    }
    
  } else {
    
  }
  n_ = n;
  // @@protoc_insertion_point(field_set_allocated:onlinejudge.qSubmit.N)
}

// string qSubmitCode = 2;
inline void qSubmit::clear_qsubmitcode() {
  qsubmitcode_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& qSubmit::qsubmitcode() const {
  // @@protoc_insertion_point(field_get:onlinejudge.qSubmit.qSubmitCode)
  return qsubmitcode_.GetNoArena();
}
inline void qSubmit::set_qsubmitcode(const ::std::string& value) {
  
  qsubmitcode_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:onlinejudge.qSubmit.qSubmitCode)
}
#if LANG_CXX11
inline void qSubmit::set_qsubmitcode(::std::string&& value) {
  
  qsubmitcode_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:onlinejudge.qSubmit.qSubmitCode)
}
#endif
inline void qSubmit::set_qsubmitcode(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  qsubmitcode_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:onlinejudge.qSubmit.qSubmitCode)
}
inline void qSubmit::set_qsubmitcode(const char* value, size_t size) {
  
  qsubmitcode_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:onlinejudge.qSubmit.qSubmitCode)
}
inline ::std::string* qSubmit::mutable_qsubmitcode() {
  
  // @@protoc_insertion_point(field_mutable:onlinejudge.qSubmit.qSubmitCode)
  return qsubmitcode_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* qSubmit::release_qsubmitcode() {
  // @@protoc_insertion_point(field_release:onlinejudge.qSubmit.qSubmitCode)
  
  return qsubmitcode_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void qSubmit::set_allocated_qsubmitcode(::std::string* qsubmitcode) {
  if (qsubmitcode != NULL) {
    
  } else {
    
  }
  qsubmitcode_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), qsubmitcode);
  // @@protoc_insertion_point(field_set_allocated:onlinejudge.qSubmit.qSubmitCode)
}

// -------------------------------------------------------------------

// replyResult

// string message = 1;
inline void replyResult::clear_message() {
  message_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& replyResult::message() const {
  // @@protoc_insertion_point(field_get:onlinejudge.replyResult.message)
  return message_.GetNoArena();
}
inline void replyResult::set_message(const ::std::string& value) {
  
  message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:onlinejudge.replyResult.message)
}
#if LANG_CXX11
inline void replyResult::set_message(::std::string&& value) {
  
  message_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:onlinejudge.replyResult.message)
}
#endif
inline void replyResult::set_message(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:onlinejudge.replyResult.message)
}
inline void replyResult::set_message(const char* value, size_t size) {
  
  message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:onlinejudge.replyResult.message)
}
inline ::std::string* replyResult::mutable_message() {
  
  // @@protoc_insertion_point(field_mutable:onlinejudge.replyResult.message)
  return message_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* replyResult::release_message() {
  // @@protoc_insertion_point(field_release:onlinejudge.replyResult.message)
  
  return message_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void replyResult::set_allocated_message(::std::string* message) {
  if (message != NULL) {
    
  } else {
    
  }
  message_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), message);
  // @@protoc_insertion_point(field_set_allocated:onlinejudge.replyResult.message)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace onlinejudge

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_onlinejudge_2eproto
