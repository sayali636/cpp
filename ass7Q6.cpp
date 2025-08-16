#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
class Marksheet 
{
private:
    string Seat_No, Student_Name, Class;
    string Subject_Name[4];
    int Int_Marks[4];
    int Ext_Marks[4];
    int Total[4];
    int Grand_Total;
    float Percentage;
    char Grade;

public:
    void acceptData()
	 {
        cout << "Enter Seat No: ";
        getline(cin, Seat_No);
        cout << "Enter Student Name: ";
        getline(cin, Student_Name);
        cout << "Enter Class: ";
        getline(cin, Class);

        Grand_Total = 0;

        for (int i = 0; i < 4; i++) 
		{
            cout << "\nEnter details for Subject " << i + 1 << ":\n";
            cout << "Subject Name: ";
            getline(cin,Subject_Name[i]);

            cout << "Internal Marks (out of 30): ";
            cin >> Int_Marks[i];

            cout << "External Marks (out of 70): ";
            cin >> Ext_Marks[i];

            Total[i] =Int_Marks[i] + Ext_Marks[i];
            Grand_Total += Total[i];

            cin.ignore(); // Clear input buffer
        }

        Percentage = (Grand_Total / 4.0f);
        calculateGrade();
    }

    void calculateGrade() {
        if (Percentage >= 75) Grade = 'A';
        else if (Percentage >= 60) Grade = 'B';
        else if (Percentage >= 50) Grade = 'C';
        else if (Percentage >= 35) Grade = 'D';
        else Grade = 'F';
    }

    void displayMarksheet()
	 {
        cout << separator << endl;
        cout << "Marksheet" << endl;
        cout << separator << endl;
        cout << "Seat No: " << Seat_No << "\tName: " << Student_Name << "\tClass: " << Class << endl;
        cout << separator << endl;

        cout << left << setw(20) << "Subject"
             << setw(15) << "Internal"
             << setw(15) << "External"
             << setw(10) << "Total" << endl;
        cout << separator << endl;

        for (int i = 0; i < 4; i++)
		 {
            cout << left << setw(20) << Subject_Name[i]
                 << setw(15) << Int_Marks[i]
                 << setw(15) << Ext_Marks[i]
                 << setw(10) << Total[i] << endl;
        }

        cout << separator << endl;
        cout << right << setw(50) << "Grand Total: " << Grand_Total << endl;
        cout << right << setw(50) << "Percentage: " << fixed << setprecision(2) << Percentage << "%" << endl;
        cout << right << setw(50) << "Grade: " << Grade << endl;
        cout << separator << endl;
    }
};

int main()
{
    Marksheet m;
    m.acceptData();
    m.displayMarksheet();
    
}

