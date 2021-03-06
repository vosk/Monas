// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "Kimage.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace {

const ::google::protobuf::Descriptor* KRawImage_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  KRawImage_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* KRawImage_Colorspaces_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* KRawImage_Camera_descriptor_ = NULL;
const ::google::protobuf::Descriptor* KCalibrateCam_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  KCalibrateCam_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_Kimage_2eproto() {
  protobuf_AddDesc_Kimage_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "Kimage.proto");
  GOOGLE_CHECK(file != NULL);
  KRawImage_descriptor_ = file->message_type(0);
  static const int KRawImage_offsets_[8] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(KRawImage, bytes_per_pix_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(KRawImage, width_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(KRawImage, height_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(KRawImage, colorspace_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(KRawImage, image_rawdata_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(KRawImage, exposure_us_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(KRawImage, luminance_scale_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(KRawImage, active_camera_),
  };
  KRawImage_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      KRawImage_descriptor_,
      KRawImage::default_instance_,
      KRawImage_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(KRawImage, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(KRawImage, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(KRawImage));
  KRawImage_Colorspaces_descriptor_ = KRawImage_descriptor_->enum_type(0);
  KRawImage_Camera_descriptor_ = KRawImage_descriptor_->enum_type(1);
  KCalibrateCam_descriptor_ = file->message_type(1);
  static const int KCalibrateCam_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(KCalibrateCam, status_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(KCalibrateCam, sleeptime_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(KCalibrateCam, exp_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(KCalibrateCam, exposure_comp_),
  };
  KCalibrateCam_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      KCalibrateCam_descriptor_,
      KCalibrateCam::default_instance_,
      KCalibrateCam_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(KCalibrateCam, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(KCalibrateCam, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(KCalibrateCam));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_Kimage_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    KRawImage_descriptor_, &KRawImage::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    KCalibrateCam_descriptor_, &KCalibrateCam::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_Kimage_2eproto() {
  delete KRawImage::default_instance_;
  delete KRawImage_reflection_;
  delete KCalibrateCam::default_instance_;
  delete KCalibrateCam_reflection_;
}

void protobuf_AddDesc_Kimage_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\014Kimage.proto\"\245\002\n\tKRawImage\022\025\n\rbytes_pe"
    "r_pix\030\001 \002(\r\022\020\n\005width\030\002 \002(\r:\0010\022\021\n\006height\030"
    "\003 \002(\r:\0010\022*\n\ncolorspace\030\004 \002(\0162\026.KRawImage"
    ".Colorspaces\022\025\n\rimage_rawdata\030\005 \002(\014\022\023\n\013e"
    "xposure_us\030\006 \002(\005\022\027\n\017luminance_scale\030\007 \002("
    "\002\022(\n\ractive_camera\030\010 \002(\0162\021.KRawImage.Cam"
    "era\"\"\n\013Colorspaces\022\010\n\004YUYV\020\001\022\t\n\005OTHER\020\002\""
    "\035\n\006Camera\022\007\n\003TOP\020\000\022\n\n\006BOTTOM\020\001\"c\n\rKCalib"
    "rateCam\022\016\n\006status\030\001 \002(\005\022\027\n\tsleeptime\030\002 \002"
    "(\005:\0041500\022\017\n\003exp\030\003 \002(\005:\00213\022\030\n\rexposure_co"
    "mp\030\004 \002(\002:\0011", 411);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "Kimage.proto", &protobuf_RegisterTypes);
  KRawImage::default_instance_ = new KRawImage();
  KCalibrateCam::default_instance_ = new KCalibrateCam();
  KRawImage::default_instance_->InitAsDefaultInstance();
  KCalibrateCam::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_Kimage_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_Kimage_2eproto {
  StaticDescriptorInitializer_Kimage_2eproto() {
    protobuf_AddDesc_Kimage_2eproto();
  }
} static_descriptor_initializer_Kimage_2eproto_;


// ===================================================================

const ::google::protobuf::EnumDescriptor* KRawImage_Colorspaces_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return KRawImage_Colorspaces_descriptor_;
}
bool KRawImage_Colorspaces_IsValid(int value) {
  switch(value) {
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const KRawImage_Colorspaces KRawImage::YUYV;
const KRawImage_Colorspaces KRawImage::OTHER;
const KRawImage_Colorspaces KRawImage::Colorspaces_MIN;
const KRawImage_Colorspaces KRawImage::Colorspaces_MAX;
const int KRawImage::Colorspaces_ARRAYSIZE;
#endif  // _MSC_VER
const ::google::protobuf::EnumDescriptor* KRawImage_Camera_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return KRawImage_Camera_descriptor_;
}
bool KRawImage_Camera_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const KRawImage_Camera KRawImage::TOP;
const KRawImage_Camera KRawImage::BOTTOM;
const KRawImage_Camera KRawImage::Camera_MIN;
const KRawImage_Camera KRawImage::Camera_MAX;
const int KRawImage::Camera_ARRAYSIZE;
#endif  // _MSC_VER
#ifndef _MSC_VER
const int KRawImage::kBytesPerPixFieldNumber;
const int KRawImage::kWidthFieldNumber;
const int KRawImage::kHeightFieldNumber;
const int KRawImage::kColorspaceFieldNumber;
const int KRawImage::kImageRawdataFieldNumber;
const int KRawImage::kExposureUsFieldNumber;
const int KRawImage::kLuminanceScaleFieldNumber;
const int KRawImage::kActiveCameraFieldNumber;
#endif  // !_MSC_VER

KRawImage::KRawImage()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void KRawImage::InitAsDefaultInstance() {
}

KRawImage::KRawImage(const KRawImage& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void KRawImage::SharedCtor() {
  _cached_size_ = 0;
  bytes_per_pix_ = 0u;
  width_ = 0u;
  height_ = 0u;
  colorspace_ = 1;
  image_rawdata_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  exposure_us_ = 0;
  luminance_scale_ = 0;
  active_camera_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

KRawImage::~KRawImage() {
  SharedDtor();
}

void KRawImage::SharedDtor() {
  if (image_rawdata_ != &::google::protobuf::internal::kEmptyString) {
    delete image_rawdata_;
  }
  if (this != default_instance_) {
  }
}

void KRawImage::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* KRawImage::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return KRawImage_descriptor_;
}

const KRawImage& KRawImage::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_Kimage_2eproto();  return *default_instance_;
}

KRawImage* KRawImage::default_instance_ = NULL;

KRawImage* KRawImage::New() const {
  return new KRawImage;
}

void KRawImage::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    bytes_per_pix_ = 0u;
    width_ = 0u;
    height_ = 0u;
    colorspace_ = 1;
    if (has_image_rawdata()) {
      if (image_rawdata_ != &::google::protobuf::internal::kEmptyString) {
        image_rawdata_->clear();
      }
    }
    exposure_us_ = 0;
    luminance_scale_ = 0;
    active_camera_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool KRawImage::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 bytes_per_pix = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &bytes_per_pix_)));
          set_has_bytes_per_pix();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_width;
        break;
      }
      
      // required uint32 width = 2 [default = 0];
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_width:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &width_)));
          set_has_width();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_height;
        break;
      }
      
      // required uint32 height = 3 [default = 0];
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_height:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &height_)));
          set_has_height();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_colorspace;
        break;
      }
      
      // required .KRawImage.Colorspaces colorspace = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_colorspace:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::KRawImage_Colorspaces_IsValid(value)) {
            set_colorspace(static_cast< ::KRawImage_Colorspaces >(value));
          } else {
            mutable_unknown_fields()->AddVarint(4, value);
          }
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(42)) goto parse_image_rawdata;
        break;
      }
      
      // required bytes image_rawdata = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_image_rawdata:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_image_rawdata()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(48)) goto parse_exposure_us;
        break;
      }
      
      // required int32 exposure_us = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_exposure_us:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &exposure_us_)));
          set_has_exposure_us();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(61)) goto parse_luminance_scale;
        break;
      }
      
      // required float luminance_scale = 7;
      case 7: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
         parse_luminance_scale:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &luminance_scale_)));
          set_has_luminance_scale();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(64)) goto parse_active_camera;
        break;
      }
      
      // required .KRawImage.Camera active_camera = 8;
      case 8: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_active_camera:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::KRawImage_Camera_IsValid(value)) {
            set_active_camera(static_cast< ::KRawImage_Camera >(value));
          } else {
            mutable_unknown_fields()->AddVarint(8, value);
          }
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

