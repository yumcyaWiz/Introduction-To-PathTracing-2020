#ifndef _INTERSECT_INFO_H
#define _INTERSECT_INFO_H

#include "mogumogu/core/vec3.hpp"

class Primitive;

struct IntersectInfo {
  IntersectInfo() {}

  float t;
  Vec3 hitPos;
  Vec3 hitNormal;
  Vec3 dpdu;
  Vec3 dpdv;

  const Primitive* hitPrimitive;
};

#endif