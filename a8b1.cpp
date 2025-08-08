#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Newspaper {
private:
    string name;
    string publisher;
    float cost;

public:
    // Accept details from user
    void accept() {
        cout << "Enter Newspaper Name: ";
        getline(cin, name);
        cout << "Enter Publisher: ";
        getline(cin, publisher);
        cout << "Enter Cost: ";
        cin >> cost;
        cin.ignore(); // Clear newline from input buffer
    }

    // Display details
    void display() const {
        cout << "Name: " << name << "\nPublisher: " << publisher << "\nCost: " << cost << "\n";
        cout << "-----------------------------\n";
    }

    // Write object to binary file
    void writeToFile(ofstream &out) const {
        size_t len;

        len = name.length();
        out.write((char*)&len, sizeof(len));
        out.write(name.c_str(), len);

        len = publisher.length();
        out.write((char*)&len, sizeof(len));
        out.write(publisher.c_str(), len);

        out.write((char*)&cost, sizeof(cost));
    }

    // Read object from binary file
    void readFromFile(ifstream &in) {
        size_t len;
        char *buffer;

        in.read((char*)&len, sizeof(len));
        buffer = new char[len + 1];
        in.read(buffer, len);
        buffer[len] = '\0';
        name = buffer;
        delete[] buffer;

        in.read((char*)&len, sizeof(len));
        buffer = new char[len + 1];
        in.read(buffer, len);
        buffer[len] = '\0';
        publisher = buffer;
        delete[] buffer;

        in.read((char*)&cost, sizeof(cost));
    }
};

int main() {
    int choice;
    do {
        cout << "\n--- Newspaper Management ---\n";
        cout << "1. Add Newspapers\n";
        cout << "2. Display Newspapers\n";
        cout << "3. Count Newspapers\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(); // Clear newline

        if (choice == 1) {
            int n;
            cout << "How many newspapers do you want to add? ";
            cin >> n;
            cin.ignore();
            ofstream outFile("Newspaper.txt", ios::binary | ios::app);

            for (int i = 0; i < n; ++i) {
                Newspaper paper;
                cout << "\nEnter details for newspaper " << i + 1 << ":\n";
                paper.accept();
                paper.writeToFile(outFile);
            }

            outFile.close();
        } else if (choice == 2) {
            ifstream inFile("Newspaper.txt", ios::binary);
            if (!inFile) {
                cout << "File could not be opened!" << endl;
                continue;
            }

            Newspaper paper;
            cout << "\n--- Newspaper Records ---\n";
            while (inFile.peek() != EOF) {
                paper.readFromFile(inFile);
                paper.display();
            }

            inFile.close();
        } else if (choice == 3) {
            ifstream inFile("Newspaper.txt", ios::binary);
            if (!inFile) {
                cout << "File could not be opened!" << endl;
                continue;
            }

            int count = 0;
            Newspaper paper;
            while (inFile.peek() != EOF) {
                paper.readFromFile(inFile);
                count++;
            }

            cout << "\nTotal newspapers stored: " << count << endl;
            inFile.close();
        }

    } while (choice != 0);

    return 0;
}

