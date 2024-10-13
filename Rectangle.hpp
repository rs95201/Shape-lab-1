#include "shape.hpp"
class Rectangle : public Shape
{
public:
  Rectangle(double width, double height);
  double getArea() const override
  {
    return width * height;
  }

  double getPerimeter() const override
  {
    return 2 * (width + height);
  }
  string getName() const override
  {
        return name;
  }

private:
  double width;
  double height;
  string name = "Rectangle";
};
