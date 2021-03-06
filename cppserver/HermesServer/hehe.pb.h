// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: hehe.proto

#ifndef PROTOBUF_hehe_2eproto__INCLUDED
#define PROTOBUF_hehe_2eproto__INCLUDED

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
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
// @@protoc_insertion_point(includes)

namespace example {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_hehe_2eproto();
void protobuf_AssignDesc_hehe_2eproto();
void protobuf_ShutdownFile_hehe_2eproto();

class LogonReqMessage;

// ===================================================================

class LogonReqMessage : public ::google::protobuf::MessageLite {
 public:
  LogonReqMessage();
  virtual ~LogonReqMessage();

  LogonReqMessage(const LogonReqMessage& from);

  inline LogonReqMessage& operator=(const LogonReqMessage& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::std::string& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::std::string* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const LogonReqMessage& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const LogonReqMessage* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(LogonReqMessage* other);

  // implements Message ----------------------------------------------

  LogonReqMessage* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const LogonReqMessage& from);
  void MergeFrom(const LogonReqMessage& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  void DiscardUnknownFields();
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int64 acctID = 1;
  inline bool has_acctid() const;
  inline void clear_acctid();
  static const int kAcctIDFieldNumber = 1;
  inline ::google::protobuf::int64 acctid() const;
  inline void set_acctid(::google::protobuf::int64 value);

  // required string passwd = 2;
  inline bool has_passwd() const;
  inline void clear_passwd();
  static const int kPasswdFieldNumber = 2;
  inline const ::std::string& passwd() const;
  inline void set_passwd(const ::std::string& value);
  inline void set_passwd(const char* value);
  inline void set_passwd(const char* value, size_t size);
  inline ::std::string* mutable_passwd();
  inline ::std::string* release_passwd();
  inline void set_allocated_passwd(::std::string* passwd);

  // @@protoc_insertion_point(class_scope:example.LogonReqMessage)
 private:
  inline void set_has_acctid();
  inline void clear_has_acctid();
  inline void set_has_passwd();
  inline void clear_has_passwd();

  ::std::string _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::int64 acctid_;
  ::std::string* passwd_;
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_hehe_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_hehe_2eproto();
  #endif
  friend void protobuf_AssignDesc_hehe_2eproto();
  friend void protobuf_ShutdownFile_hehe_2eproto();

  void InitAsDefaultInstance();
  static LogonReqMessage* default_instance_;
};
// ===================================================================


// ===================================================================

// LogonReqMessage

// required int64 acctID = 1;
inline bool LogonReqMessage::has_acctid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void LogonReqMessage::set_has_acctid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void LogonReqMessage::clear_has_acctid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void LogonReqMessage::clear_acctid() {
  acctid_ = GOOGLE_LONGLONG(0);
  clear_has_acctid();
}
inline ::google::protobuf::int64 LogonReqMessage::acctid() const {
  // @@protoc_insertion_point(field_get:example.LogonReqMessage.acctID)
  return acctid_;
}
inline void LogonReqMessage::set_acctid(::google::protobuf::int64 value) {
  set_has_acctid();
  acctid_ = value;
  // @@protoc_insertion_point(field_set:example.LogonReqMessage.acctID)
}

// required string passwd = 2;
inline bool LogonReqMessage::has_passwd() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void LogonReqMessage::set_has_passwd() {
  _has_bits_[0] |= 0x00000002u;
}
inline void LogonReqMessage::clear_has_passwd() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void LogonReqMessage::clear_passwd() {
  if (passwd_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    passwd_->clear();
  }
  clear_has_passwd();
}
inline const ::std::string& LogonReqMessage::passwd() const {
  // @@protoc_insertion_point(field_get:example.LogonReqMessage.passwd)
  return *passwd_;
}
inline void LogonReqMessage::set_passwd(const ::std::string& value) {
  set_has_passwd();
  if (passwd_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    passwd_ = new ::std::string;
  }
  passwd_->assign(value);
  // @@protoc_insertion_point(field_set:example.LogonReqMessage.passwd)
}
inline void LogonReqMessage::set_passwd(const char* value) {
  set_has_passwd();
  if (passwd_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    passwd_ = new ::std::string;
  }
  passwd_->assign(value);
  // @@protoc_insertion_point(field_set_char:example.LogonReqMessage.passwd)
}
inline void LogonReqMessage::set_passwd(const char* value, size_t size) {
  set_has_passwd();
  if (passwd_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    passwd_ = new ::std::string;
  }
  passwd_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:example.LogonReqMessage.passwd)
}
inline ::std::string* LogonReqMessage::mutable_passwd() {
  set_has_passwd();
  if (passwd_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    passwd_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:example.LogonReqMessage.passwd)
  return passwd_;
}
inline ::std::string* LogonReqMessage::release_passwd() {
  clear_has_passwd();
  if (passwd_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = passwd_;
    passwd_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void LogonReqMessage::set_allocated_passwd(::std::string* passwd) {
  if (passwd_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete passwd_;
  }
  if (passwd) {
    set_has_passwd();
    passwd_ = passwd;
  } else {
    clear_has_passwd();
    passwd_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:example.LogonReqMessage.passwd)
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace example

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_hehe_2eproto__INCLUDED
