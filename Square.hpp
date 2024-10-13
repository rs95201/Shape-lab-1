#include "Rectangle.hpp"
#include <cmath>
class Square : public Rectangle
{
public:
  Square(double side);
  string getName() const override;
};