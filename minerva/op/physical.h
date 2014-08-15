#pragma once
#include "common/scale.h"
#include "impl/impl.h"
#include "context.h"

namespace minerva {

class PhysicalComputeFn;

struct PhysicalData {
  Scale size, offset, offset_index;
  int extern_rc;
  uint64_t data_id;
  bool mapped_to_lnode;
  uint64_t mapped_lnid;
  PhysicalData(): extern_rc(0), data_id(0), mapped_to_lnode(false), mapped_lnid(0) {
  }
};

struct PhysicalOp {
  Place place;
  ImplType impl_type;
  PhysicalComputeFn* compute_fn;
};

} // end of namespace minerva
