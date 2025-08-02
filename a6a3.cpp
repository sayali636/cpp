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

    // Display function
    void display() {
        cout << "Value: " << value << endl;
    }

    // Overload pre-decrement (--x)
    Integer operator--() {
        --value;
        return *this;
    }

    // Overload post-decrement (x--)
    Integer operator--(int) {
        Integer temp = *this;
        value--;
        return temp;
    }
};

int main() {
    Integer num(10);

    cout << "Original: ";
    num.display();

    --num;  // Pre-decrement
    cout << "After Pre-decrement (--num): ";
    num.display();

    num--;  // Post-decrement
    cout << "After Post-decrement (num--): ";
    num.display();

    return 0;
}

