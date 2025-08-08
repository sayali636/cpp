#include <iostream>
#include <fstream>
#include <cstring>
#include <cctype>
using namespace std;

class MyFile {
private:
    fstream fp;
    char* fn;

public:
    // Constructor
    MyFile(const char* filename) {
        fn = new char[strlen(filename) + 1];
        strcpy(fn, filename);
    }

    // Destructor
    ~MyFile() {
        delete[] fn;
    }

    // Function to write data to the file
    void writeData() {
        fp.open(fn, ios::out);
        if (!fp) {
            cerr << "Error opening file for writing: " << fn << endl;
            return;
        }

        cout << "Enter text for file (" << fn << "): ";
        cin.ignore();
        string data;
        getline(cin, data);
        fp << data;
        fp.close();
    }

    // Function to display file content
    void display() {
        fp.open(fn, ios::in);
        if (!fp) {
            cerr << "Error opening file for reading: " << fn << endl;
            return;
        }

        string line;
        cout << "\nContent of file (" << fn << "):\n";
        while (getline(fp, line)) {
            cout << line << endl;
        }
        fp.close();
    }

    // Overload + to merge two files into a new file
    MyFile operator+(MyFile &other) {
        MyFile temp("merged.txt");

        // Open current file
        fp.open(fn, ios::in);
        ofstream out(temp.fn);
        if (fp && out) {
            string line;
            while (getline(fp, line)) {
                out << line << endl;
            }
            fp.close();
        }

        // Open other file
        other.fp.open(other.fn, ios::in);
        if (other.fp && out) {
            string line;
            while (getline(other.fp, line)) {
                out << line << endl;
            }
            other.fp.close();
        }

        out.close();
        return temp;
    }

    // Overload unary - to invert case of file content
    void operator-() {
        // Read content
        fp.open(fn, ios::in);
        if (!fp) {
            cerr << "Error opening file to read for case conversion." << endl;
            return;
        }

        string content, line;
        while (getline(fp, line)) {
            for (char &ch : line) {
                if (islower(ch)) ch = toupper(ch);
                else if (isupper(ch)) ch = tolower(ch);
            }
            content += line + "\n";
        }
        fp.close();

        // Write back modified content
        fp.open(fn, ios::out);
        fp << content;
        fp.close();
    }
};

// Main function to demonstrate functionality
int main() {
    MyFile f1("file1.txt");
    MyFile f2("file2.txt");

    f1.writeData();
    f2.writeData();

    MyFile f3 = f1 + f2; // Merge contents
    f3.display();

    -f3; // Invert case
    cout << "\nAfter case inversion:\n";
    f3.display();

    return 0;
}

