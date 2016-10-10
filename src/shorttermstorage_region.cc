#include "shorttermstorage_region.h"

using shorttermstorage::ShorttermstorageRegion;

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
ShorttermstorageRegion::ShorttermstorageRegion(cyclus::Context* ctx) : cyclus::Region(ctx) {}

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
ShorttermstorageRegion::~ShorttermstorageRegion() {}

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
std::string ShorttermstorageRegion::str() {
  return Region::str();
}

// WARNING! Do not change the following this function!!! This enables your
// archetype to be dynamically loaded and any alterations will cause your
// archetype to fail.
extern "C" cyclus::Agent* ConstructShorttermstorageRegion(cyclus::Context* ctx) {
  return new ShorttermstorageRegion(ctx);
}
