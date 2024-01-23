#ifndef SHAPES_HPP
#define SHAPES_HPP

#include <iostream>
#include <string>
#include <memory>
#include <vector>
#include <algorithm>

// Abstract base class
class Shape {
public:
    virtual void draw() const = 0;
    virtual ~Shape() = default;
};

// Derived class: Circle
class Circle : public Shape {
public:
    void draw() const override {
        std::cout << "Drawing a Circle." << std::endl;
    }
};

// Derived class: Rectangle
class Rectangle : public Shape {
public:
    void draw() const override {
        std::cout << "Drawing a Rectangle." << std::endl;
    }
};

#endif // SHAPES_HPP
