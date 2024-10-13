#include "Square.hpp"

Square::Square(double side) : Rectangle(side, side)
{
}

string Square::getName() const
{
  return "Square";
}