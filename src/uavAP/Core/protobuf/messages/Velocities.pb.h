// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Velocities.proto

#ifndef PROTOBUF_INCLUDED_Velocities_2eproto
#define PROTOBUF_INCLUDED_Velocities_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_Velocities_2eproto 

namespace protobuf_Velocities_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_Velocities_2eproto
class VelocityBody;
class VelocityBodyDefaultTypeInternal;
extern VelocityBodyDefaultTypeInternal _VelocityBody_default_instance_;
namespace google {
namespace protobuf {
template<> ::VelocityBody* Arena::CreateMaybeMessage<::VelocityBody>(Arena*);
}  // namespace protobuf
}  // namespace google

// ===================================================================

class VelocityBody : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:VelocityBody) */ {
 public:
  VelocityBody();
  virtual ~VelocityBody();

  VelocityBody(const VelocityBody& from);

  inline VelocityBody& operator=(const VelocityBody& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  VelocityBody(VelocityBody&& from) noexcept
    : VelocityBody() {
    *this = ::std::move(from);
  }

  inline VelocityBody& operator=(VelocityBody&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const VelocityBody& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const VelocityBody* internal_default_instance() {
    return reinterpret_cast<const VelocityBody*>(
               &_VelocityBody_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(VelocityBody* other);
  friend void swap(VelocityBody& a, VelocityBody& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline VelocityBody* New() const final {
    return CreateMaybeMessage<VelocityBody>(NULL);
  }

  VelocityBody* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<VelocityBody>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const VelocityBody& from);
  void MergeFrom(const VelocityBody& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(VelocityBody* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // double velocity_x = 1;
  void clear_velocity_x();
  static const int kVelocityXFieldNumber = 1;
  double velocity_x() const;
  void set_velocity_x(double value);

  // double velocity_y = 2;
  void clear_velocity_y();
  static const int kVelocityYFieldNumber = 2;
  double velocity_y() const;
  void set_velocity_y(double value);

  // double velocity_z = 3;
  void clear_velocity_z();
  static const int kVelocityZFieldNumber = 3;
  double velocity_z() const;
  void set_velocity_z(double value);

  // @@protoc_insertion_point(class_scope:VelocityBody)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  double velocity_x_;
  double velocity_y_;
  double velocity_z_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_Velocities_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// VelocityBody

// double velocity_x = 1;
inline void VelocityBody::clear_velocity_x() {
  velocity_x_ = 0;
}
inline double VelocityBody::velocity_x() const {
  // @@protoc_insertion_point(field_get:VelocityBody.velocity_x)
  return velocity_x_;
}
inline void VelocityBody::set_velocity_x(double value) {
  
  velocity_x_ = value;
  // @@protoc_insertion_point(field_set:VelocityBody.velocity_x)
}

// double velocity_y = 2;
inline void VelocityBody::clear_velocity_y() {
  velocity_y_ = 0;
}
inline double VelocityBody::velocity_y() const {
  // @@protoc_insertion_point(field_get:VelocityBody.velocity_y)
  return velocity_y_;
}
inline void VelocityBody::set_velocity_y(double value) {
  
  velocity_y_ = value;
  // @@protoc_insertion_point(field_set:VelocityBody.velocity_y)
}

// double velocity_z = 3;
inline void VelocityBody::clear_velocity_z() {
  velocity_z_ = 0;
}
inline double VelocityBody::velocity_z() const {
  // @@protoc_insertion_point(field_get:VelocityBody.velocity_z)
  return velocity_z_;
}
inline void VelocityBody::set_velocity_z(double value) {
  
  velocity_z_ = value;
  // @@protoc_insertion_point(field_set:VelocityBody.velocity_z)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_Velocities_2eproto
