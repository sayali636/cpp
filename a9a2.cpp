#include <iostream>
using namespace std;

// Template function to find maximum
template <typename T>
T findMax(T a, T b) {
    return (a > b) ? a : b;
}

// Template function to find minimum
template <typename T>
T findMin(T a, T b) {
    return (a < b) ? a : b;
}

int main() {
    int int1 = 10, int2 = 25;
    float float1 = 3.5f, float2 = 2.8f;

    cout << "Integer values: " << int1 << " and " << int2 << endl;
    cout << "Maximum (int): " << findMax(int1, int2) << endl;
    cout << "Minimum (int): " << findMin(int1, int2) << endl;

    cout << "\nFloat values: " << float1 << " and " << float2 << endl;
    cout << "Maximum (float): " << findMax(float1, float2) << endl;
    cout << "Minimum (float): " << findMin(float1, float2) << endl;

    return 0;
}

