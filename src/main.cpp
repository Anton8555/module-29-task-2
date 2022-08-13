#include <iostream>
#include "shape.h"
#include "circle.h"
#include "rectangle.h"
#include "triangle.h"
using namespace std;

/*!
 * @brief 'shape' figure parameter output subroutine.
 * @param shape - pointer to a shape data structure.
 */
void printParams(Shape *shape) {
    BoundingBoxDimensions bbd = shape->dimensions();

    std::cout
            << "Type: " << shape->type() << std::endl
            << "Square: " << shape->square() << std::endl
            << "Width: " << bbd.width << std::endl
            << "Height: " << bbd.height << std::endl;
}


int main() {
    // creating figures
    Circle circle(10.17);
    Rectangle rectangle(27.3, 35.2);
    Triangle triangle(3.21, 4.58, 5.01);

    // print shape parameters
    printParams(&circle);
    cout << endl;
    printParams(&rectangle);
    cout << endl;
    printParams(&triangle);
    cout << endl;

    return 0;
}
