#ifndef CIRCLETYPE_H
#define CIRCLETYPE_H

#include <iostream>

using namespace std;

class CircleType
{
private:



public:

  double radius;


  CircleType();
  CircleType(double r=0);

  void setRadius(double r);
  double getRadius();
  double area();
  double circumference();

};


#endif
