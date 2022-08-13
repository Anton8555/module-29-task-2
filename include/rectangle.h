#pragma once

#include "shape.h"

class Rectangle: virtual public Shape {
    double width = 0;
    double height = 0;
public:
    // constructors
    Rectangle(double inWidth, double inHeight);

    // setters
    void setWidth(double inWidth);
    void setHeight(double inHeight);

    // getters
    double getWidth() const;
    double getHeight() const;

    // methods
    virtual double square() const;
    virtual BoundingBoxDimensions dimensions() const;
    virtual std::string type() const;
};