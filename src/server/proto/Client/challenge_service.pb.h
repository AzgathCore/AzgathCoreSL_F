// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: challenge_service.proto

#ifndef PROTOBUF_challenge_5fservice_2eproto__INCLUDED
#define PROTOBUF_challenge_5fservice_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include "rpc_types.pb.h"
#include "ServiceBase.h"
#include "MessageBuffer.h"
#include <functional>
#include <type_traits>
// @@protoc_insertion_point(includes)

namespace bgs {
namespace protocol {
namespace challenge {
namespace v1 {

// Internal implementation detail -- do not call these.
void TC_PROTO_API protobuf_AddDesc_challenge_5fservice_2eproto();
void protobuf_AssignDesc_challenge_5fservice_2eproto();
void protobuf_ShutdownFile_challenge_5fservice_2eproto();

class ChallengeExternalRequest;
class ChallengeExternalResult;

// ===================================================================

class TC_PROTO_API ChallengeExternalRequest : public ::google::protobuf::Message {
 public:
  ChallengeExternalRequest();
  virtual ~ChallengeExternalRequest();

  ChallengeExternalRequest(const ChallengeExternalRequest& from);

  inline ChallengeExternalRequest& operator=(const ChallengeExternalRequest& from) {
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
  static const ChallengeExternalRequest& default_instance();

  void Swap(ChallengeExternalRequest* other);

  // implements Message ----------------------------------------------

  ChallengeExternalRequest* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ChallengeExternalRequest& from);
  void MergeFrom(const ChallengeExternalRequest& from);
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

  // optional string request_token = 1;
  inline bool has_request_token() const;
  inline void clear_request_token();
  static const int kRequestTokenFieldNumber = 1;
  inline const ::std::string& request_token() const;
  inline void set_request_token(const ::std::string& value);
  inline void set_request_token(const char* value);
  inline void set_request_token(const char* value, size_t size);
  inline ::std::string* mutable_request_token();
  inline ::std::string* release_request_token();
  inline void set_allocated_request_token(::std::string* request_token);

  // optional string payload_type = 2;
  inline bool has_payload_type() const;
  inline void clear_payload_type();
  static const int kPayloadTypeFieldNumber = 2;
  inline const ::std::string& payload_type() const;
  inline void set_payload_type(const ::std::string& value);
  inline void set_payload_type(const char* value);
  inline void set_payload_type(const char* value, size_t size);
  inline ::std::string* mutable_payload_type();
  inline ::std::string* release_payload_type();
  inline void set_allocated_payload_type(::std::string* payload_type);

  // optional bytes payload = 3;
  inline bool has_payload() const;
  inline void clear_payload();
  static const int kPayloadFieldNumber = 3;
  inline const ::std::string& payload() const;
  inline void set_payload(const ::std::string& value);
  inline void set_payload(const char* value);
  inline void set_payload(const void* value, size_t size);
  inline ::std::string* mutable_payload();
  inline ::std::string* release_payload();
  inline void set_allocated_payload(::std::string* payload);

  // @@protoc_insertion_point(class_scope:bgs.protocol.challenge.v1.ChallengeExternalRequest)
 private:
  inline void set_has_request_token();
  inline void clear_has_request_token();
  inline void set_has_payload_type();
  inline void clear_has_payload_type();
  inline void set_has_payload();
  inline void clear_has_payload();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* request_token_;
  ::std::string* payload_type_;
  ::std::string* payload_;
  friend void TC_PROTO_API protobuf_AddDesc_challenge_5fservice_2eproto();
  friend void protobuf_AssignDesc_challenge_5fservice_2eproto();
  friend void protobuf_ShutdownFile_challenge_5fservice_2eproto();

  void InitAsDefaultInstance();
  static ChallengeExternalRequest* default_instance_;
};
// -------------------------------------------------------------------

class TC_PROTO_API ChallengeExternalResult : public ::google::protobuf::Message {
 public:
  ChallengeExternalResult();
  virtual ~ChallengeExternalResult();

  ChallengeExternalResult(const ChallengeExternalResult& from);

