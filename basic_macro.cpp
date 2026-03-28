#include <iostream>

#define PI 3.141592654

#define AREA_CIRCLE(radius) (PI * (radius) * (radius))

int main() {

    double radius = 5.0;
    double area = AREA_CIRCLE(radius);

    std::cout << "The area of a circle with radius " << radius << " is: " << area << std::endl;
    
    return 0;
}