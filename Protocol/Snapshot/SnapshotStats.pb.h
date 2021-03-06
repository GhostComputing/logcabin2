// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Protocol/Snapshot/SnapshotStats.proto

#ifndef PROTOBUF_Protocol_2fSnapshot_2fSnapshotStats_2eproto__INCLUDED
#define PROTOBUF_Protocol_2fSnapshot_2fSnapshotStats_2eproto__INCLUDED

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
// @@protoc_insertion_point(includes)

namespace LogCabin {
namespace Server {
namespace SnapshotStats {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_Protocol_2fSnapshot_2fSnapshotStats_2eproto();
void protobuf_AssignDesc_Protocol_2fSnapshot_2fSnapshotStats_2eproto();
void protobuf_ShutdownFile_Protocol_2fSnapshot_2fSnapshotStats_2eproto();

class SnapshotStats;

// ===================================================================

class SnapshotStats : public ::google::protobuf::Message {
 public:
  SnapshotStats();
  virtual ~SnapshotStats();

  SnapshotStats(const SnapshotStats& from);

  inline SnapshotStats& operator=(const SnapshotStats& from) {
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
  static const SnapshotStats& default_instance();

  void Swap(SnapshotStats* other);

  // implements Message ----------------------------------------------

  SnapshotStats* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SnapshotStats& from);
  void MergeFrom(const SnapshotStats& from);
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

  // optional uint64 last_snapshot_index = 1;
  inline bool has_last_snapshot_index() const;
  inline void clear_last_snapshot_index();
  static const int kLastSnapshotIndexFieldNumber = 1;
  inline ::google::protobuf::uint64 last_snapshot_index() const;
  inline void set_last_snapshot_index(::google::protobuf::uint64 value);

  // optional uint64 last_snapshot_bytes = 2;
  inline bool has_last_snapshot_bytes() const;
  inline void clear_last_snapshot_bytes();
  static const int kLastSnapshotBytesFieldNumber = 2;
  inline ::google::protobuf::uint64 last_snapshot_bytes() const;
  inline void set_last_snapshot_bytes(::google::protobuf::uint64 value);

  // optional uint64 log_start_index = 3;
  inline bool has_log_start_index() const;
  inline void clear_log_start_index();
  static const int kLogStartIndexFieldNumber = 3;
  inline ::google::protobuf::uint64 log_start_index() const;
  inline void set_log_start_index(::google::protobuf::uint64 value);

  // optional uint64 last_log_index = 4;
  inline bool has_last_log_index() const;
  inline void clear_last_log_index();
  static const int kLastLogIndexFieldNumber = 4;
  inline ::google::protobuf::uint64 last_log_index() const;
  inline void set_last_log_index(::google::protobuf::uint64 value);

  // optional uint64 log_bytes = 5;
  inline bool has_log_bytes() const;
  inline void clear_log_bytes();
  static const int kLogBytesFieldNumber = 5;
  inline ::google::protobuf::uint64 log_bytes() const;
  inline void set_log_bytes(::google::protobuf::uint64 value);

  // optional bool is_leader = 6;
  inline bool has_is_leader() const;
  inline void clear_is_leader();
  static const int kIsLeaderFieldNumber = 6;
  inline bool is_leader() const;
  inline void set_is_leader(bool value);

  // @@protoc_insertion_point(class_scope:LogCabin.Server.SnapshotStats.SnapshotStats)
 private:
  inline void set_has_last_snapshot_index();
  inline void clear_has_last_snapshot_index();
  inline void set_has_last_snapshot_bytes();
  inline void clear_has_last_snapshot_bytes();
  inline void set_has_log_start_index();
  inline void clear_has_log_start_index();
  inline void set_has_last_log_index();
  inline void clear_has_last_log_index();
  inline void set_has_log_bytes();
  inline void clear_has_log_bytes();
  inline void set_has_is_leader();
  inline void clear_has_is_leader();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::uint64 last_snapshot_index_;
  ::google::protobuf::uint64 last_snapshot_bytes_;
  ::google::protobuf::uint64 log_start_index_;
  ::google::protobuf::uint64 last_log_index_;
  ::google::protobuf::uint64 log_bytes_;
  bool is_leader_;
  friend void  protobuf_AddDesc_Protocol_2fSnapshot_2fSnapshotStats_2eproto();
  friend void protobuf_AssignDesc_Protocol_2fSnapshot_2fSnapshotStats_2eproto();
  friend void protobuf_ShutdownFile_Protocol_2fSnapshot_2fSnapshotStats_2eproto();

