#include <iostream>
using namespace std;

// Template function to sort an array using bubble sort
template <typename T>
void sortArray(T arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
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
    int intArr[SIZE] = {25, 10, 5, 30, 15};
    // Float array
    float floatArr[SIZE] = {3.5f, 1.2f, 4.8f, 2.9f, 0.5f};
    // Character array
    char charArr[SIZE] = {'e', 'a', 'd', 'b', 'c'};

    cout << "Original integer array: ";
    displayArray(intArr, SIZE);
    sortArray(intArr, SIZE);
    cout << "Sorted integer array: ";
    displayArray(intArr, SIZE);

    cout << "\nOriginal float array: ";
    displayArray(floatArr, SIZE);
    sortArray(floatArr, SIZE);
    cout << "Sorted float array: ";
    displayArray(floatArr, SIZE);

    cout << "\nOriginal character array: ";
    displayArray(charArr, SIZE);
    sortArray(charArr, SIZE);
    cout << "Sorted character array: ";
    displayArray(charArr, SIZE);

    return 0;
}

