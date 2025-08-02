#include <iostream>
using namespace std;

class Person {
private:
    int Passport_Id;
    string Person_name;
    string Nationality;
    string Gender;
    string Date_of_Birth;
    string Date_of_Issue;
    string Date_of_Expiry;

public:
    // Function to enter details
    void enterDetails() {
        cout << "Enter Passport ID: ";
        cin >> Passport_Id;
        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, Person_name);

        cout << "Enter Nationality: ";
        getline(cin, Nationality);

        cout << "Enter Gender: ";
        getline(cin, Gender);

        cout << "Enter Date of Birth (DD/MM/YYYY): ";
        getline(cin, Date_of_Birth);

        cout << "Enter Date of Issue (DD/MM/YYYY): ";
        getline(cin, Date_of_Issue);

        cout << "Enter Date of Expiry (DD/MM/YYYY): ";
        getline(cin, Date_of_Expiry);
    }

    // Function to display details (no argument ? display all)
    void display() {
        cout << "\nPassport ID: " << Passport_Id;
        cout << "\nName: " << Person_name;
        cout << "\nNationality: " << Nationality;
        cout << "\nGender: " << Gender;
        cout << "\nDate of Birth: " << Date_of_Birth;
        cout << "\nDate of Issue: " << Date_of_Issue;
        cout << "\nDate of Expiry: " << Date_of_Expiry << "\n";
    }

    // Overloaded display function (takes ID ? display one person)
    void display(int id) {
        if (Passport_Id == id) {
            display();
        }
    }

    // Getter for Passport ID
    int getPassportId() {
        return Passport_Id;
    }
};

int main() {
    int n;
    cout << "Enter number of persons: ";
    cin >> n;

    Person persons[100];  // Array of objects

    // Enter details of all persons
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for person " << i + 1 << ":\n";
        persons[i].enterDetails();
    }

    // Display all persons' details
    cout << "\n--- Displaying All Passport Details ---\n";
    for (int i = 0; i < n; i++) {
        persons[i].display();
    }

    // Display details of one person by Passport ID
    int searchId;
    cout << "\nEnter Passport ID to search: ";
    cin >> searchId;

    bool found = false;
    for (int i = 0; i < n; i++) {
        if (persons[i].getPassportId() == searchId) {
            cout << "\n--- Details of Person with Passport ID " << searchId << " ---";
            persons[i].display(searchId);  // Overloaded function call
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Passport ID not found." << endl;
    }

    return 0;
}

