#ifndef PARTICLE_INCLUDE
#define PARTICLE_INCLUDE

#include "TVector3.h"

class Particle {
public:
  Particle(TVector3, TVector3);
  TVector3 pos0;
  TVector3 dir0;
  TVector3 pos;
  TVector3 dir;
  double theta();
  double phi();
  double dist(double);
  void travelDist(double);
  void travelZDist(double);

};

#endif