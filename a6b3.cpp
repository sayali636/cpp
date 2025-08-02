#include <iostream>
#include <cstring>
using namespace std;

class MyString {
private:
    char* str;

public:
    // Constructor
    MyString(const char* s = "") {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }

    // Copy constructor
    MyString(const MyString& other) {
        str = new char[strlen(other.str) + 1];
        strcpy(str, other.str);
    }

    // Destructor
    ~MyString() {
        delete[] str;
    }

    // Overload < to compare length
    bool operator<(const MyString& other) {
        return strlen(str) < strlen(other.str);
    }

    // Overload != to compare strings
    bool operator!=(const MyString& other) {
        return strcmp(str, other.str) != 0;
    }

    // Overload + to concatenate strings
    MyString operator+(const MyString& other) {
        char* temp = new char[strlen(str) + strlen(other.str) + 1];
        strcpy(temp, str);
        strcat(temp, other.str);
        MyString result(temp);
        delete[] temp;
        return result;
    }

    // Display function
    void display() {
        cout << str << endl;
    }
};

int main() {
    MyString s1("Hello");
    MyString s2("World");

    cout << "String 1: ";
    s1.display();

    cout << "String 2: ";
    s2.display();

    // Compare length
    if (s1 < s2)
        cout << "String 1 is shorter than String 2" << endl;
    else
        cout << "String 1 is not shorter than String 2" << endl;

    // Compare equality
    if (s1 != s2)
        cout << "Strings are not equal" << endl;
    else
        cout << "Strings are equal" << endl;

    // Concatenate
    MyString s3 = s1 + s2;
    cout << "Concatenated String: ";
    s3.display();

    return 0;
}

