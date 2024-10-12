#include "Rectangle.hpp"
#include "Circle.hpp"
#include "Isosceles.hpp"
#include <cmath>
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
    Rectangle r(2,4);
    assert(r.getArea() == 8);
    assert(r.getPerimeter() == 12);
    assert(printAreaToScreen(&r) == "Area of Rectangle is 8");
    
    Triangle t(3,4,3);
    assert(t.getArea() == 6);
    assert(t.getPerimeter() == 10);
    assert(printAreaToScreen(&t) == "Area of Triangle is 6");
    
    
    Isosceles i(4);
    assert(i.getArea() == 8);
    assert(i.getPerimeter() == 8 + (4 *sqrt(2)));
    assert(printAreaToScreen(&i) == "Area of Isosceles Right Triangle is 8");

     //Add asserts for square and circle

    std::cout << "All assertions passed" << std::endl;
    
   
    
}

