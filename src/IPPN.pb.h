// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: IPPN.proto

#ifndef PROTOBUF_INCLUDED_IPPN_2eproto
#define PROTOBUF_INCLUDED_IPPN_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
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
#include "Common.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_IPPN_2eproto 

namespace protobuf_IPPN_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[4];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_IPPN_2eproto
namespace Catalyst {
namespace Protocol {
namespace IPPN {
class PeerNeighborsRequest;
class PeerNeighborsRequestDefaultTypeInternal;
extern PeerNeighborsRequestDefaultTypeInternal _PeerNeighborsRequest_default_instance_;
class PeerNeighborsResponse;
class PeerNeighborsResponseDefaultTypeInternal;
extern PeerNeighborsResponseDefaultTypeInternal _PeerNeighborsResponse_default_instance_;
class PingRequest;
class PingRequestDefaultTypeInternal;
extern PingRequestDefaultTypeInternal _PingRequest_default_instance_;
class PingResponse;
class PingResponseDefaultTypeInternal;
extern PingResponseDefaultTypeInternal _PingResponse_default_instance_;
}  // namespace IPPN
}  // namespace Protocol
}  // namespace Catalyst
namespace google {
namespace protobuf {
template<> ::Catalyst::Protocol::IPPN::PeerNeighborsRequest* Arena::CreateMaybeMessage<::Catalyst::Protocol::IPPN::PeerNeighborsRequest>(Arena*);
template<> ::Catalyst::Protocol::IPPN::PeerNeighborsResponse* Arena::CreateMaybeMessage<::Catalyst::Protocol::IPPN::PeerNeighborsResponse>(Arena*);
template<> ::Catalyst::Protocol::IPPN::PingRequest* Arena::CreateMaybeMessage<::Catalyst::Protocol::IPPN::PingRequest>(Arena*);
template<> ::Catalyst::Protocol::IPPN::PingResponse* Arena::CreateMaybeMessage<::Catalyst::Protocol::IPPN::PingResponse>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace Catalyst {
namespace Protocol {
namespace IPPN {

// ===================================================================

class PeerNeighborsRequest : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:Catalyst.Protocol.IPPN.PeerNeighborsRequest) */ {
 public:
  PeerNeighborsRequest();
  virtual ~PeerNeighborsRequest();

  PeerNeighborsRequest(const PeerNeighborsRequest& from);

  inline PeerNeighborsRequest& operator=(const PeerNeighborsRequest& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  PeerNeighborsRequest(PeerNeighborsRequest&& from) noexcept
    : PeerNeighborsRequest() {
    *this = ::std::move(from);
  }

  inline PeerNeighborsRequest& operator=(PeerNeighborsRequest&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const PeerNeighborsRequest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const PeerNeighborsRequest* internal_default_instance() {
    return reinterpret_cast<const PeerNeighborsRequest*>(
               &_PeerNeighborsRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(PeerNeighborsRequest* other);
  friend void swap(PeerNeighborsRequest& a, PeerNeighborsRequest& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline PeerNeighborsRequest* New() const final {
    return CreateMaybeMessage<PeerNeighborsRequest>(NULL);
  }

  PeerNeighborsRequest* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<PeerNeighborsRequest>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const PeerNeighborsRequest& from);
  void MergeFrom(const PeerNeighborsRequest& from);
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
  void InternalSwap(PeerNeighborsRequest* other);
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

  // @@protoc_insertion_point(class_scope:Catalyst.Protocol.IPPN.PeerNeighborsRequest)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_IPPN_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class PeerNeighborsResponse : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:Catalyst.Protocol.IPPN.PeerNeighborsResponse) */ {
 public:
  PeerNeighborsResponse();
  virtual ~PeerNeighborsResponse();

  PeerNeighborsResponse(const PeerNeighborsResponse& from);

  inline PeerNeighborsResponse& operator=(const PeerNeighborsResponse& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  PeerNeighborsResponse(PeerNeighborsResponse&& from) noexcept
    : PeerNeighborsResponse() {
    *this = ::std::move(from);
  }

  inline PeerNeighborsResponse& operator=(PeerNeighborsResponse&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const PeerNeighborsResponse& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const PeerNeighborsResponse* internal_default_instance() {
    return reinterpret_cast<const PeerNeighborsResponse*>(
               &_PeerNeighborsResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(PeerNeighborsResponse* other);
  friend void swap(PeerNeighborsResponse& a, PeerNeighborsResponse& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline PeerNeighborsResponse* New() const final {
    return CreateMaybeMessage<PeerNeighborsResponse>(NULL);
  }

  PeerNeighborsResponse* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<PeerNeighborsResponse>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const PeerNeighborsResponse& from);
  void MergeFrom(const PeerNeighborsResponse& from);
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
  void InternalSwap(PeerNeighborsResponse* other);
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

  // repeated .Catalyst.Protocol.Common.PeerId Peers = 1;
  int peers_size() const;
  void clear_peers();
  static const int kPeersFieldNumber = 1;
  ::Catalyst::Protocol::Common::PeerId* mutable_peers(int index);
  ::google::protobuf::RepeatedPtrField< ::Catalyst::Protocol::Common::PeerId >*
      mutable_peers();
  const ::Catalyst::Protocol::Common::PeerId& peers(int index) const;
  ::Catalyst::Protocol::Common::PeerId* add_peers();
  const ::google::protobuf::RepeatedPtrField< ::Catalyst::Protocol::Common::PeerId >&
      peers() const;

  // @@protoc_insertion_point(class_scope:Catalyst.Protocol.IPPN.PeerNeighborsResponse)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::Catalyst::Protocol::Common::PeerId > peers_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_IPPN_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class PingRequest : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:Catalyst.Protocol.IPPN.PingRequest) */ {
 public:
  PingRequest();
  virtual ~PingRequest();

  PingRequest(const PingRequest& from);

  inline PingRequest& operator=(const PingRequest& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  PingRequest(PingRequest&& from) noexcept
    : PingRequest() {
    *this = ::std::move(from);
  }

  inline PingRequest& operator=(PingRequest&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const PingRequest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const PingRequest* internal_default_instance() {
    return reinterpret_cast<const PingRequest*>(
               &_PingRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  void Swap(PingRequest* other);
  friend void swap(PingRequest& a, PingRequest& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline PingRequest* New() const final {
    return CreateMaybeMessage<PingRequest>(NULL);
  }

  PingRequest* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<PingRequest>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const PingRequest& from);
  void MergeFrom(const PingRequest& from);
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
  void InternalSwap(PingRequest* other);
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

  // @@protoc_insertion_point(class_scope:Catalyst.Protocol.IPPN.PingRequest)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_IPPN_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class PingResponse : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:Catalyst.Protocol.IPPN.PingResponse) */ {
 public:
  PingResponse();
  virtual ~PingResponse();

  PingResponse(const PingResponse& from);

  inline PingResponse& operator=(const PingResponse& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  PingResponse(PingResponse&& from) noexcept
    : PingResponse() {
    *this = ::std::move(from);
  }

  inline PingResponse& operator=(PingResponse&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const PingResponse& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const PingResponse* internal_default_instance() {
    return reinterpret_cast<const PingResponse*>(
               &_PingResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    3;

  void Swap(PingResponse* other);
  friend void swap(PingResponse& a, PingResponse& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline PingResponse* New() const final {
    return CreateMaybeMessage<PingResponse>(NULL);
  }

  PingResponse* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<PingResponse>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const PingResponse& from);
  void MergeFrom(const PingResponse& from);
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
  void InternalSwap(PingResponse* other);
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

  // @@protoc_insertion_point(class_scope:Catalyst.Protocol.IPPN.PingResponse)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_IPPN_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// PeerNeighborsRequest

// -------------------------------------------------------------------

// PeerNeighborsResponse

// repeated .Catalyst.Protocol.Common.PeerId Peers = 1;
inline int PeerNeighborsResponse::peers_size() const {
  return peers_.size();
}
inline ::Catalyst::Protocol::Common::PeerId* PeerNeighborsResponse::mutable_peers(int index) {
  // @@protoc_insertion_point(field_mutable:Catalyst.Protocol.IPPN.PeerNeighborsResponse.Peers)
  return peers_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::Catalyst::Protocol::Common::PeerId >*
PeerNeighborsResponse::mutable_peers() {
  // @@protoc_insertion_point(field_mutable_list:Catalyst.Protocol.IPPN.PeerNeighborsResponse.Peers)
  return &peers_;
}
inline const ::Catalyst::Protocol::Common::PeerId& PeerNeighborsResponse::peers(int index) const {
  // @@protoc_insertion_point(field_get:Catalyst.Protocol.IPPN.PeerNeighborsResponse.Peers)
  return peers_.Get(index);
}
inline ::Catalyst::Protocol::Common::PeerId* PeerNeighborsResponse::add_peers() {
  // @@protoc_insertion_point(field_add:Catalyst.Protocol.IPPN.PeerNeighborsResponse.Peers)
  return peers_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::Catalyst::Protocol::Common::PeerId >&
PeerNeighborsResponse::peers() const {
  // @@protoc_insertion_point(field_list:Catalyst.Protocol.IPPN.PeerNeighborsResponse.Peers)
  return peers_;
}

// -------------------------------------------------------------------

// PingRequest

// -------------------------------------------------------------------

// PingResponse

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace IPPN
}  // namespace Protocol
}  // namespace Catalyst

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_IPPN_2eproto
