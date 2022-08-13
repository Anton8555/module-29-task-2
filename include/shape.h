#pragma once

#include <iostream>

// a simple structure that contains the width and height;
struct BoundingBoxDimensions {
    double width;
    double height;
};

class Shape {
public:
    // returns the area of a particular figure;
    virtual double square() const = 0;

    // the size of the circumscribing rectangle;
    virtual BoundingBoxDimensions dimensions() const = 0;

    // the name of the concrete type, for example, return the string 'Triangle' for the Triangle class;
    virtual std::string type() const = 0;
};