void KRawImage::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint32 bytes_per_pix = 1;
  if (has_bytes_per_pix()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->bytes_per_pix(), output);
  }
  
  // required uint32 width = 2 [default = 0];
  if (has_width()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->width(), output);
  }
  
  // required uint32 height = 3 [default = 0];
  if (has_height()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->height(), output);
  }
  
  // required .KRawImage.Colorspaces colorspace = 4;
  if (has_colorspace()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      4, this->colorspace(), output);
  }
  
  // required bytes image_rawdata = 5;
  if (has_image_rawdata()) {
    ::google::protobuf::internal::WireFormatLite::WriteBytes(
      5, this->image_rawdata(), output);
  }
  
  // required int32 exposure_us = 6;
  if (has_exposure_us()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(6, this->exposure_us(), output);
  }
  
  // required float luminance_scale = 7;
  if (has_luminance_scale()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(7, this->luminance_scale(), output);
  }
  
  // required .KRawImage.Camera active_camera = 8;
  if (has_active_camera()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      8, this->active_camera(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* KRawImage::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required uint32 bytes_per_pix = 1;
  if (has_bytes_per_pix()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->bytes_per_pix(), target);
  }
  
  // required uint32 width = 2 [default = 0];
  if (has_width()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->width(), target);
  }
  
  // required uint32 height = 3 [default = 0];
  if (has_height()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, this->height(), target);
  }
  
  // required .KRawImage.Colorspaces colorspace = 4;
  if (has_colorspace()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      4, this->colorspace(), target);
  }
  
  // required bytes image_rawdata = 5;
  if (has_image_rawdata()) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        5, this->image_rawdata(), target);
  }
  
  // required int32 exposure_us = 6;
  if (has_exposure_us()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(6, this->exposure_us(), target);
  }
  
  // required float luminance_scale = 7;
  if (has_luminance_scale()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(7, this->luminance_scale(), target);
  }
  
  // required .KRawImage.Camera active_camera = 8;
  if (has_active_camera()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      8, this->active_camera(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int KRawImage::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 bytes_per_pix = 1;
    if (has_bytes_per_pix()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->bytes_per_pix());
    }
    
    // required uint32 width = 2 [default = 0];
    if (has_width()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->width());
    }
    
    // required uint32 height = 3 [default = 0];
    if (has_height()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->height());
    }
    
    // required .KRawImage.Colorspaces colorspace = 4;
    if (has_colorspace()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->colorspace());
    }
    
    // required bytes image_rawdata = 5;
    if (has_image_rawdata()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->image_rawdata());
    }
    
    // required int32 exposure_us = 6;
    if (has_exposure_us()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->exposure_us());
    }
    
    // required float luminance_scale = 7;
    if (has_luminance_scale()) {
      total_size += 1 + 4;
    }
    
    // required .KRawImage.Camera active_camera = 8;
    if (has_active_camera()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->active_camera());
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

