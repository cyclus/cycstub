#include "shorttermstorage_inst.h"

using shorttermstorage::ShorttermstorageInst;

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
ShorttermstorageInst::ShorttermstorageInst(cyclus::Context* ctx) : cyclus::Institution(ctx) {}

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
ShorttermstorageInst::~ShorttermstorageInst() {}

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
std::string ShorttermstorageInst::str() {
  return Institution::str();
}

// WARNING! Do not change the following this function!!! This enables your
// archetype to be dynamically loaded and any alterations will cause your
// archetype to fail.
extern "C" cyclus::Agent* ConstructShorttermstorageInst(cyclus::Context* ctx) {
  return new ShorttermstorageInst(ctx);
}
