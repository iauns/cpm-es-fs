#ifndef IAUNS_ASYNC_REGISTRATION_HPP
#define IAUNS_ASYNC_REGISTRATION_HPP

#include <es-cereal/CerealCore.hpp>

namespace CPM_ES_FS_NS {

/// Registers all gameplay systems and components.
void registerAll(CPM_ES_CEREAL_NS::CerealCore& core);

} // namespace ren

#endif 
