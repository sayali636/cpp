#include <iostream>
using namespace std;

// Template function to reverse an array
template <typename T>
void reverseArray(T arr[], int size) {
    for (int i = 0; i < size / 2; ++i) {
        T temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}

// Template function to display an array
template <typename T>
void displayArray(T arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    const int SIZE = 5;

    // Integer array
    int intArray[SIZE];
    cout << "Enter " << SIZE << " integer values:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        cin >> intArray[i];
    }

    // Character array
    char charArray[SIZE];
    cout << "Enter " << SIZE << " characters:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        cin >> charArray[i];
    }

    // Reverse and display arrays
    reverseArray(intArray, SIZE);
    reverseArray(charArray, SIZE);

    cout << "\nReversed integer array: ";
    displayArray(intArray, SIZE);

    cout << "Reversed character array: ";
    displayArray(charArray, SIZE);

    return 0;
}

