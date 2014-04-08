#include "Registration.hpp"

#include "Filesystem.hpp"
#include "fscomp/StaticFS.hpp"

namespace CPM_ES_FS_NS {

void registerAll(CPM_ES_CEREAL_NS::CerealCore& core)
{
  // Systems
  Filesystem::registerSystems();

  // Components
  core.registerComponent<StaticFS>();   // Non-serializable
}

} // namespace CPM_ES_FS_NS

