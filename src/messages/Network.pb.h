// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Network.proto

#ifndef PROTOBUF_Network_2eproto__INCLUDED
#define PROTOBUF_Network_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2004001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_message_reflection.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_Network_2eproto();
void protobuf_AssignDesc_Network_2eproto();
void protobuf_ShutdownFile_Network_2eproto();

class HostEntry;
class KnownHosts;
class Subscription;
class HostSubscriptions;

// ===================================================================

class HostEntry : public ::google::protobuf::Message {
 public:
  HostEntry();
  virtual ~HostEntry();
  
  HostEntry(const HostEntry& from);
  
  inline HostEntry& operator=(const HostEntry& from) {
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
  static const HostEntry& default_instance();
  
  void Swap(HostEntry* other);
  
  // implements Message ----------------------------------------------
  
  HostEntry* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const HostEntry& from);
  void MergeFrom(const HostEntry& from);
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
  
  // required uint32 hostid = 1;
  inline bool has_hostid() const;
  inline void clear_hostid();
  static const int kHostidFieldNumber = 1;
  inline ::google::protobuf::uint32 hostid() const;
  inline void set_hostid(::google::protobuf::uint32 value);
  
  // required string hostname = 2;
  inline bool has_hostname() const;
  inline void clear_hostname();
  static const int kHostnameFieldNumber = 2;
  inline const ::std::string& hostname() const;
  inline void set_hostname(const ::std::string& value);
  inline void set_hostname(const char* value);
  inline void set_hostname(const char* value, size_t size);
  inline ::std::string* mutable_hostname();
  inline ::std::string* release_hostname();
  
  // @@protoc_insertion_point(class_scope:HostEntry)
 private:
  inline void set_has_hostid();
  inline void clear_has_hostid();
  inline void set_has_hostname();
  inline void clear_has_hostname();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::std::string* hostname_;
  ::google::protobuf::uint32 hostid_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];
  
  friend void  protobuf_AddDesc_Network_2eproto();
  friend void protobuf_AssignDesc_Network_2eproto();
  friend void protobuf_ShutdownFile_Network_2eproto();
  
  void InitAsDefaultInstance();
  static HostEntry* default_instance_;
};
// -------------------------------------------------------------------

class KnownHosts : public ::google::protobuf::Message {
 public:
  KnownHosts();
  virtual ~KnownHosts();
  
  KnownHosts(const KnownHosts& from);
  
  inline KnownHosts& operator=(const KnownHosts& from) {
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
  static const KnownHosts& default_instance();
  
  void Swap(KnownHosts* other);
  
  // implements Message ----------------------------------------------
  
  KnownHosts* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const KnownHosts& from);
  void MergeFrom(const KnownHosts& from);
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
  
  // repeated .HostEntry entrylist = 1;
  inline int entrylist_size() const;
  inline void clear_entrylist();
  static const int kEntrylistFieldNumber = 1;
  inline const ::HostEntry& entrylist(int index) const;
  inline ::HostEntry* mutable_entrylist(int index);
  inline ::HostEntry* add_entrylist();
  inline const ::google::protobuf::RepeatedPtrField< ::HostEntry >&
      entrylist() const;
  inline ::google::protobuf::RepeatedPtrField< ::HostEntry >*
      mutable_entrylist();
  
  // @@protoc_insertion_point(class_scope:KnownHosts)
 private:
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::google::protobuf::RepeatedPtrField< ::HostEntry > entrylist_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];
  
  friend void  protobuf_AddDesc_Network_2eproto();
  friend void protobuf_AssignDesc_Network_2eproto();
  friend void protobuf_ShutdownFile_Network_2eproto();
  
  void InitAsDefaultInstance();
  static KnownHosts* default_instance_;
};
// -------------------------------------------------------------------

class Subscription : public ::google::protobuf::Message {
 public:
  Subscription();
  virtual ~Subscription();
  
  Subscription(const Subscription& from);
  
  inline Subscription& operator=(const Subscription& from) {
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
  static const Subscription& default_instance();
  
  void Swap(Subscription* other);
  
  // implements Message ----------------------------------------------
  
  Subscription* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Subscription& from);
  void MergeFrom(const Subscription& from);
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
  
  // required uint32 host = 1;
  inline bool has_host() const;
  inline void clear_host();
  static const int kHostFieldNumber = 1;
  inline ::google::protobuf::uint32 host() const;
  inline void set_host(::google::protobuf::uint32 value);
  
