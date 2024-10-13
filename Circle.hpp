#include "shape.hpp"
#define PI 3.14159

class Circle : public Shape
{
public:
  Circle(double Radius) : radius(Radius) {}

  double getArea() const override
  {
    return PI * (radius * radius);
  }
  double getPerimeter() const override
  {
    return 2 * PI * radius;
  }
  string getName() const override
  {
    return name;
  }

private:
  double radius;
  string name = "Circle";
};
