#include <iostream>
using namespace std;

const int MAX = 100;

template <typename T>
class Stack {
private:
    T stack[MAX];
    int top;

public:
    // Constructor
    Stack() {
        top = -1;
    }

    // Push operation
    void push(T value) {
        if (top >= MAX - 1) {
            cout << "Stack Overflow!" << endl;
        } else {
            stack[++top] = value;
            cout << value << " pushed to stack." << endl;
        }
    }

    // Pop operation
    void pop() {
        if (top < 0) {
            cout << "Stack Underflow!" << endl;
        } else {
            cout << stack[top--] << " popped from stack." << endl;
        }
    }

    // Display the stack
    void display() const {
        if (top < 0) {
            cout << "Stack is empty." << endl;
        } else {
            cout << "Stack elements: ";
            for (int i = top; i >= 0; --i) {
                cout << stack[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Stack<int> intStack;
    intStack.push(10);
    intStack.push(20);
    intStack.display();
    intStack.pop();
    intStack.display();

    cout << "\n---\n";

    Stack<char> charStack;
    charStack.push('A');
    charStack.push('B');
    charStack.display();
    charStack.pop();
    charStack.display();

    return 0;
}

