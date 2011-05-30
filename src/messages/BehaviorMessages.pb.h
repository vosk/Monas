// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: BehaviorMessages.proto

#ifndef PROTOBUF_BehaviorMessages_2eproto__INCLUDED
#define PROTOBUF_BehaviorMessages_2eproto__INCLUDED

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
#include "VisionObservations.pb.h"
#include "WorldInfo.pb.h"
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_BehaviorMessages_2eproto();
void protobuf_AssignDesc_BehaviorMessages_2eproto();
void protobuf_ShutdownFile_BehaviorMessages_2eproto();

class KickOffMessage;
class BToHeadMessage;
class HeadToBMessage;
class ScanMessage;
class PlayerNumberMessage;
class PositionMessage;
class ReturnToPositionMessage;
class DoubleObsInfo;
class FallMessage;

// ===================================================================

class KickOffMessage : public ::google::protobuf::Message {
 public:
  KickOffMessage();
  virtual ~KickOffMessage();
  
  KickOffMessage(const KickOffMessage& from);
  
  inline KickOffMessage& operator=(const KickOffMessage& from) {
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
  static const KickOffMessage& default_instance();
  
  void Swap(KickOffMessage* other);
  
  // implements Message ----------------------------------------------
  
  KickOffMessage* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const KickOffMessage& from);
  void MergeFrom(const KickOffMessage& from);
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
  
  // required bool kickOff = 1 [default = false];
  inline bool has_kickoff() const;
  inline void clear_kickoff();
  static const int kKickOffFieldNumber = 1;
  inline bool kickoff() const;
  inline void set_kickoff(bool value);
  
  // @@protoc_insertion_point(class_scope:KickOffMessage)
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  bool kickoff_;
  friend void  protobuf_AddDesc_BehaviorMessages_2eproto();
  friend void protobuf_AssignDesc_BehaviorMessages_2eproto();
  friend void protobuf_ShutdownFile_BehaviorMessages_2eproto();
  
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
  static KickOffMessage* default_instance_;
};
// -------------------------------------------------------------------

class BToHeadMessage : public ::google::protobuf::Message {
 public:
  BToHeadMessage();
  virtual ~BToHeadMessage();
  
  BToHeadMessage(const BToHeadMessage& from);
  
  inline BToHeadMessage& operator=(const BToHeadMessage& from) {
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
  static const BToHeadMessage& default_instance();
  
  void Swap(BToHeadMessage* other);
  
  // implements Message ----------------------------------------------
  
  BToHeadMessage* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const BToHeadMessage& from);
  void MergeFrom(const BToHeadMessage& from);
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
  
  // required int32 headaction = 1 [default = 0];
  inline bool has_headaction() const;
  inline void clear_headaction();
  static const int kHeadactionFieldNumber = 1;
  inline ::google::protobuf::int32 headaction() const;
  inline void set_headaction(::google::protobuf::int32 value);
  
  // @@protoc_insertion_point(class_scope:BToHeadMessage)
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  ::google::protobuf::int32 headaction_;
  friend void  protobuf_AddDesc_BehaviorMessages_2eproto();
  friend void protobuf_AssignDesc_BehaviorMessages_2eproto();
  friend void protobuf_ShutdownFile_BehaviorMessages_2eproto();
  
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
  static BToHeadMessage* default_instance_;
};
// -------------------------------------------------------------------

class HeadToBMessage : public ::google::protobuf::Message {
 public:
  HeadToBMessage();
  virtual ~HeadToBMessage();
  
  HeadToBMessage(const HeadToBMessage& from);
  
  inline HeadToBMessage& operator=(const HeadToBMessage& from) {
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
  static const HeadToBMessage& default_instance();
  
  void Swap(HeadToBMessage* other);
  
  // implements Message ----------------------------------------------
  
  HeadToBMessage* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const HeadToBMessage& from);
  void MergeFrom(const HeadToBMessage& from);
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
  
  // required int32 ballfound = 1 [default = 0];
  inline bool has_ballfound() const;
  inline void clear_ballfound();
  static const int kBallfoundFieldNumber = 1;
  inline ::google::protobuf::int32 ballfound() const;
  inline void set_ballfound(::google::protobuf::int32 value);
  
