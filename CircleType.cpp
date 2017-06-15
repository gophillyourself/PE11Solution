#include <iostream>
#include "CircleType.h"

using namespace std;

CircleType::CircleType() : a(0) {}

double CircleType::calcArea(double radius, const double pi)
{
  double area;
  area = radius * radius * pi;
  return area;
}
double CircleType::calcCircum(double radius, const double pi)
{
  double circum;
  circum = 2 * radius * pi;
  return circum;
}