void KRawImage::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const KRawImage* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const KRawImage*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void KRawImage::MergeFrom(const KRawImage& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_bytes_per_pix()) {
      set_bytes_per_pix(from.bytes_per_pix());
    }
    if (from.has_width()) {
      set_width(from.width());
    }
    if (from.has_height()) {
      set_height(from.height());
    }
    if (from.has_colorspace()) {
      set_colorspace(from.colorspace());
    }
    if (from.has_image_rawdata()) {
      set_image_rawdata(from.image_rawdata());
    }
    if (from.has_exposure_us()) {
      set_exposure_us(from.exposure_us());
    }
    if (from.has_luminance_scale()) {
      set_luminance_scale(from.luminance_scale());
    }
    if (from.has_active_camera()) {
      set_active_camera(from.active_camera());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void KRawImage::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void KRawImage::CopyFrom(const KRawImage& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool KRawImage::IsInitialized() const {
  if ((_has_bits_[0] & 0x000000ff) != 0x000000ff) return false;
  
  return true;
}

void KRawImage::Swap(KRawImage* other) {
  if (other != this) {
    std::swap(bytes_per_pix_, other->bytes_per_pix_);
    std::swap(width_, other->width_);
    std::swap(height_, other->height_);
    std::swap(colorspace_, other->colorspace_);
    std::swap(image_rawdata_, other->image_rawdata_);
    std::swap(exposure_us_, other->exposure_us_);
    std::swap(luminance_scale_, other->luminance_scale_);
    std::swap(active_camera_, other->active_camera_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata KRawImage::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = KRawImage_descriptor_;
  metadata.reflection = KRawImage_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int KCalibrateCam::kStatusFieldNumber;
const int KCalibrateCam::kSleeptimeFieldNumber;
const int KCalibrateCam::kExpFieldNumber;
const int KCalibrateCam::kExposureCompFieldNumber;
#endif  // !_MSC_VER

KCalibrateCam::KCalibrateCam()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void KCalibrateCam::InitAsDefaultInstance() {
}

KCalibrateCam::KCalibrateCam(const KCalibrateCam& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void KCalibrateCam::SharedCtor() {
  _cached_size_ = 0;
  status_ = 0;
  sleeptime_ = 1500;
  exp_ = 13;
  exposure_comp_ = 1;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

KCalibrateCam::~KCalibrateCam() {
  SharedDtor();
}

void KCalibrateCam::SharedDtor() {
  if (this != default_instance_) {
  }
}

void KCalibrateCam::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* KCalibrateCam::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return KCalibrateCam_descriptor_;
}

const KCalibrateCam& KCalibrateCam::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_Kimage_2eproto();  return *default_instance_;
}

KCalibrateCam* KCalibrateCam::default_instance_ = NULL;

KCalibrateCam* KCalibrateCam::New() const {
  return new KCalibrateCam;
}

void KCalibrateCam::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    status_ = 0;
    sleeptime_ = 1500;
    exp_ = 13;
    exposure_comp_ = 1;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool KCalibrateCam::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int32 status = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &status_)));
          set_has_status();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_sleeptime;
        break;
      }
      
      // required int32 sleeptime = 2 [default = 1500];
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_sleeptime:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &sleeptime_)));
          set_has_sleeptime();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_exp;
        break;
      }
      
      // required int32 exp = 3 [default = 13];
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_exp:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &exp_)));
          set_has_exp();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(37)) goto parse_exposure_comp;
        break;
      }
      
      // required float exposure_comp = 4 [default = 1];
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
         parse_exposure_comp:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &exposure_comp_)));
          set_has_exposure_comp();
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