  // required int32 calibrated = 2 [default = 0];
  inline bool has_calibrated() const;
  inline void clear_calibrated();
  static const int kCalibratedFieldNumber = 2;
  inline ::google::protobuf::int32 calibrated() const;
  inline void set_calibrated(::google::protobuf::int32 value);
  
  // @@protoc_insertion_point(class_scope:HeadToBMessage)
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  ::google::protobuf::int32 ballfound_;
  ::google::protobuf::int32 calibrated_;
  friend void  protobuf_AddDesc_BehaviorMessages_2eproto();
  friend void protobuf_AssignDesc_BehaviorMessages_2eproto();
  friend void protobuf_ShutdownFile_BehaviorMessages_2eproto();
  
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];
  
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
  static HeadToBMessage* default_instance_;
};
// -------------------------------------------------------------------

class ScanMessage : public ::google::protobuf::Message {
 public:
  ScanMessage();
  virtual ~ScanMessage();
  
  ScanMessage(const ScanMessage& from);
  
  inline ScanMessage& operator=(const ScanMessage& from) {
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
  static const ScanMessage& default_instance();
  
  void Swap(ScanMessage* other);
  
  // implements Message ----------------------------------------------
  
  ScanMessage* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ScanMessage& from);
  void MergeFrom(const ScanMessage& from);
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
  
  // required bool scancompleted = 1 [default = false];
  inline bool has_scancompleted() const;
  inline void clear_scancompleted();
  static const int kScancompletedFieldNumber = 1;
  inline bool scancompleted() const;
  inline void set_scancompleted(bool value);
  
  // @@protoc_insertion_point(class_scope:ScanMessage)
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  bool scancompleted_;
  friend void  protobuf_AddDesc_BehaviorMessages_2eproto();
  friend void protobuf_AssignDesc_BehaviorMessages_2eproto();
  friend void protobuf_ShutdownFile_BehaviorMessages_2eproto();
  
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
  static ScanMessage* default_instance_;
};
// -------------------------------------------------------------------

class PlayerNumberMessage : public ::google::protobuf::Message {
 public:
  PlayerNumberMessage();
  virtual ~PlayerNumberMessage();
  
  PlayerNumberMessage(const PlayerNumberMessage& from);
  
  inline PlayerNumberMessage& operator=(const PlayerNumberMessage& from) {
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
  static const PlayerNumberMessage& default_instance();
  
  void Swap(PlayerNumberMessage* other);
  
  // implements Message ----------------------------------------------
  
  PlayerNumberMessage* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PlayerNumberMessage& from);
  void MergeFrom(const PlayerNumberMessage& from);
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
  
  // required int32 player_number = 1 [default = 2];
  inline bool has_player_number() const;
  inline void clear_player_number();
  static const int kPlayerNumberFieldNumber = 1;
  inline ::google::protobuf::int32 player_number() const;
  inline void set_player_number(::google::protobuf::int32 value);
  
  // required int32 team_side = 2 [default = 1];
  inline bool has_team_side() const;
  inline void clear_team_side();
  static const int kTeamSideFieldNumber = 2;
  inline ::google::protobuf::int32 team_side() const;
  inline void set_team_side(::google::protobuf::int32 value);
  
  // @@protoc_insertion_point(class_scope:PlayerNumberMessage)
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  ::google::protobuf::int32 player_number_;
  ::google::protobuf::int32 team_side_;
  friend void  protobuf_AddDesc_BehaviorMessages_2eproto();
  friend void protobuf_AssignDesc_BehaviorMessages_2eproto();
  friend void protobuf_ShutdownFile_BehaviorMessages_2eproto();
  
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];
  
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
  static PlayerNumberMessage* default_instance_;
};
// -------------------------------------------------------------------

class PositionMessage : public ::google::protobuf::Message {
 public:
  PositionMessage();
  virtual ~PositionMessage();
  
  PositionMessage(const PositionMessage& from);
  
  inline PositionMessage& operator=(const PositionMessage& from) {
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
  static const PositionMessage& default_instance();
  
  void Swap(PositionMessage* other);
  
  // implements Message ----------------------------------------------
  
  PositionMessage* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PositionMessage& from);
  void MergeFrom(const PositionMessage& from);
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
  
