#include <iostream>
#include "CircleType.h"
#include "CylinderType.h"

using namespace std;

int main()
{

  CircleType circle(4);
  CylinderType cylinder(2,4);


  cout<<"Circle Radius = "<<circle.getRadius()<<endl;

  cout<<"Circle Area = "<<circle.area()<<endl;

  cout<<"Circle circumference = "<<circle.circumference()<<endl;

  cout<<"Cylinder Radius = "<<cylinder.getRadius()<<endl;

  cout<<"Cylinder Height = "<<cylinder.getHeight()<<endl;

  cout<<"Cylinder Area = "<<cylinder.baseArea()<<endl;

  cout<<"Cylinder circumference = "<<cylinder.circumference()<<endl;

  cout<<"Cylinder Surface Area = "<<cylinder.calcArea()<<endl;

  cout<<"Cylinder volume = "<<cylinder.calcVolume()<<endl;






  return 0;
}