void KCalibrateCam::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required int32 status = 1;
  if (has_status()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->status(), output);
  }
  
  // required int32 sleeptime = 2 [default = 1500];
  if (has_sleeptime()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->sleeptime(), output);
  }
  
  // required int32 exp = 3 [default = 13];
  if (has_exp()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->exp(), output);
  }
  
  // required float exposure_comp = 4 [default = 1];
  if (has_exposure_comp()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(4, this->exposure_comp(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* KCalibrateCam::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required int32 status = 1;
  if (has_status()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->status(), target);
  }
  
  // required int32 sleeptime = 2 [default = 1500];
  if (has_sleeptime()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->sleeptime(), target);
  }
  
  // required int32 exp = 3 [default = 13];
  if (has_exp()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->exp(), target);
  }
  
  // required float exposure_comp = 4 [default = 1];
  if (has_exposure_comp()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(4, this->exposure_comp(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int KCalibrateCam::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required int32 status = 1;
    if (has_status()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->status());
    }
    
    // required int32 sleeptime = 2 [default = 1500];
    if (has_sleeptime()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->sleeptime());
    }
    
    // required int32 exp = 3 [default = 13];
    if (has_exp()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->exp());
    }
    
    // required float exposure_comp = 4 [default = 1];
    if (has_exposure_comp()) {
      total_size += 1 + 4;
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

void KCalibrateCam::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const KCalibrateCam* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const KCalibrateCam*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void KCalibrateCam::MergeFrom(const KCalibrateCam& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_status()) {
      set_status(from.status());
    }
    if (from.has_sleeptime()) {
      set_sleeptime(from.sleeptime());
    }
    if (from.has_exp()) {
      set_exp(from.exp());
    }
    if (from.has_exposure_comp()) {
      set_exposure_comp(from.exposure_comp());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void KCalibrateCam::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void KCalibrateCam::CopyFrom(const KCalibrateCam& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool KCalibrateCam::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000000f) != 0x0000000f) return false;
  
  return true;
}

void KCalibrateCam::Swap(KCalibrateCam* other) {
  if (other != this) {
    std::swap(status_, other->status_);
    std::swap(sleeptime_, other->sleeptime_);
    std::swap(exp_, other->exp_);
    std::swap(exposure_comp_, other->exposure_comp_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata KCalibrateCam::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = KCalibrateCam_descriptor_;
  metadata.reflection = KCalibrateCam_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