  // required uint32 topicid = 2;
  inline bool has_topicid() const;
  inline void clear_topicid();
  static const int kTopicidFieldNumber = 2;
  inline ::google::protobuf::uint32 topicid() const;
  inline void set_topicid(::google::protobuf::uint32 value);
  
  // @@protoc_insertion_point(class_scope:Subscription)
 private:
  inline void set_has_host();
  inline void clear_has_host();
  inline void set_has_topicid();
  inline void clear_has_topicid();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::google::protobuf::uint32 host_;
  ::google::protobuf::uint32 topicid_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];
  
  friend void  protobuf_AddDesc_Network_2eproto();
  friend void protobuf_AssignDesc_Network_2eproto();
  friend void protobuf_ShutdownFile_Network_2eproto();
  
  void InitAsDefaultInstance();
  static Subscription* default_instance_;
};
// -------------------------------------------------------------------

class HostSubscriptions : public ::google::protobuf::Message {
 public:
  HostSubscriptions();
  virtual ~HostSubscriptions();
  
  HostSubscriptions(const HostSubscriptions& from);
  
  inline HostSubscriptions& operator=(const HostSubscriptions& from) {
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
  static const HostSubscriptions& default_instance();
  
  void Swap(HostSubscriptions* other);
  
  // implements Message ----------------------------------------------
  
  HostSubscriptions* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const HostSubscriptions& from);
  void MergeFrom(const HostSubscriptions& from);
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
  
  // repeated .Subscription topics = 1;
  inline int topics_size() const;
  inline void clear_topics();
  static const int kTopicsFieldNumber = 1;
  inline const ::Subscription& topics(int index) const;
  inline ::Subscription* mutable_topics(int index);
  inline ::Subscription* add_topics();
  inline const ::google::protobuf::RepeatedPtrField< ::Subscription >&
      topics() const;
  inline ::google::protobuf::RepeatedPtrField< ::Subscription >*
      mutable_topics();
  
  // required string hostname = 2;
  inline bool has_hostname() const;
  inline void clear_hostname();
  static const int kHostnameFieldNumber = 2;
  inline const ::std::string& hostname() const;
  inline void set_hostname(const ::std::string& value);
  inline void set_hostname(const char* value);
  inline void set_hostname(const char* value, size_t size);
  inline ::std::string* mutable_hostname();
  inline ::std::string* release_hostname();
  
  // @@protoc_insertion_point(class_scope:HostSubscriptions)
 private:
  inline void set_has_hostname();
  inline void clear_has_hostname();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::google::protobuf::RepeatedPtrField< ::Subscription > topics_;
  ::std::string* hostname_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];
  
  friend void  protobuf_AddDesc_Network_2eproto();
  friend void protobuf_AssignDesc_Network_2eproto();
  friend void protobuf_ShutdownFile_Network_2eproto();
  
  void InitAsDefaultInstance();
  static HostSubscriptions* default_instance_;
};
// ===================================================================


// ===================================================================

// HostEntry

// required uint32 hostid = 1;
inline bool HostEntry::has_hostid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void HostEntry::set_has_hostid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void HostEntry::clear_has_hostid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void HostEntry::clear_hostid() {
  hostid_ = 0u;
  clear_has_hostid();
}
inline ::google::protobuf::uint32 HostEntry::hostid() const {
  return hostid_;
}
inline void HostEntry::set_hostid(::google::protobuf::uint32 value) {
  set_has_hostid();
  hostid_ = value;
}

