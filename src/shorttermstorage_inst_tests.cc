#include <gtest/gtest.h>

#include <string>

#include "shorttermstorage_inst.h"

#include "institution_tests.h"
#include "agent_tests.h"

using shorttermstorage::ShorttermstorageInst;

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
class ShorttermstorageInstTest : public ::testing::Test {
 protected:
  cyclus::TestContext tc;
  ShorttermstorageInst* inst;

  virtual void SetUp() {
    inst = new ShorttermstorageInst(tc.get());
  }

  virtual void TearDown() {
    delete inst;
  }
};

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
TEST_F(ShorttermstorageInstTest, InitialState) {
  // Test things about the initial state of the inst here
}

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
TEST_F(ShorttermstorageInstTest, Print) {
  EXPECT_NO_THROW(std::string s = inst->str());
  // Test ShorttermstorageInst specific aspects of the print method here
}

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
TEST_F(ShorttermstorageInstTest, Tick) {
  EXPECT_NO_THROW(inst->Tick());
  // Test ShorttermstorageInst specific behaviors of the handleTick function here
}

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
TEST_F(ShorttermstorageInstTest, Tock) {
  EXPECT_NO_THROW(inst->Tock());
  // Test ShorttermstorageInst specific behaviors of the handleTock function here
}

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
// Do Not Touch! Below section required for connection with Cyclus
cyclus::Agent* ShorttermstorageInstConstructor(cyclus::Context* ctx) {
  return new ShorttermstorageInst(ctx);
}
// Required to get functionality in cyclus agent unit tests library
#ifndef CYCLUS_AGENT_TESTS_CONNECTED
int ConnectAgentTests();
static int cyclus_agent_tests_connected = ConnectAgentTests();
#define CYCLUS_AGENT_TESTS_CONNECTED cyclus_agent_tests_connected
#endif  // CYCLUS_AGENT_TESTS_CONNECTED
INSTANTIATE_TEST_CASE_P(ShorttermstorageInst, InstitutionTests,
                        ::testing::Values(&ShorttermstorageInstConstructor));
INSTANTIATE_TEST_CASE_P(ShorttermstorageInst, AgentTests,
                        ::testing::Values(&ShorttermstorageInstConstructor));
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
