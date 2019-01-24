#include "particle.h"

Particle::Particle(TVector3 pos, TVector3 dir) {
  this->pos0 = pos;
  this->dir0 = dir;
  this->pos = pos;
  this->dir = dir;
}

double Particle::theta() {
  return atan(sqrt(dir[0]*dir[0] + dir[1]*dir[1]) / dir[2]);
}

double Particle::phi() {
  return atan(dir[0] / dir[1]);
}

double Particle::dist(double z) {
  // distance to plane in direction of travel
  return (z - pos[2]) / dir[2];
}

void Particle::travelDist(double dist) {
	pos[0] = pos[0] + dist*dir[0];
	pos[1] = pos[1] + dist*dir[1];
	pos[2] = pos[2] + dist*dir[2];
}