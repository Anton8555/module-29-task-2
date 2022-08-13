#pragma once

#include "shape.h"

class Triangle : virtual public Shape {
    double a=0, b=0, c=0;
public:
    // constructors
    Triangle(double inA, double inB, double inC);

    // setters
    void setSide_A(double inA);
    void setSide_B(double inB);
    void setSide_C(double inC);

    // getters
    double getSide_A() const;
    double getSide_B() const;
    double getSide_C() const;

    // methods
    virtual double square() const;
    virtual BoundingBoxDimensions dimensions() const;
    virtual std::string type() const;
};
