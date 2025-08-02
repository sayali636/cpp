#include <iostream>
#include <cmath>  // for sqrt()
using namespace std;

class Point {
private:
    float x, y;

public:
    // Function to accept a point
    void accept() {
        cout << "Enter x and y coordinates: ";
        cin >> x >> y;
    }

    // Function to display a point
    void display() {
        cout << "(" << x << ", " << y << ")" << endl;
    }

    // Friend function to overload - operator
    friend float operator-(Point p1, Point p2);
};

// Definition of overloaded - operator using friend
float operator-(Point p1, Point p2) {
    float dx = p1.x - p2.x;
    float dy = p1.y - p2.y;
    return sqrt(dx * dx + dy * dy); // Distance formula
}

int main() {
    Point p1, p2;

    cout << "Enter Point 1:" << endl;
    p1.accept();

    cout << "Enter Point 2:" << endl;
    p2.accept();

    cout << "\nPoint 1: ";
    p1.display();

    cout << "Point 2: ";
    p2.display();

    float distance = p1 - p2;  // Calls overloaded operator-
    cout << "\nDistance between points: " << distance << endl;

    return 0;
}

