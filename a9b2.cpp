#include <iostream>
using namespace std;

const double PI = 3.141592653589793;

// Template function to calculate area of a circle
template <typename T>
T areaOfCircle(T radius) {
    return static_cast<T>(PI) * radius * radius;
}

// Template function to calculate area of a rectangle
template <typename T>
T areaOfRectangle(T length, T width) {
    return length * width;
}

int main() {
    // Circle areas
    int r1 = 5;
    float r2 = 4.5f;
    cout << "Area of circle (int radius 5): " << areaOfCircle(r1) << endl;
    cout << "Area of circle (float radius 4.5): " << areaOfCircle(r2) << endl;

    // Rectangle areas
    int l1 = 10, w1 = 4;
    double l2 = 7.2, w2 = 3.5;
    cout << "\nArea of rectangle (int 10x4): " << areaOfRectangle(l1, w1) << endl;
    cout << "Area of rectangle (double 7.2x3.5): " << areaOfRectangle(l2, w2) << endl;

    return 0;
}

