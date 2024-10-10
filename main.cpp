#include "Rectangle.hpp"
#include "Circle.hpp"
int main()
{
  Shape *rect = new Rectangle(5, 5);
  cout << "Rectangle Area: " << rect->getArea() << endl;

  Shape *circ = new Circle(5, 5);
  cout << "Circle Area: " << circ->getArea() << endl;
<<<<<<< Updated upstream
=======

  Shape *tri = new Triangle(3, 4, 3);
  std::cout << "Triangle Area: " << tri->getArea() << std::endl;

>>>>>>> Stashed changes
  return 0;
}