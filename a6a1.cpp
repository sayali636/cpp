#include <iostream>
#include <cmath>  // for M_PI and sqrt
using namespace std;

class Area {
public:
    // Function to calculate area of circle: p * r^2
    void calculate(float radius) {
        float area = M_PI * radius * radius;
        cout << "Area of Circle: " << area << endl;
    }

    // Function to calculate surface area of sphere: 4 * p * r^2
    void calculate(double radius) {
        double area = 4 * M_PI * radius * radius;
        cout << "Surface Area of Sphere: " << area << endl;
    }

    // Function to calculate surface area of cone: p * r * (r + l)
    void calculate(float radius, float height) {
        float slant_height = sqrt(radius * radius + height * height);
        float area = M_PI * radius * (radius + slant_height);
        cout << "Surface Area of Cone: " << area << endl;
    }
};

int main() {
    Area obj;

    float r1 = 5;
    double r2 = 4.5;
    float r3 = 3, h3 = 4;

    obj.calculate(r1);           // Circle
    obj.calculate(r2);           // Sphere
    obj.calculate(r3, h3);       // Cone

    return 0;
}

