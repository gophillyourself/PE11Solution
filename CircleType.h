#ifndef CIRCLETYPE_H
#define CIRCLETYPE_H

#include <iostream>

using namespace std;

class CircleType
{
private:

  double radius;
  double area;
  double circum;
  const double pi = 3.1415926;

public:

  CircleType();
  CircleType(double a) : a(radius) {}
  
  double calcArea(double radius, const double pi);
  double calcCircum(double radius, const double pi);


}


#endif
