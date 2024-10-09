#include "shape.hpp"
#define PI 3.14159

class Circle : public Shape
{
public:
  Circle(double Area, double Radius);
  double getArea() const override
  {
    return PI * (Area * Area);
  }
  double getPerimeter() const override
  {
    return 2 * 3.14 * Radius;
  }

private:
  double Area;
  double Radius;
};