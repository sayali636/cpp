#include <iostream>
using namespace std;

class Employee {
private:
    int E_no;
    string E_Name;
    string Designation;
    float Salary;

public:
    // Function to accept employee details
    void accept() {
        cout << "Enter Employee Number: ";
        cin >> E_no;
        cin.ignore(); // clear buffer

        cout << "Enter Employee Name: ";
        getline(cin, E_Name);

        cout << "Enter Designation: ";
        getline(cin, Designation);

        cout << "Enter Salary: ";
        cin >> Salary;
    }

    // Function to display employee details
    void display() {
        cout << "\nEmployee Number: " << E_no;
        cout << "\nEmployee Name: " << E_Name;
        cout << "\nDesignation: " << Designation;
        cout << "\nSalary: " << Salary << endl;
    }

    // Function to return employee with max salary using 'this' pointer
    Employee getMax(Employee e) {
        if (this->Salary > e.Salary) {
            return *this;
        } else {
            return e;
        }
    }
};

int main() {
    Employee emp1, emp2, maxEmp;

    cout << "Enter details for Employee 1:\n";
    emp1.accept();

    cout << "\nEnter details for Employee 2:\n";
    emp2.accept();

    // Get employee with max salary
    maxEmp = emp1.getMax(emp2);

    cout << "\nEmployee with Maximum Salary:";
    maxEmp.display();

    return 0;
}

