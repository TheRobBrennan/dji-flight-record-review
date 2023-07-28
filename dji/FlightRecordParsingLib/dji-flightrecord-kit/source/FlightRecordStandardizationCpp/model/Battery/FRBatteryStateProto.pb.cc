// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: FRBatteryStateProto.proto

#include "FRBatteryStateProto.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

namespace DJIFRProto {
namespace Standard {
PROTOBUF_CONSTEXPR BatteryState::BatteryState(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.cellvoltages_)*/{}
  , /*decltype(_impl_._cellvoltages_cached_byte_size_)*/{0}
  , /*decltype(_impl_.voltage_)*/0
  , /*decltype(_impl_.current_)*/0
  , /*decltype(_impl_.temperature_)*/0
  , /*decltype(_impl_.chargeremaininginpercent_)*/0
  , /*decltype(_impl_.lowbatterywarningthreshold_)*/0
  , /*decltype(_impl_.seriouslowbatterywarningthreshold_)*/0
  , /*decltype(_impl_.index_)*/0
  , /*decltype(_impl_.lifetimeremaining_)*/0
  , /*decltype(_impl_.designcapacity_)*/0
  , /*decltype(_impl_.numberofdischarges_)*/0
  , /*decltype(_impl_.isinsinglebatterymode_)*/false
  , /*decltype(_impl_.fullchargecapacity_)*/0u
  , /*decltype(_impl_.chargeremaining_)*/0u
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct BatteryStateDefaultTypeInternal {
  PROTOBUF_CONSTEXPR BatteryStateDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~BatteryStateDefaultTypeInternal() {}
  union {
    BatteryState _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 BatteryStateDefaultTypeInternal _BatteryState_default_instance_;
}  // namespace Standard
}  // namespace DJIFRProto
static ::_pb::Metadata file_level_metadata_FRBatteryStateProto_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_FRBatteryStateProto_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_FRBatteryStateProto_2eproto = nullptr;

const uint32_t TableStruct_FRBatteryStateProto_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::DJIFRProto::Standard::BatteryState, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::DJIFRProto::Standard::BatteryState, _impl_.voltage_),
  PROTOBUF_FIELD_OFFSET(::DJIFRProto::Standard::BatteryState, _impl_.current_),
  PROTOBUF_FIELD_OFFSET(::DJIFRProto::Standard::BatteryState, _impl_.temperature_),
  PROTOBUF_FIELD_OFFSET(::DJIFRProto::Standard::BatteryState, _impl_.cellvoltages_),
  PROTOBUF_FIELD_OFFSET(::DJIFRProto::Standard::BatteryState, _impl_.chargeremaininginpercent_),
  PROTOBUF_FIELD_OFFSET(::DJIFRProto::Standard::BatteryState, _impl_.lowbatterywarningthreshold_),
  PROTOBUF_FIELD_OFFSET(::DJIFRProto::Standard::BatteryState, _impl_.seriouslowbatterywarningthreshold_),
  PROTOBUF_FIELD_OFFSET(::DJIFRProto::Standard::BatteryState, _impl_.index_),
  PROTOBUF_FIELD_OFFSET(::DJIFRProto::Standard::BatteryState, _impl_.lifetimeremaining_),
  PROTOBUF_FIELD_OFFSET(::DJIFRProto::Standard::BatteryState, _impl_.designcapacity_),
  PROTOBUF_FIELD_OFFSET(::DJIFRProto::Standard::BatteryState, _impl_.numberofdischarges_),
  PROTOBUF_FIELD_OFFSET(::DJIFRProto::Standard::BatteryState, _impl_.isinsinglebatterymode_),
  PROTOBUF_FIELD_OFFSET(::DJIFRProto::Standard::BatteryState, _impl_.fullchargecapacity_),
  PROTOBUF_FIELD_OFFSET(::DJIFRProto::Standard::BatteryState, _impl_.chargeremaining_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::DJIFRProto::Standard::BatteryState)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::DJIFRProto::Standard::_BatteryState_default_instance_._instance,
};

