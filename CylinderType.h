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
  double height;
  double area;

  double calcVolume ();
  double calcArea ();
  void setRad(double r);
  void setHeight(double h);
  double getHeight();
  double baseArea();

  CylinderType();
  CylinderType(double radius, double height);

};


#endif
