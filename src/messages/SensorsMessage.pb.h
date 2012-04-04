// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SensorsMessage.proto

#ifndef PROTOBUF_SensorsMessage_2eproto__INCLUDED
#define PROTOBUF_SensorsMessage_2eproto__INCLUDED

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
void  protobuf_AddDesc_SensorsMessage_2eproto();
void protobuf_AssignDesc_SensorsMessage_2eproto();
void protobuf_ShutdownFile_SensorsMessage_2eproto();

class RobotPositionMessage;
class ButtonMessage;
class SensorData;
class AllSensorValuesMessage;

// ===================================================================

class RobotPositionMessage : public ::google::protobuf::Message {
 public:
  RobotPositionMessage();
  virtual ~RobotPositionMessage();
  
  RobotPositionMessage(const RobotPositionMessage& from);
  
  inline RobotPositionMessage& operator=(const RobotPositionMessage& from) {
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
  static const RobotPositionMessage& default_instance();
  
  void Swap(RobotPositionMessage* other);
  
  // implements Message ----------------------------------------------
  
  RobotPositionMessage* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const RobotPositionMessage& from);
  void MergeFrom(const RobotPositionMessage& from);
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
  
  // repeated .SensorData sensorData = 1;
  inline int sensordata_size() const;
  inline void clear_sensordata();
  static const int kSensorDataFieldNumber = 1;
  inline const ::SensorData& sensordata(int index) const;
  inline ::SensorData* mutable_sensordata(int index);
  inline ::SensorData* add_sensordata();
  inline const ::google::protobuf::RepeatedPtrField< ::SensorData >&
      sensordata() const;
  inline ::google::protobuf::RepeatedPtrField< ::SensorData >*
      mutable_sensordata();
  
  // required int32 TimeDiff = 2;
  inline bool has_timediff() const;
  inline void clear_timediff();
  static const int kTimeDiffFieldNumber = 2;
  inline ::google::protobuf::int32 timediff() const;
  inline void set_timediff(::google::protobuf::int32 value);
  
  // @@protoc_insertion_point(class_scope:RobotPositionMessage)
 private:
  inline void set_has_timediff();
  inline void clear_has_timediff();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::google::protobuf::RepeatedPtrField< ::SensorData > sensordata_;
  ::google::protobuf::int32 timediff_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];
  
  friend void  protobuf_AddDesc_SensorsMessage_2eproto();
  friend void protobuf_AssignDesc_SensorsMessage_2eproto();
  friend void protobuf_ShutdownFile_SensorsMessage_2eproto();
  
  void InitAsDefaultInstance();
  static RobotPositionMessage* default_instance_;
};
// -------------------------------------------------------------------

class ButtonMessage : public ::google::protobuf::Message {
 public:
  ButtonMessage();
  virtual ~ButtonMessage();
  
  ButtonMessage(const ButtonMessage& from);
  
  inline ButtonMessage& operator=(const ButtonMessage& from) {
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
  static const ButtonMessage& default_instance();
  
  void Swap(ButtonMessage* other);
  
  // implements Message ----------------------------------------------
  
  ButtonMessage* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ButtonMessage& from);
  void MergeFrom(const ButtonMessage& from);
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
  
  // repeated uint32 data = 1;
  inline int data_size() const;
  inline void clear_data();
  static const int kDataFieldNumber = 1;
  inline ::google::protobuf::uint32 data(int index) const;
  inline void set_data(int index, ::google::protobuf::uint32 value);
  inline void add_data(::google::protobuf::uint32 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >&
      data() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >*
      mutable_data();
  
  // @@protoc_insertion_point(class_scope:ButtonMessage)
 private:
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::google::protobuf::RepeatedField< ::google::protobuf::uint32 > data_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];
  
  friend void  protobuf_AddDesc_SensorsMessage_2eproto();
  friend void protobuf_AssignDesc_SensorsMessage_2eproto();
  friend void protobuf_ShutdownFile_SensorsMessage_2eproto();
  