const char descriptor_table_protodef_FRBatteryStateProto_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\031FRBatteryStateProto.proto\022\023DJIFRProto."
  "Standard\"\376\002\n\014BatteryState\022\017\n\007voltage\030\001 \001"
  "(\005\022\017\n\007current\030\002 \001(\005\022\023\n\013temperature\030\003 \001(\001"
  "\022\024\n\014cellVoltages\030\004 \003(\005\022 \n\030chargeRemainin"
  "gInPercent\030\005 \001(\005\022\"\n\032lowBatteryWarningThr"
  "eshold\030\006 \001(\005\022)\n!seriousLowBatteryWarning"
  "Threshold\030\007 \001(\005\022\r\n\005index\030\010 \001(\005\022\031\n\021lifeti"
  "meRemaining\030\t \001(\005\022\026\n\016designCapacity\030\n \001("
  "\005\022\032\n\022numberOfDischarges\030\013 \001(\005\022\035\n\025isInSin"
  "gleBatteryMode\030\014 \001(\010\022\032\n\022fullChargeCapaci"
  "ty\030\r \001(\r\022\027\n\017chargeRemaining\030\016 \001(\rB\r\242\002\nDJ"
  "IFRProtob\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_FRBatteryStateProto_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_FRBatteryStateProto_2eproto = {
    false, false, 456, descriptor_table_protodef_FRBatteryStateProto_2eproto,
    "FRBatteryStateProto.proto",
    &descriptor_table_FRBatteryStateProto_2eproto_once, nullptr, 0, 1,
    schemas, file_default_instances, TableStruct_FRBatteryStateProto_2eproto::offsets,
    file_level_metadata_FRBatteryStateProto_2eproto, file_level_enum_descriptors_FRBatteryStateProto_2eproto,
    file_level_service_descriptors_FRBatteryStateProto_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_FRBatteryStateProto_2eproto_getter() {
  return &descriptor_table_FRBatteryStateProto_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_FRBatteryStateProto_2eproto(&descriptor_table_FRBatteryStateProto_2eproto);
namespace DJIFRProto {
namespace Standard {

// ===================================================================

class BatteryState::_Internal {
 public:
};

BatteryState::BatteryState(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:DJIFRProto.Standard.BatteryState)
}
BatteryState::BatteryState(const BatteryState& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  BatteryState* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.cellvoltages_){from._impl_.cellvoltages_}
    , /*decltype(_impl_._cellvoltages_cached_byte_size_)*/{0}
    , decltype(_impl_.voltage_){}
    , decltype(_impl_.current_){}
    , decltype(_impl_.temperature_){}
    , decltype(_impl_.chargeremaininginpercent_){}
    , decltype(_impl_.lowbatterywarningthreshold_){}
    , decltype(_impl_.seriouslowbatterywarningthreshold_){}
    , decltype(_impl_.index_){}
    , decltype(_impl_.lifetimeremaining_){}
    , decltype(_impl_.designcapacity_){}
    , decltype(_impl_.numberofdischarges_){}
    , decltype(_impl_.isinsinglebatterymode_){}
    , decltype(_impl_.fullchargecapacity_){}
    , decltype(_impl_.chargeremaining_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&_impl_.voltage_, &from._impl_.voltage_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.chargeremaining_) -
    reinterpret_cast<char*>(&_impl_.voltage_)) + sizeof(_impl_.chargeremaining_));
  // @@protoc_insertion_point(copy_constructor:DJIFRProto.Standard.BatteryState)
}

