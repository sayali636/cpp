#include <iostream>
using namespace std;

// Function template for swapping two values
template <typename T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int int1 = 10, int2 = 20;
    float float1 = 1.5f, float2 = 2.5f;

    cout << "Before swapping:" << endl;
    cout << "Integers: " << int1 << " and " << int2 << endl;
    cout << "Floats: " << float1 << " and " << float2 << endl;

    // Swap integers
    swapValues(int1, int2);
    // Swap floats
    swapValues(float1, float2);

    cout << "\nAfter swapping:" << endl;
    cout << "Integers: " << int1 << " and " << int2 << endl;
    cout << "Floats: " << float1 << " and " << float2 << endl;

    return 0;
}