  void InitAsDefaultInstance();
  static ButtonMessage* default_instance_;
};
// -------------------------------------------------------------------

class SensorData : public ::google::protobuf::Message {
 public:
  SensorData();
  virtual ~SensorData();
  
  SensorData(const SensorData& from);
  
  inline SensorData& operator=(const SensorData& from) {
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
  static const SensorData& default_instance();
  
  void Swap(SensorData* other);
  
  // implements Message ----------------------------------------------
  
  SensorData* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SensorData& from);
  void MergeFrom(const SensorData& from);
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
  
  // required float SensorValue = 1 [default = 0];
  inline bool has_sensorvalue() const;
  inline void clear_sensorvalue();
  static const int kSensorValueFieldNumber = 1;
  inline float sensorvalue() const;
  inline void set_sensorvalue(float value);
  
  // required float SensorValueDiff = 2 [default = 0];
  inline bool has_sensorvaluediff() const;
  inline void clear_sensorvaluediff();
  static const int kSensorValueDiffFieldNumber = 2;
  inline float sensorvaluediff() const;
  inline void set_sensorvaluediff(float value);
  
  // @@protoc_insertion_point(class_scope:SensorData)
 private:
  inline void set_has_sensorvalue();
  inline void clear_has_sensorvalue();
  inline void set_has_sensorvaluediff();
  inline void clear_has_sensorvaluediff();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  float sensorvalue_;
  float sensorvaluediff_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];
  
  friend void  protobuf_AddDesc_SensorsMessage_2eproto();
  friend void protobuf_AssignDesc_SensorsMessage_2eproto();
  friend void protobuf_ShutdownFile_SensorsMessage_2eproto();
  
  void InitAsDefaultInstance();
  static SensorData* default_instance_;
};
// -------------------------------------------------------------------

class AllSensorValuesMessage : public ::google::protobuf::Message {
 public:
  AllSensorValuesMessage();
  virtual ~AllSensorValuesMessage();
  
  AllSensorValuesMessage(const AllSensorValuesMessage& from);
  
  inline AllSensorValuesMessage& operator=(const AllSensorValuesMessage& from) {
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
  static const AllSensorValuesMessage& default_instance();
  
  void Swap(AllSensorValuesMessage* other);
  
  // implements Message ----------------------------------------------
  
  AllSensorValuesMessage* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const AllSensorValuesMessage& from);
  void MergeFrom(const AllSensorValuesMessage& from);
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
  
  // repeated .SensorData jointData = 1;
  inline int jointdata_size() const;
  inline void clear_jointdata();
  static const int kJointDataFieldNumber = 1;
  inline const ::SensorData& jointdata(int index) const;
  inline ::SensorData* mutable_jointdata(int index);
  inline ::SensorData* add_jointdata();
  inline const ::google::protobuf::RepeatedPtrField< ::SensorData >&
      jointdata() const;
  inline ::google::protobuf::RepeatedPtrField< ::SensorData >*
      mutable_jointdata();
  
  // repeated .SensorData sensorData = 2;
  inline int sensordata_size() const;
  inline void clear_sensordata();
  static const int kSensorDataFieldNumber = 2;
  inline const ::SensorData& sensordata(int index) const;
  inline ::SensorData* mutable_sensordata(int index);
  inline ::SensorData* add_sensordata();
  inline const ::google::protobuf::RepeatedPtrField< ::SensorData >&
      sensordata() const;
  inline ::google::protobuf::RepeatedPtrField< ::SensorData >*
      mutable_sensordata();
  
  // repeated .SensorData computedData = 3;
  inline int computeddata_size() const;
  inline void clear_computeddata();
  static const int kComputedDataFieldNumber = 3;
  inline const ::SensorData& computeddata(int index) const;
  inline ::SensorData* mutable_computeddata(int index);
  inline ::SensorData* add_computeddata();
  inline const ::google::protobuf::RepeatedPtrField< ::SensorData >&
      computeddata() const;
  inline ::google::protobuf::RepeatedPtrField< ::SensorData >*
      mutable_computeddata();
  