  // required float posX = 1 [default = 70];
  inline bool has_posx() const;
  inline void clear_posx();
  static const int kPosXFieldNumber = 1;
  inline float posx() const;
  inline void set_posx(float value);
  
  // required float posY = 2 [default = 70];
  inline bool has_posy() const;
  inline void clear_posy();
  static const int kPosYFieldNumber = 2;
  inline float posy() const;
  inline void set_posy(float value);
  
  // required float theta = 3 [default = 1];
  inline bool has_theta() const;
  inline void clear_theta();
  static const int kThetaFieldNumber = 3;
  inline float theta() const;
  inline void set_theta(float value);
  
  // @@protoc_insertion_point(class_scope:PositionMessage)
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  float posx_;
  float posy_;
  float theta_;
  friend void  protobuf_AddDesc_BehaviorMessages_2eproto();
  friend void protobuf_AssignDesc_BehaviorMessages_2eproto();
  friend void protobuf_ShutdownFile_BehaviorMessages_2eproto();
  
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
  static PositionMessage* default_instance_;
};
// -------------------------------------------------------------------

class ReturnToPositionMessage : public ::google::protobuf::Message {
 public:
  ReturnToPositionMessage();
  virtual ~ReturnToPositionMessage();
  
  ReturnToPositionMessage(const ReturnToPositionMessage& from);
  
  inline ReturnToPositionMessage& operator=(const ReturnToPositionMessage& from) {
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
  static const ReturnToPositionMessage& default_instance();
  
  void Swap(ReturnToPositionMessage* other);
  
  // implements Message ----------------------------------------------
  
  ReturnToPositionMessage* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ReturnToPositionMessage& from);
  void MergeFrom(const ReturnToPositionMessage& from);
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
  
  // required bool goalieToPos = 1 [default = false];
  inline bool has_goalietopos() const;
  inline void clear_goalietopos();
  static const int kGoalieToPosFieldNumber = 1;
  inline bool goalietopos() const;
  inline void set_goalietopos(bool value);
  
  // @@protoc_insertion_point(class_scope:ReturnToPositionMessage)
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  bool goalietopos_;
  friend void  protobuf_AddDesc_BehaviorMessages_2eproto();
  friend void protobuf_AssignDesc_BehaviorMessages_2eproto();
  friend void protobuf_ShutdownFile_BehaviorMessages_2eproto();
  
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
  static ReturnToPositionMessage* default_instance_;
};
// -------------------------------------------------------------------

class DoubleObsInfo : public ::google::protobuf::Message {
 public:
  DoubleObsInfo();
  virtual ~DoubleObsInfo();
  
  DoubleObsInfo(const DoubleObsInfo& from);
  
  inline DoubleObsInfo& operator=(const DoubleObsInfo& from) {
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
  static const DoubleObsInfo& default_instance();
  
  void Swap(DoubleObsInfo* other);
  
  // implements Message ----------------------------------------------
  
  DoubleObsInfo* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const DoubleObsInfo& from);
  void MergeFrom(const DoubleObsInfo& from);
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
  
  // required .ObservationMessage prev = 1;
  inline bool has_prev() const;
  inline void clear_prev();
  static const int kPrevFieldNumber = 1;
  inline const ::ObservationMessage& prev() const;
  inline ::ObservationMessage* mutable_prev();
  
  // required .ObservationMessage last = 2;
  inline bool has_last() const;
  inline void clear_last();
  static const int kLastFieldNumber = 2;
  inline const ::ObservationMessage& last() const;
  inline ::ObservationMessage* mutable_last();
  
  // @@protoc_insertion_point(class_scope:DoubleObsInfo)
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  ::ObservationMessage* prev_;
  ::ObservationMessage* last_;
  friend void  protobuf_AddDesc_BehaviorMessages_2eproto();
  friend void protobuf_AssignDesc_BehaviorMessages_2eproto();
  friend void protobuf_ShutdownFile_BehaviorMessages_2eproto();
  
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];
  
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
  static DoubleObsInfo* default_instance_;
};
// -------------------------------------------------------------------

class FallMessage : public ::google::protobuf::Message {
 public:
  FallMessage();
  virtual ~FallMessage();
  
