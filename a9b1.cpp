#include <iostream>
using namespace std;

// Class template to calculate square
template <typename T>
class Square {
private:
    T number;

public:
    // Constructor
    Square(T n) {
        number = n;
    }

    // Method to calculate and return square
    T getSquare() {
        return number * number;
    }
};

int main() {
    // Integer
    Square<int> intObj(5);
    cout << "Square of integer 5: " << intObj.getSquare() << endl;

    // Float
    Square<float> floatObj(4.5f);
    cout << "Square of float 4.5: " << floatObj.getSquare() << endl;

    // Double
    Square<double> doubleObj(6.78);
    cout << "Square of double 6.78: " << doubleObj.getSquare() << endl;

    return 0;
}

