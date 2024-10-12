#include "Rectangle.hpp"
#include "Circle.hpp"
#include "Isosceles.hpp"

#include <cassert>
int main()
{
 Rectangle r(2,4);
    assert(r.getArea() == 8);
    assert(r.getPerimeter() == 12);
    
    
    Triangle t(3,4,3);
    assert(t.getArea() == 6);
    assert(t.getPerimeter() == 10);
   
    
    //Circle c(3);
    //assert(c.getArea() == Circle::PI * 9 );
    //assert(c.getPerimeter() == Circle::PI * 6);

    Isosceles i(4);
    assert(i.getArea() == 8);
    assert(i.getPerimeter() == 8 + (4 *sqrt(2)));
    
    cout << "All assertions passed" << endl;
  
  return 0;
}