  FallMessage(const FallMessage& from);
  
  inline FallMessage& operator=(const FallMessage& from) {
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
  static const FallMessage& default_instance();
  
  void Swap(FallMessage* other);
  
  // implements Message ----------------------------------------------
  
  FallMessage* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const FallMessage& from);
  void MergeFrom(const FallMessage& from);
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
  
  // required int32 fall = 1 [default = 0];
  inline bool has_fall() const;
  inline void clear_fall();
  static const int kFallFieldNumber = 1;
  inline ::google::protobuf::int32 fall() const;
  inline void set_fall(::google::protobuf::int32 value);
  
  // @@protoc_insertion_point(class_scope:FallMessage)
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  ::google::protobuf::int32 fall_;
  friend void  protobuf_AddDesc_BehaviorMessages_2eproto();
  friend void protobuf_AssignDesc_BehaviorMessages_2eproto();
  friend void protobuf_ShutdownFile_BehaviorMessages_2eproto();
  
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
  static FallMessage* default_instance_;
};
// ===================================================================


// ===================================================================

// KickOffMessage

// required bool kickOff = 1 [default = false];
inline bool KickOffMessage::has_kickoff() const {
  return _has_bit(0);
}
inline void KickOffMessage::clear_kickoff() {
  kickoff_ = false;
  _clear_bit(0);
}
inline bool KickOffMessage::kickoff() const {
  return kickoff_;
}
inline void KickOffMessage::set_kickoff(bool value) {
  _set_bit(0);
  kickoff_ = value;
}

// -------------------------------------------------------------------

// BToHeadMessage

// required int32 headaction = 1 [default = 0];
inline bool BToHeadMessage::has_headaction() const {
  return _has_bit(0);
}
inline void BToHeadMessage::clear_headaction() {
  headaction_ = 0;
  _clear_bit(0);
}
inline ::google::protobuf::int32 BToHeadMessage::headaction() const {
  return headaction_;
}
inline void BToHeadMessage::set_headaction(::google::protobuf::int32 value) {
  _set_bit(0);
  headaction_ = value;
}

// -------------------------------------------------------------------

// HeadToBMessage

// required int32 ballfound = 1 [default = 0];
inline bool HeadToBMessage::has_ballfound() const {
  return _has_bit(0);
}
inline void HeadToBMessage::clear_ballfound() {
  ballfound_ = 0;
  _clear_bit(0);
}
inline ::google::protobuf::int32 HeadToBMessage::ballfound() const {
  return ballfound_;
}
inline void HeadToBMessage::set_ballfound(::google::protobuf::int32 value) {
  _set_bit(0);
  ballfound_ = value;
}

// required int32 calibrated = 2 [default = 0];
inline bool HeadToBMessage::has_calibrated() const {
  return _has_bit(1);
}
inline void HeadToBMessage::clear_calibrated() {
  calibrated_ = 0;
  _clear_bit(1);
}
inline ::google::protobuf::int32 HeadToBMessage::calibrated() const {
  return calibrated_;
}
inline void HeadToBMessage::set_calibrated(::google::protobuf::int32 value) {
  _set_bit(1);
  calibrated_ = value;
}

// -------------------------------------------------------------------

// ScanMessage

// required bool scancompleted = 1 [default = false];
inline bool ScanMessage::has_scancompleted() const {
  return _has_bit(0);
}
inline void ScanMessage::clear_scancompleted() {
  scancompleted_ = false;
  _clear_bit(0);
}
inline bool ScanMessage::scancompleted() const {
  return scancompleted_;
}
inline void ScanMessage::set_scancompleted(bool value) {
  _set_bit(0);
  scancompleted_ = value;
}

// -------------------------------------------------------------------

// PlayerNumberMessage

// required int32 player_number = 1 [default = 2];
inline bool PlayerNumberMessage::has_player_number() const {
  return _has_bit(0);
}
inline void PlayerNumberMessage::clear_player_number() {
  player_number_ = 2;
  _clear_bit(0);
}
inline ::google::protobuf::int32 PlayerNumberMessage::player_number() const {
  return player_number_;
}
inline void PlayerNumberMessage::set_player_number(::google::protobuf::int32 value) {
  _set_bit(0);
  player_number_ = value;
}

