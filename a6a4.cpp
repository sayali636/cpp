#include <iostream>
using namespace std;

class Integer {
private:
    int value;

public:
    // Constructor
    Integer(int v = 0) {
        value = v;
    }

    // Overload + operator
    Integer operator+(const Integer& obj) {
        return Integer(value + obj.value);
    }

    // Overload - operator
    Integer operator-(const Integer& obj) {
        return Integer(value - obj.value);
    }

    // Overload * operator
    Integer operator*(const Integer& obj) {
        return Integer(value * obj.value);
    }

    // Overload / operator
    Integer operator/(const Integer& obj) {
        if (obj.value != 0)
            return Integer(value / obj.value);
        else {
            cout << "Error: Division by zero!" << endl;
            return Integer(0);
        }
    }

    // Display function
    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Integer a(20), b(5);

    Integer sum = a + b;
    Integer diff = a - b;
    Integer product = a * b;
    Integer quotient = a / b;

    cout << "Addition: ";
    sum.display();

    cout << "Subtraction: ";
    diff.display();

    cout << "Multiplication: ";
    product.display();

    cout << "Division: ";
    quotient.display();

    return 0;
}

