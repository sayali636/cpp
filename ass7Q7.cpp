#include <iostream>
#include <iomanip>
using namespace std;

// User-defined manipulator to print a line
ostream& line(ostream &out)
 {
    out << "------------------------------------------------------------\n";
    return out;
}

class Marksheet 
{
private:
    string seatNo, studentName, className;
    string subject[4];
    int intMarks[4], extMarks[4], total[4];
    int grandTotal = 0;
    float percentage;
    char grade;

public:
    void acceptData()
	 {
        cout << "Enter Seat No: ";
        getline(cin, seatNo);
        cout << "Enter Student Name: ";
        getline(cin, studentName);
        cout << "Enter Class: ";
        getline(cin, className);

        for (int i = 0; i < 4; i++)
		 {
            cout << "\nSubject " << i + 1 << " Name: ";
            getline(cin, subject[i]);
            cout << "Internal Marks (out of 30): ";
            cin >> intMarks[i];
            cout << "External Marks (out of 70): ";
            cin >> extMarks[i];
            total[i] = intMarks[i] + extMarks[i];
            grandTotal += total[i];
            cin.ignore(); // clear buffer
        }

        percentage = grandTotal / 4.0;

        // Simple grading
        if (percentage >= 75) grade = 'A';
        else if (percentage >= 60) grade = 'B';
        else if (percentage >= 50) grade = 'C';
        else if (percentage >= 35) grade = 'D';
        else grade = 'F';
    }

    void displayData()
	 {
        cout << line;
        cout << "Marksheet\n";
        cout << line;
        cout << "Seat No: " << seatNo << "\tName: " << studentName << "\tClass: " << className << endl;
        cout << line;

        cout << left << setw(15) << "Subject" 
             << setw(10) << "Int" 
             << setw(10) << "Ext" 
             << setw(10) << "Total" << endl;

        for (int i = 0; i < 4; i++) 
		{
            cout << left << setw(15) << subject[i] 
                 << setw(10) << intMarks[i] 
                 << setw(10) << extMarks[i] 
                 << setw(10) << total[i] << endl;
        }

        cout << line;
        cout << "Grand Total: " << grandTotal << endl;
        cout << "Percentage : " << fixed << setprecision(2) << percentage << "%" << endl;
        cout << "Grade      : " << grade << endl;
        cout << line;
    }
};

int main()
{
    Marksheet m;
    m.acceptData();
    m.displayData();
    return 0;
}