// required int32 team_side = 2 [default = 1];
inline bool PlayerNumberMessage::has_team_side() const {
  return _has_bit(1);
}
inline void PlayerNumberMessage::clear_team_side() {
  team_side_ = 1;
  _clear_bit(1);
}
inline ::google::protobuf::int32 PlayerNumberMessage::team_side() const {
  return team_side_;
}
inline void PlayerNumberMessage::set_team_side(::google::protobuf::int32 value) {
  _set_bit(1);
  team_side_ = value;
}

// -------------------------------------------------------------------

// PositionMessage

// required float posX = 1 [default = 70];
inline bool PositionMessage::has_posx() const {
  return _has_bit(0);
}
inline void PositionMessage::clear_posx() {
  posx_ = 70;
  _clear_bit(0);
}
inline float PositionMessage::posx() const {
  return posx_;
}
inline void PositionMessage::set_posx(float value) {
  _set_bit(0);
  posx_ = value;
}

// required float posY = 2 [default = 70];
inline bool PositionMessage::has_posy() const {
  return _has_bit(1);
}
inline void PositionMessage::clear_posy() {
  posy_ = 70;
  _clear_bit(1);
}
inline float PositionMessage::posy() const {
  return posy_;
}
inline void PositionMessage::set_posy(float value) {
  _set_bit(1);
  posy_ = value;
}

// required float theta = 3 [default = 1];
inline bool PositionMessage::has_theta() const {
  return _has_bit(2);
}
inline void PositionMessage::clear_theta() {
  theta_ = 1;
  _clear_bit(2);
}
inline float PositionMessage::theta() const {
  return theta_;
}
inline void PositionMessage::set_theta(float value) {
  _set_bit(2);
  theta_ = value;
}

// -------------------------------------------------------------------

// ReturnToPositionMessage

// required bool goalieToPos = 1 [default = false];
inline bool ReturnToPositionMessage::has_goalietopos() const {
  return _has_bit(0);
}
inline void ReturnToPositionMessage::clear_goalietopos() {
  goalietopos_ = false;
  _clear_bit(0);
}
inline bool ReturnToPositionMessage::goalietopos() const {
  return goalietopos_;
}
inline void ReturnToPositionMessage::set_goalietopos(bool value) {
  _set_bit(0);
  goalietopos_ = value;
}

// -------------------------------------------------------------------

// DoubleObsInfo

// required .ObservationMessage prev = 1;
inline bool DoubleObsInfo::has_prev() const {
  return _has_bit(0);
}
inline void DoubleObsInfo::clear_prev() {
  if (prev_ != NULL) prev_->::ObservationMessage::Clear();
  _clear_bit(0);
}
inline const ::ObservationMessage& DoubleObsInfo::prev() const {
  return prev_ != NULL ? *prev_ : *default_instance_->prev_;
}
inline ::ObservationMessage* DoubleObsInfo::mutable_prev() {
  _set_bit(0);
  if (prev_ == NULL) prev_ = new ::ObservationMessage;
  return prev_;
}

// required .ObservationMessage last = 2;
inline bool DoubleObsInfo::has_last() const {
  return _has_bit(1);
}
inline void DoubleObsInfo::clear_last() {
  if (last_ != NULL) last_->::ObservationMessage::Clear();
  _clear_bit(1);
}
inline const ::ObservationMessage& DoubleObsInfo::last() const {
  return last_ != NULL ? *last_ : *default_instance_->last_;
}
inline ::ObservationMessage* DoubleObsInfo::mutable_last() {
  _set_bit(1);
  if (last_ == NULL) last_ = new ::ObservationMessage;
  return last_;
}

// -------------------------------------------------------------------

// FallMessage

// required int32 fall = 1 [default = 0];
inline bool FallMessage::has_fall() const {
  return _has_bit(0);
}
inline void FallMessage::clear_fall() {
  fall_ = 0;
  _clear_bit(0);
}
inline ::google::protobuf::int32 FallMessage::fall() const {
  return fall_;
}
inline void FallMessage::set_fall(::google::protobuf::int32 value) {
  _set_bit(0);
  fall_ = value;
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_BehaviorMessages_2eproto__INCLUDED