  // required uint32 TimeDiff = 4;
  inline bool has_timediff() const;
  inline void clear_timediff();
  static const int kTimeDiffFieldNumber = 4;
  inline ::google::protobuf::uint32 timediff() const;
  inline void set_timediff(::google::protobuf::uint32 value);
  
  // @@protoc_insertion_point(class_scope:AllSensorValuesMessage)
 private:
  inline void set_has_timediff();
  inline void clear_has_timediff();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::google::protobuf::RepeatedPtrField< ::SensorData > jointdata_;
  ::google::protobuf::RepeatedPtrField< ::SensorData > sensordata_;
  ::google::protobuf::RepeatedPtrField< ::SensorData > computeddata_;
  ::google::protobuf::uint32 timediff_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];
  
  friend void  protobuf_AddDesc_SensorsMessage_2eproto();
  friend void protobuf_AssignDesc_SensorsMessage_2eproto();
  friend void protobuf_ShutdownFile_SensorsMessage_2eproto();
  
  void InitAsDefaultInstance();
  static AllSensorValuesMessage* default_instance_;
};
// ===================================================================


// ===================================================================

// RobotPositionMessage

// repeated .SensorData sensorData = 1;
inline int RobotPositionMessage::sensordata_size() const {
  return sensordata_.size();
}
inline void RobotPositionMessage::clear_sensordata() {
  sensordata_.Clear();
}
inline const ::SensorData& RobotPositionMessage::sensordata(int index) const {
  return sensordata_.Get(index);
}
inline ::SensorData* RobotPositionMessage::mutable_sensordata(int index) {
  return sensordata_.Mutable(index);
}
inline ::SensorData* RobotPositionMessage::add_sensordata() {
  return sensordata_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::SensorData >&
RobotPositionMessage::sensordata() const {
  return sensordata_;
}
inline ::google::protobuf::RepeatedPtrField< ::SensorData >*
RobotPositionMessage::mutable_sensordata() {
  return &sensordata_;
}

// required int32 TimeDiff = 2;
inline bool RobotPositionMessage::has_timediff() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void RobotPositionMessage::set_has_timediff() {
  _has_bits_[0] |= 0x00000002u;
}
inline void RobotPositionMessage::clear_has_timediff() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void RobotPositionMessage::clear_timediff() {
  timediff_ = 0;
  clear_has_timediff();
}
inline ::google::protobuf::int32 RobotPositionMessage::timediff() const {
  return timediff_;
}
inline void RobotPositionMessage::set_timediff(::google::protobuf::int32 value) {
  set_has_timediff();
  timediff_ = value;
}

// -------------------------------------------------------------------

// ButtonMessage

// repeated uint32 data = 1;
inline int ButtonMessage::data_size() const {
  return data_.size();
}
inline void ButtonMessage::clear_data() {
  data_.Clear();
}
inline ::google::protobuf::uint32 ButtonMessage::data(int index) const {
  return data_.Get(index);
}
inline void ButtonMessage::set_data(int index, ::google::protobuf::uint32 value) {
  data_.Set(index, value);
}
inline void ButtonMessage::add_data(::google::protobuf::uint32 value) {
  data_.Add(value);
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >&
ButtonMessage::data() const {
  return data_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >*
ButtonMessage::mutable_data() {
  return &data_;
}

// -------------------------------------------------------------------

// SensorData

// required float SensorValue = 1 [default = 0];
inline bool SensorData::has_sensorvalue() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SensorData::set_has_sensorvalue() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SensorData::clear_has_sensorvalue() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SensorData::clear_sensorvalue() {
  sensorvalue_ = 0;
  clear_has_sensorvalue();
}
inline float SensorData::sensorvalue() const {
  return sensorvalue_;
}
inline void SensorData::set_sensorvalue(float value) {
  set_has_sensorvalue();
  sensorvalue_ = value;
}

// required float SensorValueDiff = 2 [default = 0];
inline bool SensorData::has_sensorvaluediff() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SensorData::set_has_sensorvaluediff() {
  _has_bits_[0] |= 0x00000002u;
}
inline void SensorData::clear_has_sensorvaluediff() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void SensorData::clear_sensorvaluediff() {
  sensorvaluediff_ = 0;
  clear_has_sensorvaluediff();
}
inline float SensorData::sensorvaluediff() const {
  return sensorvaluediff_;
}
inline void SensorData::set_sensorvaluediff(float value) {
  set_has_sensorvaluediff();
  sensorvaluediff_ = value;
}

// -------------------------------------------------------------------

// AllSensorValuesMessage

// repeated .SensorData jointData = 1;
inline int AllSensorValuesMessage::jointdata_size() const {
  return jointdata_.size();
}
inline void AllSensorValuesMessage::clear_jointdata() {
  jointdata_.Clear();
}
inline const ::SensorData& AllSensorValuesMessage::jointdata(int index) const {
  return jointdata_.Get(index);
}
inline ::SensorData* AllSensorValuesMessage::mutable_jointdata(int index) {
  return jointdata_.Mutable(index);
}
inline ::SensorData* AllSensorValuesMessage::add_jointdata() {
  return jointdata_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::SensorData >&
AllSensorValuesMessage::jointdata() const {
  return jointdata_;
}
inline ::google::protobuf::RepeatedPtrField< ::SensorData >*
AllSensorValuesMessage::mutable_jointdata() {
  return &jointdata_;
}

// repeated .SensorData sensorData = 2;
inline int AllSensorValuesMessage::sensordata_size() const {
  return sensordata_.size();
}
inline void AllSensorValuesMessage::clear_sensordata() {
  sensordata_.Clear();
}
inline const ::SensorData& AllSensorValuesMessage::sensordata(int index) const {
  return sensordata_.Get(index);
}
inline ::SensorData* AllSensorValuesMessage::mutable_sensordata(int index) {
  return sensordata_.Mutable(index);
}
inline ::SensorData* AllSensorValuesMessage::add_sensordata() {
  return sensordata_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::SensorData >&
AllSensorValuesMessage::sensordata() const {
  return sensordata_;
}
inline ::google::protobuf::RepeatedPtrField< ::SensorData >*
AllSensorValuesMessage::mutable_sensordata() {
  return &sensordata_;
}

// repeated .SensorData computedData = 3;
inline int AllSensorValuesMessage::computeddata_size() const {
  return computeddata_.size();
}
inline void AllSensorValuesMessage::clear_computeddata() {
  computeddata_.Clear();
}
inline const ::SensorData& AllSensorValuesMessage::computeddata(int index) const {
  return computeddata_.Get(index);
}
inline ::SensorData* AllSensorValuesMessage::mutable_computeddata(int index) {
  return computeddata_.Mutable(index);
}
inline ::SensorData* AllSensorValuesMessage::add_computeddata() {
  return computeddata_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::SensorData >&
AllSensorValuesMessage::computeddata() const {
  return computeddata_;
}
inline ::google::protobuf::RepeatedPtrField< ::SensorData >*
AllSensorValuesMessage::mutable_computeddata() {
  return &computeddata_;
}

// required uint32 TimeDiff = 4;
inline bool AllSensorValuesMessage::has_timediff() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void AllSensorValuesMessage::set_has_timediff() {
  _has_bits_[0] |= 0x00000008u;
}
inline void AllSensorValuesMessage::clear_has_timediff() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void AllSensorValuesMessage::clear_timediff() {
  timediff_ = 0u;
  clear_has_timediff();
}
inline ::google::protobuf::uint32 AllSensorValuesMessage::timediff() const {
  return timediff_;
}
inline void AllSensorValuesMessage::set_timediff(::google::protobuf::uint32 value) {
  set_has_timediff();
  timediff_ = value;
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_SensorsMessage_2eproto__INCLUDED
