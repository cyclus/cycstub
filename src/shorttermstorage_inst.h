#ifndef CYCLUS_SHORTTERMSTORAGES_SHORTTERMSTORAGE_INST_H_
#define CYCLUS_SHORTTERMSTORAGES_SHORTTERMSTORAGE_INST_H_

#include <string>

#include "cyclus.h"

namespace shorttermstorage {

/// @class ShorttermstorageInst
///
/// This Institution is intended as a skeleton to guide the implementation of
/// new Institution agents.
///
/// The ShorttermstorageInst class inherits from the Institution class and is dynamically
/// loaded by the Agent class when requested.
///
/// @section intro Introduction
/// Place an introduction to the agent here.
///
/// @section agentparams Agent Parameters
/// Place a description of the required input parameters which define the
/// agent implementation.
///
/// @section optionalparams Optional Parameters
/// Place a description of the optional input parameters to define the
/// agent implementation.
///
/// @section detailed Detailed Behavior
/// Place a description of the detailed behavior of the agent. Consider
/// describing the behavior at the tick and tock as well as the behavior
/// upon sending and receiving materials and messages.
class ShorttermstorageInst : public cyclus::Institution {
 public:
  /// Constructor for ShorttermstorageInst Class
  /// @param ctx the cyclus context for access to simulation-wide parameters
  explicit  ShorttermstorageInst(cyclus::Context* ctx);

  /// Every agent should be destructable
  virtual ~ShorttermstorageInst();

  /// The Prime Directive
  /// Generates code that handles all input file reading and restart operations
  /// (e.g., reading from the database, instantiating a new object, etc.).
  /// @warning The Prime Directive must have a space before it! (A fix will be
  /// in 2.0 ^TM)

  #pragma cyclus

  #pragma cyclus note {"doc": "A shorttermstorage institution is provided as a " \
                              "skeleton for the design of new " \
                              "institution agents."}

  /// Every agent should be able to print a verbose description
  virtual std::string str();

  // And away we go!
};

}  // namespace shorttermstorage

#endif  // CYCLUS_SHORTTERMSTORAGES_SHORTTERMSTORAGE_INST_H_
