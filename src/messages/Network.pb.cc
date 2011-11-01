// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "Network.pb.h"
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace {

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
  KnownHosts_descriptor_ = file->message_type(0);
  static const int KnownHosts_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(KnownHosts, name_),
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
  Subscription_descriptor_ = file->message_type(1);
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
  HostSubscriptions_descriptor_ = file->message_type(2);
  static const int HostSubscriptions_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HostSubscriptions, topics_),
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
    KnownHosts_descriptor_, &KnownHosts::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Subscription_descriptor_, &Subscription::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    HostSubscriptions_descriptor_, &HostSubscriptions::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_Network_2eproto() {
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
    "\n\rNetwork.proto\"\032\n\nKnownHosts\022\014\n\004name\030\001 "
    "\003(\r\"-\n\014Subscription\022\014\n\004host\030\001 \002(\r\022\017\n\007top"
    "icid\030\002 \002(\r\"2\n\021HostSubscriptions\022\035\n\006topic"
    "s\030\001 \003(\0132\r.Subscription", 142);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "Network.proto", &protobuf_RegisterTypes);
  KnownHosts::default_instance_ = new KnownHosts();
  Subscription::default_instance_ = new Subscription();
  HostSubscriptions::default_instance_ = new HostSubscriptions();
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
const int KnownHosts::kNameFieldNumber;
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
  name_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool KnownHosts::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated uint32 name = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_name:
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 1, 8, input, this->mutable_name())));
        } else if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag)
                   == ::google::protobuf::internal::WireFormatLite::
                      WIRETYPE_LENGTH_DELIMITED) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, this->mutable_name())));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(8)) goto parse_name;
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
  // repeated uint32 name = 1;
  for (int i = 0; i < this->name_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(
      1, this->name(i), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* KnownHosts::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // repeated uint32 name = 1;
  for (int i = 0; i < this->name_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteUInt32ToArray(1, this->name(i), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int KnownHosts::ByteSize() const {
  int total_size = 0;
  
  // repeated uint32 name = 1;
  {
    int data_size = 0;
    for (int i = 0; i < this->name_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        UInt32Size(this->name(i));
    }
    total_size += 1 * this->name_size() + data_size;
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
  name_.MergeFrom(from.name_);
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
  
  return true;
}

void KnownHosts::Swap(KnownHosts* other) {
  if (other != this) {
    name_.Swap(&other->name_);
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
          _set_bit(0);
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
          _set_bit(1);
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
  if (_has_bit(0)) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->host(), output);
  }
  
  // required uint32 topicid = 2;
  if (_has_bit(1)) {
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
  if (_has_bit(0)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->host(), target);
  }
  
  // required uint32 topicid = 2;
  if (_has_bit(1)) {
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
    if (from._has_bit(0)) {
      set_host(from.host());
    }
    if (from._has_bit(1)) {
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
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

HostSubscriptions::~HostSubscriptions() {
  SharedDtor();
}

void HostSubscriptions::SharedDtor() {
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
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int HostSubscriptions::ByteSize() const {
  int total_size = 0;
  
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
  
  for (int i = 0; i < topics_size(); i++) {
    if (!this->topics(i).IsInitialized()) return false;
  }
  return true;
}

void HostSubscriptions::Swap(HostSubscriptions* other) {
  if (other != this) {
    topics_.Swap(&other->topics_);
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
