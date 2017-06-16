#include <iostream>
#include "CylinderType.h"
#include "CircleType.h"

using namespace std;

//CylinderType::CylinderType() : a(0) {}

double CylinderType::calcArea()
{
  area = 2*pi*radius*height + 2 * pi * radius * radius;
  return area;
}


double CylinderType::calcVolume()
{
  double volume;
  volume = pi * radius * radius * area;
  return volume;
}

void CylinderType::setRad(double r)
{
  radius = r;
}

void CylinderType::setHeight(double h)
{
  height = h;
}

double CylinderType::getHeight()
{
  return height;
}

double CylinderType::baseArea()
{
  return CircleType::area();
}

CylinderType::CylinderType(double r, double h):CircleType(r)
{
  setHeight(h);
}