  inline ChallengeExternalResult& operator=(const ChallengeExternalResult& from) {
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
  static const ChallengeExternalResult& default_instance();

  void Swap(ChallengeExternalResult* other);

  // implements Message ----------------------------------------------

  ChallengeExternalResult* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ChallengeExternalResult& from);
  void MergeFrom(const ChallengeExternalResult& from);
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

  // optional string request_token = 1;
  inline bool has_request_token() const;
  inline void clear_request_token();
  static const int kRequestTokenFieldNumber = 1;
  inline const ::std::string& request_token() const;
  inline void set_request_token(const ::std::string& value);
  inline void set_request_token(const char* value);
  inline void set_request_token(const char* value, size_t size);
  inline ::std::string* mutable_request_token();
  inline ::std::string* release_request_token();
  inline void set_allocated_request_token(::std::string* request_token);

  // optional bool passed = 2 [default = true];
  inline bool has_passed() const;
  inline void clear_passed();
  static const int kPassedFieldNumber = 2;
  inline bool passed() const;
  inline void set_passed(bool value);

  // @@protoc_insertion_point(class_scope:bgs.protocol.challenge.v1.ChallengeExternalResult)
 private:
  inline void set_has_request_token();
  inline void clear_has_request_token();
  inline void set_has_passed();
  inline void clear_has_passed();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* request_token_;
  bool passed_;
  friend void TC_PROTO_API protobuf_AddDesc_challenge_5fservice_2eproto();
  friend void protobuf_AssignDesc_challenge_5fservice_2eproto();
  friend void protobuf_ShutdownFile_challenge_5fservice_2eproto();

  void InitAsDefaultInstance();
  static ChallengeExternalResult* default_instance_;
};
// ===================================================================

class TC_PROTO_API ChallengeListener : public ServiceBase
{
 public:

  explicit ChallengeListener(bool use_original_hash);
  virtual ~ChallengeListener();

  typedef std::integral_constant<uint32, 0xBBDA171Fu> OriginalHash;
  typedef std::integral_constant<uint32, 0xC6D90AB8u> NameHash;

  static google::protobuf::ServiceDescriptor const* descriptor();

  // client methods --------------------------------------------------
  void OnExternalChallenge(::bgs::protocol::challenge::v1::ChallengeExternalRequest const* request, bool client = false, bool server = false);
  void OnExternalChallengeResult(::bgs::protocol::challenge::v1::ChallengeExternalResult const* request, bool client = false, bool server = false);

  void CallServerMethod(uint32 token, uint32 methodId, MessageBuffer buffer) final;

