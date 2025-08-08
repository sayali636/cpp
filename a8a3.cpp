#include <iostream>
#include <fstream>
using namespace std;

class Employee {
    int Emp_No;
    char Emp_Name[50];
    float Emp_Marks;

public:
    void accept() {
        cout << "Enter Employee Number: ";
        cin >> Emp_No;
        cout << "Enter Employee Name: ";
        cin.ignore();
        cin.getline(Emp_Name, 50);
        cout << "Enter Employee Marks: ";
        cin >> Emp_Marks;
    }

    void display() {
        cout << "Emp No: " << Emp_No << ", Name: " << Emp_Name << ", Marks: " << Emp_Marks << endl;
    }

    int getEmpNo() {
        return Emp_No;
    }

    void write() {
        ofstream file("Emp.dat", ios::binary | ios::app);
        file.write((char*)this, sizeof(*this));
        file.close();
    }

    void readAll() {
        ifstream file("Emp.dat", ios::binary);
        Employee e;
        while (file.read((char*)&e, sizeof(e))) {
            e.display();
        }
        file.close();
    }

    void update(int num) {
        fstream file("Emp.dat", ios::binary | ios::in | ios::out);
        Employee e;
        while (file.read((char*)&e, sizeof(e))) {
            if (e.getEmpNo() == num) {
                cout << "Enter new details:\n";
                accept();
                file.seekp(-sizeof(*this), ios::cur);
                file.write((char*)this, sizeof(*this));
                cout << "Record updated.\n";
                break;
            }
        }
        file.close();
    }
};

int main() {
    Employee e;
    int choice, num;

    do {
        cout << "\n1. Add Employee\n2. Display All\n3. Update Employee\n4. Exit\nEnter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                e.accept();
                e.write();
                break;
            case 2:
                e.readAll();
                break;
            case 3:
                cout << "Enter Employee Number to update: ";
                cin >> num;
                e.update(num);
                break;
        }
    } while (choice != 4);

    return 0;
}

