#ifndef CYLINDERTYPE_H
#define CYLINDERTYPE_H

#include <iostream>
#include "CircleType.h"

using namespace std;

class CylinderType : public CircleType
{

public:

  const double pi = 3.1415926;
  double volume;
  double area;
  double height;
  double radius;

  double calcVolume ();
  double calcArea ();
  void setRad(double r);
  void setHeight(double h);
  double getHeight();
  double baseArea();

  CylinderType();
  CylinderType(double h) : height(h) {}


};


#endif
