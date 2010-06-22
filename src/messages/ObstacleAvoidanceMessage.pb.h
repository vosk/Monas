// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ObstacleAvoidanceMessage.proto

#ifndef PROTOBUF_ObstacleAvoidanceMessage_2eproto__INCLUDED
#define PROTOBUF_ObstacleAvoidanceMessage_2eproto__INCLUDED

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

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_ObstacleAvoidanceMessage_2eproto();
void protobuf_AssignDesc_ObstacleAvoidanceMessage_2eproto();
void protobuf_ShutdownFile_ObstacleAvoidanceMessage_2eproto();

class ObstacleMessage;
class VisionObstacleMessage;

// ===================================================================

class ObstacleMessage : public ::google::protobuf::Message {
 public:
  ObstacleMessage();
  virtual ~ObstacleMessage();
  
  ObstacleMessage(const ObstacleMessage& from);
  
  inline ObstacleMessage& operator=(const ObstacleMessage& from) {
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
  static const ObstacleMessage& default_instance();
  
  void Swap(ObstacleMessage* other);
  
  // implements Message ----------------------------------------------
  
  ObstacleMessage* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ObstacleMessage& from);
  void MergeFrom(const ObstacleMessage& from);
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
  
  // required int32 direction = 1 [default = 0];
  inline bool has_direction() const;
  inline void clear_direction();
  static const int kDirectionFieldNumber = 1;
  inline ::google::protobuf::int32 direction() const;
  inline void set_direction(::google::protobuf::int32 value);
  
  // required float distance = 2 [default = 0];
  inline bool has_distance() const;
  inline void clear_distance();
  static const int kDistanceFieldNumber = 2;
  inline float distance() const;
  inline void set_distance(float value);
  
  // required float certainty = 3 [default = 0];
  inline bool has_certainty() const;
  inline void clear_certainty();
  static const int kCertaintyFieldNumber = 3;
  inline float certainty() const;
  inline void set_certainty(float value);
  
  // @@protoc_insertion_point(class_scope:ObstacleMessage)
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  ::google::protobuf::int32 direction_;
  float distance_;
  float certainty_;
  friend void  protobuf_AddDesc_ObstacleAvoidanceMessage_2eproto();
  friend void protobuf_AssignDesc_ObstacleAvoidanceMessage_2eproto();
  friend void protobuf_ShutdownFile_ObstacleAvoidanceMessage_2eproto();
  
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];
  
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
  static ObstacleMessage* default_instance_;
};
// -------------------------------------------------------------------

class VisionObstacleMessage : public ::google::protobuf::Message {
 public:
  VisionObstacleMessage();
  virtual ~VisionObstacleMessage();
  
  VisionObstacleMessage(const VisionObstacleMessage& from);
  
  inline VisionObstacleMessage& operator=(const VisionObstacleMessage& from) {
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
  static const VisionObstacleMessage& default_instance();
  
  void Swap(VisionObstacleMessage* other);
  
  // implements Message ----------------------------------------------
  
  VisionObstacleMessage* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const VisionObstacleMessage& from);
  void MergeFrom(const VisionObstacleMessage& from);
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
  
  // repeated .ObstacleMessage obstacles = 1;
  inline int obstacles_size() const;
  inline void clear_obstacles();
  static const int kObstaclesFieldNumber = 1;
  inline const ::ObstacleMessage& obstacles(int index) const;
  inline ::ObstacleMessage* mutable_obstacles(int index);
  inline ::ObstacleMessage* add_obstacles();
  inline const ::google::protobuf::RepeatedPtrField< ::ObstacleMessage >&
      obstacles() const;
  inline ::google::protobuf::RepeatedPtrField< ::ObstacleMessage >*
      mutable_obstacles();
  
  // @@protoc_insertion_point(class_scope:VisionObstacleMessage)
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  ::google::protobuf::RepeatedPtrField< ::ObstacleMessage > obstacles_;
  friend void  protobuf_AddDesc_ObstacleAvoidanceMessage_2eproto();
  friend void protobuf_AssignDesc_ObstacleAvoidanceMessage_2eproto();
  friend void protobuf_ShutdownFile_ObstacleAvoidanceMessage_2eproto();
  
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
  static VisionObstacleMessage* default_instance_;
};
// ===================================================================


// ===================================================================

// ObstacleMessage

// required int32 direction = 1 [default = 0];
inline bool ObstacleMessage::has_direction() const {
  return _has_bit(0);
}
inline void ObstacleMessage::clear_direction() {
  direction_ = 0;
  _clear_bit(0);
}
inline ::google::protobuf::int32 ObstacleMessage::direction() const {
  return direction_;
}
inline void ObstacleMessage::set_direction(::google::protobuf::int32 value) {
  _set_bit(0);
  direction_ = value;
}

// required float distance = 2 [default = 0];
inline bool ObstacleMessage::has_distance() const {
  return _has_bit(1);
}
inline void ObstacleMessage::clear_distance() {
  distance_ = 0;
  _clear_bit(1);
}
inline float ObstacleMessage::distance() const {
  return distance_;
}
inline void ObstacleMessage::set_distance(float value) {
  _set_bit(1);
  distance_ = value;
}

// required float certainty = 3 [default = 0];
inline bool ObstacleMessage::has_certainty() const {
  return _has_bit(2);
}
inline void ObstacleMessage::clear_certainty() {
  certainty_ = 0;
  _clear_bit(2);
}
inline float ObstacleMessage::certainty() const {
  return certainty_;
}
inline void ObstacleMessage::set_certainty(float value) {
  _set_bit(2);
  certainty_ = value;
}

// -------------------------------------------------------------------

// VisionObstacleMessage

// repeated .ObstacleMessage obstacles = 1;
inline int VisionObstacleMessage::obstacles_size() const {
  return obstacles_.size();
}
inline void VisionObstacleMessage::clear_obstacles() {
  obstacles_.Clear();
}
inline const ::ObstacleMessage& VisionObstacleMessage::obstacles(int index) const {
  return obstacles_.Get(index);
}
inline ::ObstacleMessage* VisionObstacleMessage::mutable_obstacles(int index) {
  return obstacles_.Mutable(index);
}
inline ::ObstacleMessage* VisionObstacleMessage::add_obstacles() {
  return obstacles_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::ObstacleMessage >&
VisionObstacleMessage::obstacles() const {
  return obstacles_;
}
inline ::google::protobuf::RepeatedPtrField< ::ObstacleMessage >*
VisionObstacleMessage::mutable_obstacles() {
  return &obstacles_;
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_ObstacleAvoidanceMessage_2eproto__INCLUDED
