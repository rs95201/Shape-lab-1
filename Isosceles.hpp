#include "triangle.hpp"
#include <cmath>
class Isosceles: public Triangle
{  public:
    
    Isosceles(double sides);
    string getName() const override
    {
        return name;
    }
    private:
    double sides{};
    string name = "Isosceles Right Triangle";
};
