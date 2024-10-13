#include "Circle.hpp"
#include "Isosceles.hpp"
#include <cmath>
#include "Square.hpp"
#include <cassert>
#include <sstream>
#include <iostream>

string printAreaToScreen(Shape *s)
{
  stringstream ss;
  ss << "Area of " << s->getName() << " is " << s->getArea();
  return ss.str();
}
int main()
{
  Rectangle r(2, 4);
  assert(r.getArea() == 8);
  assert(r.getPerimeter() == 12);
  assert(printAreaToScreen(&r) == "Area of Rectangle is 8");

  Triangle t(3, 4, 3);
  assert(t.getArea() == 6);
  assert(t.getPerimeter() == 10);
  assert(printAreaToScreen(&t) == "Area of Triangle is 6");

  Isosceles i(4);
  assert(i.getArea() == 8);
  assert(i.getPerimeter() == 8 + (4 * sqrt(2)));
  assert(printAreaToScreen(&i) == "Area of Isosceles Right Triangle is 8");

  // Add asserts for square and circle
  Square s(3.4);
  assert(s.getArea() == 3.4 * 3.4);
  assert(s.getPerimeter() == 4 * 3.4);
  assert(s.getName() == "Square");

  Circle c(5, 5);
  assert(c.getArea() == M_PI * 5.5 * 5.5);
  assert(c.getPerimeter() == 2 * M_PI * 5.5);
  assert(c.getName() == "Circle");

  std::cout << "All assertions passed" << std::endl;
}