// required string hostname = 2;
inline bool HostEntry::has_hostname() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void HostEntry::set_has_hostname() {
  _has_bits_[0] |= 0x00000002u;
}
inline void HostEntry::clear_has_hostname() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void HostEntry::clear_hostname() {
  if (hostname_ != &::google::protobuf::internal::kEmptyString) {
    hostname_->clear();
  }
  clear_has_hostname();
}
inline const ::std::string& HostEntry::hostname() const {
  return *hostname_;
}
inline void HostEntry::set_hostname(const ::std::string& value) {
  set_has_hostname();
  if (hostname_ == &::google::protobuf::internal::kEmptyString) {
    hostname_ = new ::std::string;
  }
  hostname_->assign(value);
}
inline void HostEntry::set_hostname(const char* value) {
  set_has_hostname();
  if (hostname_ == &::google::protobuf::internal::kEmptyString) {
    hostname_ = new ::std::string;
  }
  hostname_->assign(value);
}
inline void HostEntry::set_hostname(const char* value, size_t size) {
  set_has_hostname();
  if (hostname_ == &::google::protobuf::internal::kEmptyString) {
    hostname_ = new ::std::string;
  }
  hostname_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* HostEntry::mutable_hostname() {
  set_has_hostname();
  if (hostname_ == &::google::protobuf::internal::kEmptyString) {
    hostname_ = new ::std::string;
  }
  return hostname_;
}
inline ::std::string* HostEntry::release_hostname() {
  clear_has_hostname();
  if (hostname_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = hostname_;
    hostname_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// -------------------------------------------------------------------

// KnownHosts

// repeated .HostEntry entrylist = 1;
inline int KnownHosts::entrylist_size() const {
  return entrylist_.size();
}
inline void KnownHosts::clear_entrylist() {
  entrylist_.Clear();
}
inline const ::HostEntry& KnownHosts::entrylist(int index) const {
  return entrylist_.Get(index);
}
inline ::HostEntry* KnownHosts::mutable_entrylist(int index) {
  return entrylist_.Mutable(index);
}
inline ::HostEntry* KnownHosts::add_entrylist() {
  return entrylist_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::HostEntry >&
KnownHosts::entrylist() const {
  return entrylist_;
}
inline ::google::protobuf::RepeatedPtrField< ::HostEntry >*
KnownHosts::mutable_entrylist() {
  return &entrylist_;
}

// -------------------------------------------------------------------

// Subscription

// required uint32 host = 1;
inline bool Subscription::has_host() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Subscription::set_has_host() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Subscription::clear_has_host() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Subscription::clear_host() {
  host_ = 0u;
  clear_has_host();
}
inline ::google::protobuf::uint32 Subscription::host() const {
  return host_;
}
inline void Subscription::set_host(::google::protobuf::uint32 value) {
  set_has_host();
  host_ = value;
}

// required uint32 topicid = 2;
inline bool Subscription::has_topicid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Subscription::set_has_topicid() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Subscription::clear_has_topicid() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Subscription::clear_topicid() {
  topicid_ = 0u;
  clear_has_topicid();
}
inline ::google::protobuf::uint32 Subscription::topicid() const {
  return topicid_;
}
inline void Subscription::set_topicid(::google::protobuf::uint32 value) {
  set_has_topicid();
  topicid_ = value;
}

// -------------------------------------------------------------------

// HostSubscriptions

// repeated .Subscription topics = 1;
inline int HostSubscriptions::topics_size() const {
  return topics_.size();
}
inline void HostSubscriptions::clear_topics() {
  topics_.Clear();
}
inline const ::Subscription& HostSubscriptions::topics(int index) const {
  return topics_.Get(index);
}
inline ::Subscription* HostSubscriptions::mutable_topics(int index) {
  return topics_.Mutable(index);
}
inline ::Subscription* HostSubscriptions::add_topics() {
  return topics_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::Subscription >&
HostSubscriptions::topics() const {
  return topics_;
}
inline ::google::protobuf::RepeatedPtrField< ::Subscription >*
HostSubscriptions::mutable_topics() {
  return &topics_;
}

// required string hostname = 2;
inline bool HostSubscriptions::has_hostname() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void HostSubscriptions::set_has_hostname() {
  _has_bits_[0] |= 0x00000002u;
}
inline void HostSubscriptions::clear_has_hostname() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void HostSubscriptions::clear_hostname() {
  if (hostname_ != &::google::protobuf::internal::kEmptyString) {
    hostname_->clear();
  }
  clear_has_hostname();
}
inline const ::std::string& HostSubscriptions::hostname() const {
  return *hostname_;
}
inline void HostSubscriptions::set_hostname(const ::std::string& value) {
  set_has_hostname();
  if (hostname_ == &::google::protobuf::internal::kEmptyString) {
    hostname_ = new ::std::string;
  }
  hostname_->assign(value);
}
inline void HostSubscriptions::set_hostname(const char* value) {
  set_has_hostname();
  if (hostname_ == &::google::protobuf::internal::kEmptyString) {
    hostname_ = new ::std::string;
  }
  hostname_->assign(value);
}
inline void HostSubscriptions::set_hostname(const char* value, size_t size) {
  set_has_hostname();
  if (hostname_ == &::google::protobuf::internal::kEmptyString) {
    hostname_ = new ::std::string;
  }
  hostname_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* HostSubscriptions::mutable_hostname() {
  set_has_hostname();
  if (hostname_ == &::google::protobuf::internal::kEmptyString) {
    hostname_ = new ::std::string;
  }
  return hostname_;
}
inline ::std::string* HostSubscriptions::release_hostname() {
  clear_has_hostname();
  if (hostname_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = hostname_;
    hostname_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_Network_2eproto__INCLUDED
