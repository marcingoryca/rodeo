/*
----------------------------------------------
    MG Game Engine
    Copyright(c) Marcin Goryca
    marcin.goryca@gmail.com
    http://marcingoryca.pl
----------------------------------------------
*/
#ifndef MG_PRIMITIVE_PLANE_H_
#define MG_PRIMITIVE_PLANE_H_

#include "math\vector3.h"

namespace mg
{
namespace primitive
{
class Plane 
{
public:
    //Plane(const enginemath::Vector3& normal, const enginemath::Vector3& point);
    //~Plane(){}
};
}    // end of primitive namespace
}    // end of mg namespace
#endif

/*
Plane in 3D is the set of points equidistant from two points.
A plane is perfectly flat, has no thickness and extends infinitely

Ax + By + Cz + D = 0

Satisfied only for the locus of points P = [x y z] that lie on the plane

Plane can be represented by point P0 and unit vector that is normal to the plane (point-normal form)
*/