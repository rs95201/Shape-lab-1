#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>
using namespace std;

class Shape{
  public:
    virtual double getArea() const = 0;
    virtual double getPerimeter() const = 0;
    virtual string getName() const = 0;
};
#endif

