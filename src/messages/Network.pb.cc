// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "Network.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace {

const ::google::protobuf::Descriptor* HostEntry_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  HostEntry_reflection_ = NULL;
const ::google::protobuf::Descriptor* KnownHosts_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  KnownHosts_reflection_ = NULL;
const ::google::protobuf::Descriptor* Subscription_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Subscription_reflection_ = NULL;
const ::google::protobuf::Descriptor* HostSubscriptions_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  HostSubscriptions_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_Network_2eproto() {
  protobuf_AddDesc_Network_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "Network.proto");
  GOOGLE_CHECK(file != NULL);
  HostEntry_descriptor_ = file->message_type(0);
  static const int HostEntry_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HostEntry, hostid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HostEntry, hostname_),
  };
  HostEntry_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      HostEntry_descriptor_,
      HostEntry::default_instance_,
      HostEntry_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HostEntry, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HostEntry, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(HostEntry));
  KnownHosts_descriptor_ = file->message_type(1);
  static const int KnownHosts_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(KnownHosts, entrylist_),
  };
  KnownHosts_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      KnownHosts_descriptor_,
      KnownHosts::default_instance_,
      KnownHosts_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(KnownHosts, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(KnownHosts, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(KnownHosts));
  Subscription_descriptor_ = file->message_type(2);
  static const int Subscription_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Subscription, host_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Subscription, topicid_),
  };
  Subscription_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Subscription_descriptor_,
      Subscription::default_instance_,
      Subscription_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Subscription, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Subscription, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Subscription));
  HostSubscriptions_descriptor_ = file->message_type(3);
  static const int HostSubscriptions_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HostSubscriptions, topics_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HostSubscriptions, hostname_),
  };
  HostSubscriptions_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      HostSubscriptions_descriptor_,
      HostSubscriptions::default_instance_,
      HostSubscriptions_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HostSubscriptions, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HostSubscriptions, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(HostSubscriptions));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_Network_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    HostEntry_descriptor_, &HostEntry::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    KnownHosts_descriptor_, &KnownHosts::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Subscription_descriptor_, &Subscription::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    HostSubscriptions_descriptor_, &HostSubscriptions::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_Network_2eproto() {
  delete HostEntry::default_instance_;
  delete HostEntry_reflection_;
  delete KnownHosts::default_instance_;
  delete KnownHosts_reflection_;
  delete Subscription::default_instance_;
  delete Subscription_reflection_;
  delete HostSubscriptions::default_instance_;
  delete HostSubscriptions_reflection_;
}

void protobuf_AddDesc_Network_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\rNetwork.proto\"-\n\tHostEntry\022\016\n\006hostid\030\001"
    " \002(\r\022\020\n\010hostname\030\002 \002(\t\"+\n\nKnownHosts\022\035\n\t"
    "entrylist\030\001 \003(\0132\n.HostEntry\"-\n\014Subscript"
    "ion\022\014\n\004host\030\001 \002(\r\022\017\n\007topicid\030\002 \002(\r\"D\n\021Ho"
    "stSubscriptions\022\035\n\006topics\030\001 \003(\0132\r.Subscr"
    "iption\022\020\n\010hostname\030\002 \002(\t", 224);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "Network.proto", &protobuf_RegisterTypes);
  HostEntry::default_instance_ = new HostEntry();
  KnownHosts::default_instance_ = new KnownHosts();
  Subscription::default_instance_ = new Subscription();
  HostSubscriptions::default_instance_ = new HostSubscriptions();
  HostEntry::default_instance_->InitAsDefaultInstance();
  KnownHosts::default_instance_->InitAsDefaultInstance();
  Subscription::default_instance_->InitAsDefaultInstance();
  HostSubscriptions::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_Network_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_Network_2eproto {
  StaticDescriptorInitializer_Network_2eproto() {
    protobuf_AddDesc_Network_2eproto();
  }
} static_descriptor_initializer_Network_2eproto_;


// ===================================================================

#ifndef _MSC_VER
const int HostEntry::kHostidFieldNumber;
const int HostEntry::kHostnameFieldNumber;
#endif  // !_MSC_VER

HostEntry::HostEntry()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void HostEntry::InitAsDefaultInstance() {
}

HostEntry::HostEntry(const HostEntry& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void HostEntry::SharedCtor() {
  _cached_size_ = 0;
  hostid_ = 0u;
  hostname_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

HostEntry::~HostEntry() {
  SharedDtor();
}

void HostEntry::SharedDtor() {
  if (hostname_ != &::google::protobuf::internal::kEmptyString) {
    delete hostname_;
  }
  if (this != default_instance_) {
  }
}

void HostEntry::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* HostEntry::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return HostEntry_descriptor_;
}

const HostEntry& HostEntry::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_Network_2eproto();  return *default_instance_;
}