  void InitAsDefaultInstance();
  static SnapshotStats* default_instance_;
};
// ===================================================================


// ===================================================================

// SnapshotStats

// optional uint64 last_snapshot_index = 1;
inline bool SnapshotStats::has_last_snapshot_index() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SnapshotStats::set_has_last_snapshot_index() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SnapshotStats::clear_has_last_snapshot_index() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SnapshotStats::clear_last_snapshot_index() {
  last_snapshot_index_ = GOOGLE_ULONGLONG(0);
  clear_has_last_snapshot_index();
}
inline ::google::protobuf::uint64 SnapshotStats::last_snapshot_index() const {
  // @@protoc_insertion_point(field_get:LogCabin.Server.SnapshotStats.SnapshotStats.last_snapshot_index)
  return last_snapshot_index_;
}
inline void SnapshotStats::set_last_snapshot_index(::google::protobuf::uint64 value) {
  set_has_last_snapshot_index();
  last_snapshot_index_ = value;
  // @@protoc_insertion_point(field_set:LogCabin.Server.SnapshotStats.SnapshotStats.last_snapshot_index)
}

// optional uint64 last_snapshot_bytes = 2;
inline bool SnapshotStats::has_last_snapshot_bytes() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SnapshotStats::set_has_last_snapshot_bytes() {
  _has_bits_[0] |= 0x00000002u;
}
inline void SnapshotStats::clear_has_last_snapshot_bytes() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void SnapshotStats::clear_last_snapshot_bytes() {
  last_snapshot_bytes_ = GOOGLE_ULONGLONG(0);
  clear_has_last_snapshot_bytes();
}
inline ::google::protobuf::uint64 SnapshotStats::last_snapshot_bytes() const {
  // @@protoc_insertion_point(field_get:LogCabin.Server.SnapshotStats.SnapshotStats.last_snapshot_bytes)
  return last_snapshot_bytes_;
}
inline void SnapshotStats::set_last_snapshot_bytes(::google::protobuf::uint64 value) {
  set_has_last_snapshot_bytes();
  last_snapshot_bytes_ = value;
  // @@protoc_insertion_point(field_set:LogCabin.Server.SnapshotStats.SnapshotStats.last_snapshot_bytes)
}

// optional uint64 log_start_index = 3;
inline bool SnapshotStats::has_log_start_index() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void SnapshotStats::set_has_log_start_index() {
  _has_bits_[0] |= 0x00000004u;
}
inline void SnapshotStats::clear_has_log_start_index() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void SnapshotStats::clear_log_start_index() {
  log_start_index_ = GOOGLE_ULONGLONG(0);
  clear_has_log_start_index();
}
inline ::google::protobuf::uint64 SnapshotStats::log_start_index() const {
  // @@protoc_insertion_point(field_get:LogCabin.Server.SnapshotStats.SnapshotStats.log_start_index)
  return log_start_index_;
}
inline void SnapshotStats::set_log_start_index(::google::protobuf::uint64 value) {
  set_has_log_start_index();
  log_start_index_ = value;
  // @@protoc_insertion_point(field_set:LogCabin.Server.SnapshotStats.SnapshotStats.log_start_index)
}

// optional uint64 last_log_index = 4;
inline bool SnapshotStats::has_last_log_index() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void SnapshotStats::set_has_last_log_index() {
  _has_bits_[0] |= 0x00000008u;
}
inline void SnapshotStats::clear_has_last_log_index() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void SnapshotStats::clear_last_log_index() {
  last_log_index_ = GOOGLE_ULONGLONG(0);
  clear_has_last_log_index();
}
inline ::google::protobuf::uint64 SnapshotStats::last_log_index() const {
  // @@protoc_insertion_point(field_get:LogCabin.Server.SnapshotStats.SnapshotStats.last_log_index)
  return last_log_index_;
}
inline void SnapshotStats::set_last_log_index(::google::protobuf::uint64 value) {
  set_has_last_log_index();
  last_log_index_ = value;
  // @@protoc_insertion_point(field_set:LogCabin.Server.SnapshotStats.SnapshotStats.last_log_index)
}

// optional uint64 log_bytes = 5;
inline bool SnapshotStats::has_log_bytes() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void SnapshotStats::set_has_log_bytes() {
  _has_bits_[0] |= 0x00000010u;
}
inline void SnapshotStats::clear_has_log_bytes() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void SnapshotStats::clear_log_bytes() {
  log_bytes_ = GOOGLE_ULONGLONG(0);
  clear_has_log_bytes();
}
inline ::google::protobuf::uint64 SnapshotStats::log_bytes() const {
  // @@protoc_insertion_point(field_get:LogCabin.Server.SnapshotStats.SnapshotStats.log_bytes)
  return log_bytes_;
}
inline void SnapshotStats::set_log_bytes(::google::protobuf::uint64 value) {
  set_has_log_bytes();
  log_bytes_ = value;
  // @@protoc_insertion_point(field_set:LogCabin.Server.SnapshotStats.SnapshotStats.log_bytes)
}

// optional bool is_leader = 6;
inline bool SnapshotStats::has_is_leader() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void SnapshotStats::set_has_is_leader() {
  _has_bits_[0] |= 0x00000020u;
}
inline void SnapshotStats::clear_has_is_leader() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void SnapshotStats::clear_is_leader() {
  is_leader_ = false;
  clear_has_is_leader();
}
inline bool SnapshotStats::is_leader() const {
  // @@protoc_insertion_point(field_get:LogCabin.Server.SnapshotStats.SnapshotStats.is_leader)
  return is_leader_;
}
inline void SnapshotStats::set_is_leader(bool value) {
  set_has_is_leader();
  is_leader_ = value;
  // @@protoc_insertion_point(field_set:LogCabin.Server.SnapshotStats.SnapshotStats.is_leader)
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace SnapshotStats
}  // namespace Server
}  // namespace LogCabin

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_Protocol_2fSnapshot_2fSnapshotStats_2eproto__INCLUDED
