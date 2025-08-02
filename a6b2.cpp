#include <iostream>
using namespace std;

class Date {
private:
    int dd, mm, yyyy;

public:
    // Friend function to overload >> operator (input)
    friend istream& operator>>(istream& in, Date& d);

    // Friend function to overload << operator (output)
    friend ostream& operator<<(ostream& out, const Date& d);
};

// Overloading >> operator
istream& operator>>(istream& in, Date& d) {
    cout << "Enter day: ";
    in >> d.dd;
    cout << "Enter month: ";
    in >> d.mm;
    cout << "Enter year: ";
    in >> d.yyyy;
    return in;
}

// Overloading << operator
ostream& operator<<(ostream& out, const Date& d) {
    out << d.dd << "/" << d.mm << "/" << d.yyyy;
    return out;
}

int main() {
    Date today;

    // Input using overloaded >>
    cin >> today;

    // Output using overloaded <<
    cout << "The entered date is: " << today << endl;

    return 0;
}

