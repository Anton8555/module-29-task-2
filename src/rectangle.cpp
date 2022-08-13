#include "rectangle.h"
#include <cassert>

// constructors
Rectangle::Rectangle(double inWidth, double inHeight): width (inWidth), height (inHeight) {
    assert( (width > 0) && (height > 0) );
}

// setters
void Rectangle::setWidth(double inWidth) { width = inWidth; }
void Rectangle::setHeight(double inHeight) { height = inHeight; }

// getters
double Rectangle::getWidth() const { return width; }
double Rectangle::getHeight() const { return height; }

// methods

/*!
 * @brief Subroutine for calculating the area of a figure.
 * @return Returns the area of the shape.
 */
double Rectangle::square() const {
    return width * height;
}

/*!
 * @brief The dimensions of the rectangle that describes the figure.
 * @return Returns the dimensions of the rectangle.
 */
BoundingBoxDimensions Rectangle::dimensions() const {
    return {width, height};
}

/*!
 * @brief Shape type.
 * @return Returns the type of the shape.
 */
std::string Rectangle::type() const {
    return "Rectangle";
}
