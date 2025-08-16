#include <iostream>
#include <iomanip>
using namespace std;
class Employee
{
private:
    int Emp_Id;
    string ename;
    float BSalary;
    float HRA;
    float DA;
    float GSalary;

public:
    void acceptData() 
	{
        cout << "Enter Employee ID: ";
        cin >> Emp_Id;
        cout << "Enter Employee Name: ";
        cin >> ename;
        cout << "Enter Basic Salary: ";
        cin >> BSalary;

        // Calculate HRA and DA
        HRA = 0.40 * BSalary;
        DA = 0.25 * BSalary;

        // Calculate Gross Salary
        GSalary = BSalary + HRA + DA;
    }

    void displayData() 
	{
        cout << left << setw(10)<< "Emp_ID" << Emp_Id<< endl;
        cout<< left << setw(20) <<"Emp_Name"<< ename<< endl;
        cout<< setw(5) <<"Basic_Salary"<< BSalary<< endl;
        cout<< setw(3) <<"HAR"<< HRA<< endl;
        cout<< setw(5) <<"DA"<< DA<< endl;
        cout<< setw(6) <<"gross_Salary"<< GSalary << endl;
    }
};

int main() 
{
    Employee emp;
    emp.acceptData();

    cout << "\n Employee Salary Details\n";
    emp.displayData();

}

