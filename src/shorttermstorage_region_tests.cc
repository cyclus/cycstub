#include <gtest/gtest.h>

#include "shorttermstorage_region.h"

#include "agent_tests.h"
#include "region_tests.h"

using shorttermstorage::ShorttermstorageRegion;

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
class ShorttermstorageRegionTest : public ::testing::Test {
 protected:
  cyclus::TestContext tc;
  ShorttermstorageRegion* region;

  virtual void SetUp() {
    region = new ShorttermstorageRegion(tc.get());
  }

  virtual void TearDown() {
    delete region;
  }
};

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
TEST_F(ShorttermstorageRegionTest, InitialState) {
  // Test things about the initial state of the region here
}

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
TEST_F(ShorttermstorageRegionTest, Print) {
  EXPECT_NO_THROW(std::string s = region->str());
  // Test ShorttermstorageRegion specific aspects of the print method here
}

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
TEST_F(ShorttermstorageRegionTest, Tick) {
  EXPECT_NO_THROW(region->Tick());
  // Test ShorttermstorageRegion specific behaviors of the handleTick function here
}

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
TEST_F(ShorttermstorageRegionTest, Tock) {
  EXPECT_NO_THROW(region->Tock());
  // Test ShorttermstorageRegion specific behaviors of the handleTock function here
}

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
// Do Not Touch! Below section required for connection with Cyclus
cyclus::Agent* ShorttermstorageRegionConstructor(cyclus::Context* ctx) {
  return new ShorttermstorageRegion(ctx);
}
// Required to get functionality in cyclus agent unit tests library
#ifndef CYCLUS_AGENT_TESTS_CONNECTED
int ConnectAgentTests();
static int cyclus_agent_tests_connected = ConnectAgentTests();
#define CYCLUS_AGENT_TESTS_CONNECTED cyclus_agent_tests_connected
#endif  // CYCLUS_AGENT_TESTS_CONNECTED
INSTANTIATE_TEST_CASE_P(ShorttermstorageRegion, RegionTests,
                        ::testing::Values(&ShorttermstorageRegionConstructor));
INSTANTIATE_TEST_CASE_P(ShorttermstorageRegion, AgentTests,
                        ::testing::Values(&ShorttermstorageRegionConstructor));
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
