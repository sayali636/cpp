#include <iostream>
#include <cmath> // for M_PI and sqrt (if needed)
using namespace std;

// Base class
class Shape {
public:
    // Pure virtual function
    virtual void calculateArea() = 0;
};

// Derived class: Circle
class Circle : public Shape {
private:
    float radius;

public:
    void getData() {
        cout << "Enter radius of circle: ";
        cin >> radius;
    }

    void calculateArea() override {
        float area = 3.14159 * radius * radius;
        cout << "Area of Circle: " << area << endl;
    }
};

// Derived class: Rectangle
class Rectangle : public Shape {
private:
    float length, width;

public:
    void getData() {
        cout << "Enter length and width of rectangle: ";
        cin >> length >> width;
    }

    void calculateArea() override {
        float area = length * width;
        cout << "Area of Rectangle: " << area << endl;
    }
};

// Derived class: Triangle
class Triangle : public Shape {
private:
    float base, height;

public:
    void getData() {
        cout << "Enter base and height of triangle: ";
        cin >> base >> height;
    }

    void calculateArea() override {
        float area = 0.5 * base * height;
        cout << "Area of Triangle: " << area << endl;
    }
};

// Main function
int main() {
    Circle c;
    Rectangle r;
    Triangle t;

    Shape* shape;

    // Circle
    c.getData();
    shape = &c;
    shape->calculateArea();

    // Rectangle
    r.getData();
    shape = &r;
    shape->calculateArea();

    // Triangle
    t.getData();
    shape = &t;
    shape->calculateArea();

    return 0;
}