HostEntry* HostEntry::default_instance_ = NULL;

HostEntry* HostEntry::New() const {
  return new HostEntry;
}

void HostEntry::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    hostid_ = 0u;
    if (has_hostname()) {
      if (hostname_ != &::google::protobuf::internal::kEmptyString) {
        hostname_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool HostEntry::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 hostid = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &hostid_)));
          set_has_hostid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_hostname;
        break;
      }
      
      // required string hostname = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_hostname:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_hostname()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->hostname().data(), this->hostname().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void HostEntry::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint32 hostid = 1;
  if (has_hostid()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->hostid(), output);
  }
  
  // required string hostname = 2;
  if (has_hostname()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->hostname().data(), this->hostname().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->hostname(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* HostEntry::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required uint32 hostid = 1;
  if (has_hostid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->hostid(), target);
  }
  
  // required string hostname = 2;
  if (has_hostname()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->hostname().data(), this->hostname().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->hostname(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int HostEntry::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 hostid = 1;
    if (has_hostid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->hostid());
    }
    
    // required string hostname = 2;
    if (has_hostname()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->hostname());
    }
    
  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void HostEntry::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const HostEntry* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const HostEntry*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void HostEntry::MergeFrom(const HostEntry& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_hostid()) {
      set_hostid(from.hostid());
    }
    if (from.has_hostname()) {
      set_hostname(from.hostname());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void HostEntry::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void HostEntry::CopyFrom(const HostEntry& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool HostEntry::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;
  
  return true;
}

void HostEntry::Swap(HostEntry* other) {
  if (other != this) {
    std::swap(hostid_, other->hostid_);
    std::swap(hostname_, other->hostname_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata HostEntry::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = HostEntry_descriptor_;
  metadata.reflection = HostEntry_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int KnownHosts::kEntrylistFieldNumber;
#endif  // !_MSC_VER

KnownHosts::KnownHosts()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void KnownHosts::InitAsDefaultInstance() {
}

KnownHosts::KnownHosts(const KnownHosts& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void KnownHosts::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

KnownHosts::~KnownHosts() {
  SharedDtor();
}

void KnownHosts::SharedDtor() {
  if (this != default_instance_) {
  }
}

void KnownHosts::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* KnownHosts::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return KnownHosts_descriptor_;
}

const KnownHosts& KnownHosts::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_Network_2eproto();  return *default_instance_;
}

KnownHosts* KnownHosts::default_instance_ = NULL;

KnownHosts* KnownHosts::New() const {
  return new KnownHosts;
}

void KnownHosts::Clear() {
  entrylist_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool KnownHosts::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .HostEntry entrylist = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_entrylist:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_entrylist()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(10)) goto parse_entrylist;
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void KnownHosts::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated .HostEntry entrylist = 1;
  for (int i = 0; i < this->entrylist_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->entrylist(i), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* KnownHosts::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // repeated .HostEntry entrylist = 1;
  for (int i = 0; i < this->entrylist_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->entrylist(i), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int KnownHosts::ByteSize() const {
  int total_size = 0;
  
  // repeated .HostEntry entrylist = 1;
  total_size += 1 * this->entrylist_size();
  for (int i = 0; i < this->entrylist_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->entrylist(i));
  }
  
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void KnownHosts::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const KnownHosts* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const KnownHosts*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void KnownHosts::MergeFrom(const KnownHosts& from) {
  GOOGLE_CHECK_NE(&from, this);
  entrylist_.MergeFrom(from.entrylist_);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void KnownHosts::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void KnownHosts::CopyFrom(const KnownHosts& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool KnownHosts::IsInitialized() const {
  
  for (int i = 0; i < entrylist_size(); i++) {
    if (!this->entrylist(i).IsInitialized()) return false;
  }
  return true;
}

void KnownHosts::Swap(KnownHosts* other) {
  if (other != this) {
    entrylist_.Swap(&other->entrylist_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata KnownHosts::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = KnownHosts_descriptor_;
  metadata.reflection = KnownHosts_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int Subscription::kHostFieldNumber;
const int Subscription::kTopicidFieldNumber;
#endif  // !_MSC_VER

Subscription::Subscription()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void Subscription::InitAsDefaultInstance() {
}

Subscription::Subscription(const Subscription& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void Subscription::SharedCtor() {
  _cached_size_ = 0;
  host_ = 0u;
  topicid_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Subscription::~Subscription() {
  SharedDtor();
}

void Subscription::SharedDtor() {
  if (this != default_instance_) {
  }
}

void Subscription::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Subscription::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Subscription_descriptor_;
}

const Subscription& Subscription::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_Network_2eproto();  return *default_instance_;
}

Subscription* Subscription::default_instance_ = NULL;

Subscription* Subscription::New() const {
  return new Subscription;
}

void Subscription::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    host_ = 0u;
    topicid_ = 0u;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Subscription::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 host = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &host_)));
          set_has_host();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_topicid;
        break;
      }
      
      // required uint32 topicid = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_topicid:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &topicid_)));
          set_has_topicid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void Subscription::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint32 host = 1;
  if (has_host()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->host(), output);
  }
  
  // required uint32 topicid = 2;
  if (has_topicid()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->topicid(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* Subscription::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required uint32 host = 1;
  if (has_host()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->host(), target);
  }
  
  // required uint32 topicid = 2;
  if (has_topicid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->topicid(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int Subscription::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 host = 1;
    if (has_host()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->host());
    }
    
    // required uint32 topicid = 2;
    if (has_topicid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->topicid());
    }
    
  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Subscription::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Subscription* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Subscription*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Subscription::MergeFrom(const Subscription& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_host()) {
      set_host(from.host());
    }
    if (from.has_topicid()) {
      set_topicid(from.topicid());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Subscription::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Subscription::CopyFrom(const Subscription& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Subscription::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;
  
  return true;
}

void Subscription::Swap(Subscription* other) {
  if (other != this) {
    std::swap(host_, other->host_);
    std::swap(topicid_, other->topicid_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Subscription::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Subscription_descriptor_;
  metadata.reflection = Subscription_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int HostSubscriptions::kTopicsFieldNumber;
const int HostSubscriptions::kHostnameFieldNumber;
#endif  // !_MSC_VER

HostSubscriptions::HostSubscriptions()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void HostSubscriptions::InitAsDefaultInstance() {
}

HostSubscriptions::HostSubscriptions(const HostSubscriptions& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void HostSubscriptions::SharedCtor() {
  _cached_size_ = 0;
  hostname_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

HostSubscriptions::~HostSubscriptions() {
  SharedDtor();
}

void HostSubscriptions::SharedDtor() {
  if (hostname_ != &::google::protobuf::internal::kEmptyString) {
    delete hostname_;
  }
  if (this != default_instance_) {
  }
}

void HostSubscriptions::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* HostSubscriptions::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return HostSubscriptions_descriptor_;
}

const HostSubscriptions& HostSubscriptions::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_Network_2eproto();  return *default_instance_;
}

HostSubscriptions* HostSubscriptions::default_instance_ = NULL;

HostSubscriptions* HostSubscriptions::New() const {
  return new HostSubscriptions;
}

void HostSubscriptions::Clear() {
  if (_has_bits_[1 / 32] & (0xffu << (1 % 32))) {
    if (has_hostname()) {
      if (hostname_ != &::google::protobuf::internal::kEmptyString) {
        hostname_->clear();
      }
    }
  }
  topics_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool HostSubscriptions::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .Subscription topics = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_topics:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_topics()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(10)) goto parse_topics;
        if (input->ExpectTag(18)) goto parse_hostname;
        break;
      }
      
      // required string hostname = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_hostname:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_hostname()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->hostname().data(), this->hostname().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void HostSubscriptions::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated .Subscription topics = 1;
  for (int i = 0; i < this->topics_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->topics(i), output);
  }
  
  // required string hostname = 2;
  if (has_hostname()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->hostname().data(), this->hostname().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->hostname(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* HostSubscriptions::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // repeated .Subscription topics = 1;
  for (int i = 0; i < this->topics_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->topics(i), target);
  }
  
  // required string hostname = 2;
  if (has_hostname()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->hostname().data(), this->hostname().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->hostname(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int HostSubscriptions::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[1 / 32] & (0xffu << (1 % 32))) {
    // required string hostname = 2;
    if (has_hostname()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->hostname());
    }
    
  }
  // repeated .Subscription topics = 1;
  total_size += 1 * this->topics_size();
  for (int i = 0; i < this->topics_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->topics(i));
  }
  
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void HostSubscriptions::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const HostSubscriptions* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const HostSubscriptions*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void HostSubscriptions::MergeFrom(const HostSubscriptions& from) {
  GOOGLE_CHECK_NE(&from, this);
  topics_.MergeFrom(from.topics_);
  if (from._has_bits_[1 / 32] & (0xffu << (1 % 32))) {
    if (from.has_hostname()) {
      set_hostname(from.hostname());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void HostSubscriptions::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void HostSubscriptions::CopyFrom(const HostSubscriptions& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool HostSubscriptions::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000002) != 0x00000002) return false;
  
  for (int i = 0; i < topics_size(); i++) {
    if (!this->topics(i).IsInitialized()) return false;
  }
  return true;
}

void HostSubscriptions::Swap(HostSubscriptions* other) {
  if (other != this) {
    topics_.Swap(&other->topics_);
    std::swap(hostname_, other->hostname_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata HostSubscriptions::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = HostSubscriptions_descriptor_;
  metadata.reflection = HostSubscriptions_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
