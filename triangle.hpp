#include "shape.hpp"
class Triangle : public Shape
{
public:
  Triangle(double width, double height, double hypo);
  double getArea() const override
  {
    return 0.5 * base * height;
  }

  double getPerimeter() const override
  {
    return base + height + hypo;
  }
  string getName() const override
  {
        return name;
  }

private:
  double base;
  double height;
  double hypo;
  string name = "Triangle";
};