 private:
  uint32 service_hash_;

  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(ChallengeListener);
};

// ===================================================================

// ===================================================================

// ChallengeExternalRequest

// optional string request_token = 1;
inline bool ChallengeExternalRequest::has_request_token() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ChallengeExternalRequest::set_has_request_token() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ChallengeExternalRequest::clear_has_request_token() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ChallengeExternalRequest::clear_request_token() {
  if (request_token_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    request_token_->clear();
  }
  clear_has_request_token();
}
inline const ::std::string& ChallengeExternalRequest::request_token() const {
  // @@protoc_insertion_point(field_get:bgs.protocol.challenge.v1.ChallengeExternalRequest.request_token)
  return *request_token_;
}
inline void ChallengeExternalRequest::set_request_token(const ::std::string& value) {
  set_has_request_token();
  if (request_token_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    request_token_ = new ::std::string;
  }
  request_token_->assign(value);
  // @@protoc_insertion_point(field_set:bgs.protocol.challenge.v1.ChallengeExternalRequest.request_token)
}
inline void ChallengeExternalRequest::set_request_token(const char* value) {
  set_has_request_token();
  if (request_token_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    request_token_ = new ::std::string;
  }
  request_token_->assign(value);
  // @@protoc_insertion_point(field_set_char:bgs.protocol.challenge.v1.ChallengeExternalRequest.request_token)
}
inline void ChallengeExternalRequest::set_request_token(const char* value, size_t size) {
  set_has_request_token();
  if (request_token_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    request_token_ = new ::std::string;
  }
  request_token_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:bgs.protocol.challenge.v1.ChallengeExternalRequest.request_token)
}
inline ::std::string* ChallengeExternalRequest::mutable_request_token() {
  set_has_request_token();
  if (request_token_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    request_token_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:bgs.protocol.challenge.v1.ChallengeExternalRequest.request_token)
  return request_token_;
}
inline ::std::string* ChallengeExternalRequest::release_request_token() {
  clear_has_request_token();
  if (request_token_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = request_token_;
    request_token_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void ChallengeExternalRequest::set_allocated_request_token(::std::string* request_token) {
  if (request_token_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete request_token_;
  }
  if (request_token) {
    set_has_request_token();
    request_token_ = request_token;
  } else {
    clear_has_request_token();
    request_token_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:bgs.protocol.challenge.v1.ChallengeExternalRequest.request_token)
}

// optional string payload_type = 2;
inline bool ChallengeExternalRequest::has_payload_type() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ChallengeExternalRequest::set_has_payload_type() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ChallengeExternalRequest::clear_has_payload_type() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ChallengeExternalRequest::clear_payload_type() {
  if (payload_type_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    payload_type_->clear();
  }
  clear_has_payload_type();
}
inline const ::std::string& ChallengeExternalRequest::payload_type() const {
  // @@protoc_insertion_point(field_get:bgs.protocol.challenge.v1.ChallengeExternalRequest.payload_type)
  return *payload_type_;
}
inline void ChallengeExternalRequest::set_payload_type(const ::std::string& value) {
  set_has_payload_type();
  if (payload_type_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    payload_type_ = new ::std::string;
  }
  payload_type_->assign(value);
  // @@protoc_insertion_point(field_set:bgs.protocol.challenge.v1.ChallengeExternalRequest.payload_type)
}
inline void ChallengeExternalRequest::set_payload_type(const char* value) {
  set_has_payload_type();
  if (payload_type_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    payload_type_ = new ::std::string;
  }
  payload_type_->assign(value);
  // @@protoc_insertion_point(field_set_char:bgs.protocol.challenge.v1.ChallengeExternalRequest.payload_type)
}
inline void ChallengeExternalRequest::set_payload_type(const char* value, size_t size) {
  set_has_payload_type();
  if (payload_type_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    payload_type_ = new ::std::string;
  }
  payload_type_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:bgs.protocol.challenge.v1.ChallengeExternalRequest.payload_type)
}
inline ::std::string* ChallengeExternalRequest::mutable_payload_type() {
  set_has_payload_type();
  if (payload_type_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    payload_type_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:bgs.protocol.challenge.v1.ChallengeExternalRequest.payload_type)
  return payload_type_;
}
inline ::std::string* ChallengeExternalRequest::release_payload_type() {
  clear_has_payload_type();
  if (payload_type_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = payload_type_;
    payload_type_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void ChallengeExternalRequest::set_allocated_payload_type(::std::string* payload_type) {
  if (payload_type_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete payload_type_;
  }
  if (payload_type) {
    set_has_payload_type();
    payload_type_ = payload_type;
  } else {
    clear_has_payload_type();
    payload_type_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:bgs.protocol.challenge.v1.ChallengeExternalRequest.payload_type)
}

// optional bytes payload = 3;
inline bool ChallengeExternalRequest::has_payload() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void ChallengeExternalRequest::set_has_payload() {
  _has_bits_[0] |= 0x00000004u;
}
inline void ChallengeExternalRequest::clear_has_payload() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void ChallengeExternalRequest::clear_payload() {
  if (payload_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    payload_->clear();
  }
  clear_has_payload();
}
inline const ::std::string& ChallengeExternalRequest::payload() const {
  // @@protoc_insertion_point(field_get:bgs.protocol.challenge.v1.ChallengeExternalRequest.payload)
  return *payload_;
}
inline void ChallengeExternalRequest::set_payload(const ::std::string& value) {
  set_has_payload();
  if (payload_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    payload_ = new ::std::string;
  }
  payload_->assign(value);
  // @@protoc_insertion_point(field_set:bgs.protocol.challenge.v1.ChallengeExternalRequest.payload)
}
inline void ChallengeExternalRequest::set_payload(const char* value) {
  set_has_payload();
  if (payload_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    payload_ = new ::std::string;
  }
  payload_->assign(value);
  // @@protoc_insertion_point(field_set_char:bgs.protocol.challenge.v1.ChallengeExternalRequest.payload)
}
inline void ChallengeExternalRequest::set_payload(const void* value, size_t size) {
  set_has_payload();
  if (payload_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    payload_ = new ::std::string;
  }
  payload_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:bgs.protocol.challenge.v1.ChallengeExternalRequest.payload)
}
inline ::std::string* ChallengeExternalRequest::mutable_payload() {
  set_has_payload();
  if (payload_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    payload_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:bgs.protocol.challenge.v1.ChallengeExternalRequest.payload)
  return payload_;
}
inline ::std::string* ChallengeExternalRequest::release_payload() {
  clear_has_payload();
  if (payload_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = payload_;
    payload_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void ChallengeExternalRequest::set_allocated_payload(::std::string* payload) {
  if (payload_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete payload_;
  }
  if (payload) {
    set_has_payload();
    payload_ = payload;
  } else {
    clear_has_payload();
    payload_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:bgs.protocol.challenge.v1.ChallengeExternalRequest.payload)
}

// -------------------------------------------------------------------

// ChallengeExternalResult

// optional string request_token = 1;
inline bool ChallengeExternalResult::has_request_token() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ChallengeExternalResult::set_has_request_token() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ChallengeExternalResult::clear_has_request_token() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ChallengeExternalResult::clear_request_token() {
  if (request_token_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    request_token_->clear();
  }
  clear_has_request_token();
}
inline const ::std::string& ChallengeExternalResult::request_token() const {
  // @@protoc_insertion_point(field_get:bgs.protocol.challenge.v1.ChallengeExternalResult.request_token)
  return *request_token_;
}
inline void ChallengeExternalResult::set_request_token(const ::std::string& value) {
  set_has_request_token();
  if (request_token_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    request_token_ = new ::std::string;
  }
  request_token_->assign(value);
  // @@protoc_insertion_point(field_set:bgs.protocol.challenge.v1.ChallengeExternalResult.request_token)
}
inline void ChallengeExternalResult::set_request_token(const char* value) {
  set_has_request_token();
  if (request_token_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    request_token_ = new ::std::string;
  }
  request_token_->assign(value);
  // @@protoc_insertion_point(field_set_char:bgs.protocol.challenge.v1.ChallengeExternalResult.request_token)
}
inline void ChallengeExternalResult::set_request_token(const char* value, size_t size) {
  set_has_request_token();
  if (request_token_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    request_token_ = new ::std::string;
  }
  request_token_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:bgs.protocol.challenge.v1.ChallengeExternalResult.request_token)
}
inline ::std::string* ChallengeExternalResult::mutable_request_token() {
  set_has_request_token();
  if (request_token_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    request_token_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:bgs.protocol.challenge.v1.ChallengeExternalResult.request_token)
  return request_token_;
}
inline ::std::string* ChallengeExternalResult::release_request_token() {
  clear_has_request_token();
  if (request_token_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = request_token_;
    request_token_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void ChallengeExternalResult::set_allocated_request_token(::std::string* request_token) {
  if (request_token_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete request_token_;
  }
  if (request_token) {
    set_has_request_token();
    request_token_ = request_token;
  } else {
    clear_has_request_token();
    request_token_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:bgs.protocol.challenge.v1.ChallengeExternalResult.request_token)
}

// optional bool passed = 2 [default = true];
inline bool ChallengeExternalResult::has_passed() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ChallengeExternalResult::set_has_passed() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ChallengeExternalResult::clear_has_passed() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ChallengeExternalResult::clear_passed() {
  passed_ = true;
  clear_has_passed();
}
inline bool ChallengeExternalResult::passed() const {
  // @@protoc_insertion_point(field_get:bgs.protocol.challenge.v1.ChallengeExternalResult.passed)
  return passed_;
}
inline void ChallengeExternalResult::set_passed(bool value) {
  set_has_passed();
  passed_ = value;
  // @@protoc_insertion_point(field_set:bgs.protocol.challenge.v1.ChallengeExternalResult.passed)
}

// @@protoc_insertion_point(namespace_scope)

}  // namespace v1
}  // namespace challenge
}  // namespace protocol
}  // namespace bgs

#ifndef SWIG
namespace google {
namespace protobuf {
}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_challenge_5fservice_2eproto__INCLUDED
