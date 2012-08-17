// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: timeout.proto

#ifndef PROTOBUF_timeout_2eproto__INCLUDED
#define PROTOBUF_timeout_2eproto__INCLUDED

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
void  protobuf_AddDesc_timeout_2eproto();
void protobuf_AssignDesc_timeout_2eproto();
void protobuf_ShutdownFile_timeout_2eproto();

class TimeoutMsg;

// ===================================================================

class TimeoutMsg : public ::google::protobuf::Message
{
public:
	TimeoutMsg();
	virtual ~TimeoutMsg();

	TimeoutMsg(const TimeoutMsg& from);

	inline TimeoutMsg& operator=(const TimeoutMsg& from)
	{
		CopyFrom(from);
		return *this;
	}

	inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const
	{
		return _unknown_fields_;
	}

	inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields()
	{
		return &_unknown_fields_;
	}

	static const ::google::protobuf::Descriptor* descriptor();
	static const TimeoutMsg& default_instance();

	void Swap(TimeoutMsg* other);

	// implements Message ----------------------------------------------

	TimeoutMsg* New() const;
	void CopyFrom(const ::google::protobuf::Message& from);
	void MergeFrom(const ::google::protobuf::Message& from);
	void CopyFrom(const TimeoutMsg& from);
	void MergeFrom(const TimeoutMsg& from);
	void Clear();
	bool IsInitialized() const;

	int ByteSize() const;
	bool MergePartialFromCodedStream(
	    ::google::protobuf::io::CodedInputStream* input);
	void SerializeWithCachedSizes(
	    ::google::protobuf::io::CodedOutputStream* output) const;
	::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
	int GetCachedSize() const
	{
		return _cached_size_;
	}
private:
	void SharedCtor();
	void SharedDtor();
	void SetCachedSize(int size) const;
public:

	::google::protobuf::Metadata GetMetadata() const;

	// nested types ----------------------------------------------------

	// accessors -------------------------------------------------------

	// required string wakeup = 1;
	inline bool has_wakeup() const;
	inline void clear_wakeup();
	static const int kWakeupFieldNumber = 1;
	inline const ::std::string& wakeup() const;
	inline void set_wakeup(const ::std::string& value);
	inline void set_wakeup(const char* value);
	inline void set_wakeup(const char* value, size_t size);
	inline ::std::string* mutable_wakeup();
	inline ::std::string* release_wakeup();

	// @@protoc_insertion_point(class_scope:TimeoutMsg)
private:
	inline void set_has_wakeup();
	inline void clear_has_wakeup();

	::google::protobuf::UnknownFieldSet _unknown_fields_;

	::std::string* wakeup_;

	mutable int _cached_size_;
	::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

	friend void  protobuf_AddDesc_timeout_2eproto();
	friend void protobuf_AssignDesc_timeout_2eproto();
	friend void protobuf_ShutdownFile_timeout_2eproto();

	void InitAsDefaultInstance();
	static TimeoutMsg* default_instance_;
};
// ===================================================================


// ===================================================================

// TimeoutMsg

// required string wakeup = 1;
inline bool TimeoutMsg::has_wakeup() const
{
	return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void TimeoutMsg::set_has_wakeup()
{
	_has_bits_[0] |= 0x00000001u;
}
inline void TimeoutMsg::clear_has_wakeup()
{
	_has_bits_[0] &= ~0x00000001u;
}
inline void TimeoutMsg::clear_wakeup()
{
	if (wakeup_ != &::google::protobuf::internal::kEmptyString)
	{
		wakeup_->clear();
	}

	clear_has_wakeup();
}
inline const ::std::string& TimeoutMsg::wakeup() const
{
	return *wakeup_;
}
inline void TimeoutMsg::set_wakeup(const ::std::string& value)
{
	set_has_wakeup();

	if (wakeup_ == &::google::protobuf::internal::kEmptyString)
	{
		wakeup_ = new ::std::string;
	}

	wakeup_->assign(value);
}
inline void TimeoutMsg::set_wakeup(const char* value)
{
	set_has_wakeup();

	if (wakeup_ == &::google::protobuf::internal::kEmptyString)
	{
		wakeup_ = new ::std::string;
	}

	wakeup_->assign(value);
}
inline void TimeoutMsg::set_wakeup(const char* value, size_t size)
{
	set_has_wakeup();

	if (wakeup_ == &::google::protobuf::internal::kEmptyString)
	{
		wakeup_ = new ::std::string;
	}

	wakeup_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* TimeoutMsg::mutable_wakeup()
{
	set_has_wakeup();

	if (wakeup_ == &::google::protobuf::internal::kEmptyString)
	{
		wakeup_ = new ::std::string;
	}

	return wakeup_;
}
inline ::std::string* TimeoutMsg::release_wakeup()
{
	clear_has_wakeup();

	if (wakeup_ == &::google::protobuf::internal::kEmptyString)
	{
		return NULL;
	}
	else
	{
		::std::string* temp = wakeup_;
		wakeup_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
		return temp;
	}
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google
{
	namespace protobuf
	{


	}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_timeout_2eproto__INCLUDED
