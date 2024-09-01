#include "ral/ParticleID.h"

namespace k4::ral {

namespace ParticleID {

ROOT::VecOps::RVec<int>
get_type(ROOT::VecOps::RVec<edm4hep::ParticleIDData> particles) {
  ROOT::VecOps::RVec<int> result;
  result.reserve(particles.size());
  for (edm4hep::ParticleIDData p : particles) {
    result.emplace_back(p.type);
  }
  return result;
}

ROOT::VecOps::RVec<int>
get_PDG(ROOT::VecOps::RVec<edm4hep::ParticleIDData> particles) {
  ROOT::VecOps::RVec<int> result;
  result.reserve(particles.size());
  for (edm4hep::ParticleIDData p : particles) {
    result.emplace_back(p.PDG);
  }
  return result;
}

ROOT::VecOps::RVec<int>
get_algorithmType(ROOT::VecOps::RVec<edm4hep::ParticleIDData> particles) {
  ROOT::VecOps::RVec<int> result;
  result.reserve(particles.size());
  for (edm4hep::ParticleIDData p : particles) {
    result.emplace_back(p.algorithmType);
  }
  return result;
}

ROOT::VecOps::RVec<float>
get_likelihood(ROOT::VecOps::RVec<edm4hep::ParticleIDData> particles) {
  ROOT::VecOps::RVec<float> result;
  result.reserve(particles.size());
  for (edm4hep::ParticleIDData p : particles) {
    result.emplace_back(p.likelihood);
  }
  return result;
}

} // namespace ParticleID
} // namespace k4::ral