inline void BatteryState::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.cellvoltages_){arena}
    , /*decltype(_impl_._cellvoltages_cached_byte_size_)*/{0}
    , decltype(_impl_.voltage_){0}
    , decltype(_impl_.current_){0}
    , decltype(_impl_.temperature_){0}
    , decltype(_impl_.chargeremaininginpercent_){0}
    , decltype(_impl_.lowbatterywarningthreshold_){0}
    , decltype(_impl_.seriouslowbatterywarningthreshold_){0}
    , decltype(_impl_.index_){0}
    , decltype(_impl_.lifetimeremaining_){0}
    , decltype(_impl_.designcapacity_){0}
    , decltype(_impl_.numberofdischarges_){0}
    , decltype(_impl_.isinsinglebatterymode_){false}
    , decltype(_impl_.fullchargecapacity_){0u}
    , decltype(_impl_.chargeremaining_){0u}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

BatteryState::~BatteryState() {
  // @@protoc_insertion_point(destructor:DJIFRProto.Standard.BatteryState)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void BatteryState::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.cellvoltages_.~RepeatedField();
}

void BatteryState::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void BatteryState::Clear() {
// @@protoc_insertion_point(message_clear_start:DJIFRProto.Standard.BatteryState)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.cellvoltages_.Clear();
  ::memset(&_impl_.voltage_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&_impl_.chargeremaining_) -
      reinterpret_cast<char*>(&_impl_.voltage_)) + sizeof(_impl_.chargeremaining_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* BatteryState::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // int32 voltage = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _impl_.voltage_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int32 current = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _impl_.current_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // double temperature = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 25)) {
          _impl_.temperature_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else
          goto handle_unusual;
        continue;
      // repeated int32 cellVoltages = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 34)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedInt32Parser(_internal_mutable_cellvoltages(), ptr, ctx);
          CHK_(ptr);
        } else if (static_cast<uint8_t>(tag) == 32) {
          _internal_add_cellvoltages(::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr));
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int32 chargeRemainingInPercent = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 40)) {
          _impl_.chargeremaininginpercent_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int32 lowBatteryWarningThreshold = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 48)) {
          _impl_.lowbatterywarningthreshold_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int32 seriousLowBatteryWarningThreshold = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 56)) {
          _impl_.seriouslowbatterywarningthreshold_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int32 index = 8;
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 64)) {
          _impl_.index_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int32 lifetimeRemaining = 9;
      case 9:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 72)) {
          _impl_.lifetimeremaining_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int32 designCapacity = 10;
      case 10:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 80)) {
          _impl_.designcapacity_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int32 numberOfDischarges = 11;
      case 11:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 88)) {
          _impl_.numberofdischarges_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // bool isInSingleBatteryMode = 12;
      case 12:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 96)) {
          _impl_.isinsinglebatterymode_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // uint32 fullChargeCapacity = 13;
      case 13:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 104)) {
          _impl_.fullchargecapacity_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // uint32 chargeRemaining = 14;
      case 14:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 112)) {
          _impl_.chargeremaining_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* BatteryState::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:DJIFRProto.Standard.BatteryState)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 voltage = 1;
  if (this->_internal_voltage() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(1, this->_internal_voltage(), target);
  }

  // int32 current = 2;
  if (this->_internal_current() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(2, this->_internal_current(), target);
  }

  // double temperature = 3;
  static_assert(sizeof(uint64_t) == sizeof(double), "Code assumes uint64_t and double are the same size.");
  double tmp_temperature = this->_internal_temperature();
  uint64_t raw_temperature;
  memcpy(&raw_temperature, &tmp_temperature, sizeof(tmp_temperature));
  if (raw_temperature != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteDoubleToArray(3, this->_internal_temperature(), target);
  }

  // repeated int32 cellVoltages = 4;
  {
    int byte_size = _impl_._cellvoltages_cached_byte_size_.load(std::memory_order_relaxed);
    if (byte_size > 0) {
      target = stream->WriteInt32Packed(
          4, _internal_cellvoltages(), byte_size, target);
    }
  }

  // int32 chargeRemainingInPercent = 5;
  if (this->_internal_chargeremaininginpercent() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(5, this->_internal_chargeremaininginpercent(), target);
  }

  // int32 lowBatteryWarningThreshold = 6;
  if (this->_internal_lowbatterywarningthreshold() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(6, this->_internal_lowbatterywarningthreshold(), target);
  }

  // int32 seriousLowBatteryWarningThreshold = 7;
  if (this->_internal_seriouslowbatterywarningthreshold() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(7, this->_internal_seriouslowbatterywarningthreshold(), target);
  }

  // int32 index = 8;
  if (this->_internal_index() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(8, this->_internal_index(), target);
  }

  // int32 lifetimeRemaining = 9;
  if (this->_internal_lifetimeremaining() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(9, this->_internal_lifetimeremaining(), target);
  }

  // int32 designCapacity = 10;
  if (this->_internal_designcapacity() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(10, this->_internal_designcapacity(), target);
  }

  // int32 numberOfDischarges = 11;
  if (this->_internal_numberofdischarges() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(11, this->_internal_numberofdischarges(), target);
  }

  // bool isInSingleBatteryMode = 12;
  if (this->_internal_isinsinglebatterymode() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(12, this->_internal_isinsinglebatterymode(), target);
  }

  // uint32 fullChargeCapacity = 13;
  if (this->_internal_fullchargecapacity() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(13, this->_internal_fullchargecapacity(), target);
  }

  // uint32 chargeRemaining = 14;
  if (this->_internal_chargeremaining() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(14, this->_internal_chargeremaining(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:DJIFRProto.Standard.BatteryState)
  return target;
}

size_t BatteryState::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:DJIFRProto.Standard.BatteryState)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated int32 cellVoltages = 4;
  {
    size_t data_size = ::_pbi::WireFormatLite::
      Int32Size(this->_impl_.cellvoltages_);
    if (data_size > 0) {
      total_size += 1 +
        ::_pbi::WireFormatLite::Int32Size(static_cast<int32_t>(data_size));
    }
    int cached_size = ::_pbi::ToCachedSize(data_size);
    _impl_._cellvoltages_cached_byte_size_.store(cached_size,
                                    std::memory_order_relaxed);
    total_size += data_size;
  }

  // int32 voltage = 1;
  if (this->_internal_voltage() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_voltage());
  }

  // int32 current = 2;
  if (this->_internal_current() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_current());
  }

  // double temperature = 3;
  static_assert(sizeof(uint64_t) == sizeof(double), "Code assumes uint64_t and double are the same size.");
  double tmp_temperature = this->_internal_temperature();
  uint64_t raw_temperature;
  memcpy(&raw_temperature, &tmp_temperature, sizeof(tmp_temperature));
  if (raw_temperature != 0) {
    total_size += 1 + 8;
  }

  // int32 chargeRemainingInPercent = 5;
  if (this->_internal_chargeremaininginpercent() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_chargeremaininginpercent());
  }

  // int32 lowBatteryWarningThreshold = 6;
  if (this->_internal_lowbatterywarningthreshold() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_lowbatterywarningthreshold());
  }

  // int32 seriousLowBatteryWarningThreshold = 7;
  if (this->_internal_seriouslowbatterywarningthreshold() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_seriouslowbatterywarningthreshold());
  }

  // int32 index = 8;
  if (this->_internal_index() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_index());
  }

  // int32 lifetimeRemaining = 9;
  if (this->_internal_lifetimeremaining() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_lifetimeremaining());
  }

  // int32 designCapacity = 10;
  if (this->_internal_designcapacity() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_designcapacity());
  }

  // int32 numberOfDischarges = 11;
  if (this->_internal_numberofdischarges() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_numberofdischarges());
  }

  // bool isInSingleBatteryMode = 12;
  if (this->_internal_isinsinglebatterymode() != 0) {
    total_size += 1 + 1;
  }

  // uint32 fullChargeCapacity = 13;
  if (this->_internal_fullchargecapacity() != 0) {
    total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_fullchargecapacity());
  }

  // uint32 chargeRemaining = 14;
  if (this->_internal_chargeremaining() != 0) {
    total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_chargeremaining());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData BatteryState::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    BatteryState::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*BatteryState::GetClassData() const { return &_class_data_; }


