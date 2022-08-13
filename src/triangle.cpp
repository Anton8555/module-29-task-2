#include "triangle.h"
#include <cmath>
#include <cassert>

// constructors
Triangle::Triangle(double inA, double inB, double inC): a(inA), b(inB), c(inC) {
    assert( ((a+b) > c) && ((a+c) > b) && ((b+c) > a) );
}

// setters
void Triangle::setSide_A(double inA) { a = inA; }
void Triangle::setSide_B(double inB) { a = inB; }
void Triangle::setSide_C(double inC) { a = inC; }

// getters
double Triangle::getSide_A() const { return a; }
double Triangle::getSide_B() const { return b; }
double Triangle::getSide_C() const { return c; }

// methods

/*!
 * @brief Subroutine for calculating the area of a figure.
 * @return Returns the area of the shape.
 */
double Triangle::square() const {
    double p = (a+b+c)/2;
    return std::sqrt(p*(p-a)*(p-b)*(p-c));
}

/*!
 * @brief The dimensions of the rectangle that describes the figure.
 * @return Returns the dimensions of the rectangle.
 */
BoundingBoxDimensions Triangle::dimensions() const {
    double radius = a*b*c/(4*square());
    return {2*radius, 2*radius};
}

/*!
 * @brief Shape type.
 * @return Returns the type of the shape.
 */
std::string Triangle::type() const {
    return "Triangle";
}
