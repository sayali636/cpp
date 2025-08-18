#include <iostream>
#include <vector>
using namespace std;

template <typename T>
class GenericVector {
private:
    vector<T> elements;

public:
    // i. Create the vector
    void createVector(int size) {
        elements.resize(size);
        cout << "Enter " << size << " elements:" << endl;
        for (int i = 0; i < size; ++i) {
            cin >> elements[i];
        }
    }

    // ii. Modify a given element
    void modifyElement(int index, T value) {
        if (index >= 0 && index < elements.size()) {
            elements[index] = value;
        } else {
            cout << "Index out of bounds!" << endl;
        }
    }

    // iii. Multiply the vector by a scalar value
    void multiplyByScalar(T scalar) {
        for (int i = 0; i < elements.size(); ++i) {
            elements[i] *= scalar;
        }
    }

    // iv. Display the vector
    void display() const {
        cout << "(";
        for (size_t i = 0; i < elements.size(); ++i) {
            cout << elements[i];
            if (i != elements.size() - 1)
                cout << ", ";
        }
        cout << ")" << endl;
    }
};

int main() {
    GenericVector<int> intVec;

    int size;
    cout << "Enter the size of the vector: ";
    cin >> size;

    // i. Create the vector
    intVec.createVector(size);

    // ii. Modify an element
    int index, newValue;
    cout << "Enter index to modify and new value: ";
    cin >> index >> newValue;
    intVec.modifyElement(index, newValue);

    // iii. Multiply by scalar
    int scalar;
    cout << "Enter scalar to multiply the vector: ";
    cin >> scalar;
    intVec.multiplyByScalar(scalar);

    // iv. Display the vector
    cout << "Resulting vector: ";
    intVec.display();

    return 0;
}