void BatteryState::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<BatteryState*>(&to_msg);
  auto& from = static_cast<const BatteryState&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:DJIFRProto.Standard.BatteryState)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.cellvoltages_.MergeFrom(from._impl_.cellvoltages_);
  if (from._internal_voltage() != 0) {
    _this->_internal_set_voltage(from._internal_voltage());
  }
  if (from._internal_current() != 0) {
    _this->_internal_set_current(from._internal_current());
  }
  static_assert(sizeof(uint64_t) == sizeof(double), "Code assumes uint64_t and double are the same size.");
  double tmp_temperature = from._internal_temperature();
  uint64_t raw_temperature;
  memcpy(&raw_temperature, &tmp_temperature, sizeof(tmp_temperature));
  if (raw_temperature != 0) {
    _this->_internal_set_temperature(from._internal_temperature());
  }
  if (from._internal_chargeremaininginpercent() != 0) {
    _this->_internal_set_chargeremaininginpercent(from._internal_chargeremaininginpercent());
  }
  if (from._internal_lowbatterywarningthreshold() != 0) {
    _this->_internal_set_lowbatterywarningthreshold(from._internal_lowbatterywarningthreshold());
  }
  if (from._internal_seriouslowbatterywarningthreshold() != 0) {
    _this->_internal_set_seriouslowbatterywarningthreshold(from._internal_seriouslowbatterywarningthreshold());
  }
  if (from._internal_index() != 0) {
    _this->_internal_set_index(from._internal_index());
  }
  if (from._internal_lifetimeremaining() != 0) {
    _this->_internal_set_lifetimeremaining(from._internal_lifetimeremaining());
  }
  if (from._internal_designcapacity() != 0) {
    _this->_internal_set_designcapacity(from._internal_designcapacity());
  }
  if (from._internal_numberofdischarges() != 0) {
    _this->_internal_set_numberofdischarges(from._internal_numberofdischarges());
  }
  if (from._internal_isinsinglebatterymode() != 0) {
    _this->_internal_set_isinsinglebatterymode(from._internal_isinsinglebatterymode());
  }
  if (from._internal_fullchargecapacity() != 0) {
    _this->_internal_set_fullchargecapacity(from._internal_fullchargecapacity());
  }
  if (from._internal_chargeremaining() != 0) {
    _this->_internal_set_chargeremaining(from._internal_chargeremaining());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void BatteryState::CopyFrom(const BatteryState& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:DJIFRProto.Standard.BatteryState)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BatteryState::IsInitialized() const {
  return true;
}

void BatteryState::InternalSwap(BatteryState* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.cellvoltages_.InternalSwap(&other->_impl_.cellvoltages_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(BatteryState, _impl_.chargeremaining_)
      + sizeof(BatteryState::_impl_.chargeremaining_)
      - PROTOBUF_FIELD_OFFSET(BatteryState, _impl_.voltage_)>(
          reinterpret_cast<char*>(&_impl_.voltage_),
          reinterpret_cast<char*>(&other->_impl_.voltage_));
}

::PROTOBUF_NAMESPACE_ID::Metadata BatteryState::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_FRBatteryStateProto_2eproto_getter, &descriptor_table_FRBatteryStateProto_2eproto_once,
      file_level_metadata_FRBatteryStateProto_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace Standard
}  // namespace DJIFRProto
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::DJIFRProto::Standard::BatteryState*
Arena::CreateMaybeMessage< ::DJIFRProto::Standard::BatteryState >(Arena* arena) {
  return Arena::CreateMessageInternal< ::DJIFRProto::Standard::BatteryState >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
