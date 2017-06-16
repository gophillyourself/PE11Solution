#include <iostream>
#include "CylinderType.h"
#include "CircleType.h"

using namespace std;

//CylinderType::CylinderType() : a(0) {}

double CylinderType::calcVolume()
{
  double volume;
  volume = pi * radius *radius * area;
  return volume;
}

double CylinderType::calcArea()
{
  double area;
  area = 2*pi*radius*height + 2 * pi * radius * radius;
  cout<<"The area of the Cylinder is "<<area;
  return area;
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
