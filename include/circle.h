#pragma once

#include "shape.h"

class Circle: virtual public Shape {
    double radius = 0;
public:
    // constructors
    Circle(double inRadius);

    // setters
    void setRadius(double inRadius);

    // getters
    double getRadius() const;

    // methods
    virtual double square() const;
    virtual BoundingBoxDimensions dimensions() const;
    virtual std::string type() const;
};