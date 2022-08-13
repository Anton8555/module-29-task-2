#include "circle.h"
#include <cassert>

// constructors
Circle::Circle(double inRadius): radius (inRadius) {
    assert( radius > 0 );
}

// setters
void Circle::setRadius(double inRadius) { radius = inRadius; }

// getters
double Circle::getRadius() const { return radius; }

// methods

/*!
 * @brief Subroutine for calculating the area of a figure.
 * @return Returns the area of the shape.
 */
double Circle::square() const {
    const double pi = 3.1415;
    return pi * radius * radius;
}

/*!
 * @brief The dimensions of the rectangle that describes the figure.
 * @return Returns the dimensions of the rectangle.
 */
BoundingBoxDimensions Circle::dimensions() const {
    double side = 2 * radius;
    return {side, side};
}

/*!
 * @brief Shape type.
 * @return Returns the type of the shape.
 */
std::string Circle::type() const {
    return "Circle";
}
