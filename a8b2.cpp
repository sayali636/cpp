#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

char calculateGrade(float avg) {
    if (avg >= 90) return 'A';
    else if (avg >= 80) return 'B';
    else if (avg >= 70) return 'C';
    else if (avg >= 60) return 'D';
    else return 'F';
}

int main() {
    ifstream inputFile("students.txt");
    ofstream outputFile("results.txt");

    if (!inputFile || !outputFile) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    string name;
    int score1, score2, score3;
    const int NUM_STUDENTS = 4;

    for (int i = 0; i < NUM_STUDENTS; ++i) {
        inputFile >> name >> score1 >> score2 >> score3;

        float average = (score1 + score2 + score3) / 3.0;
        char grade = calculateGrade(average);

        outputFile << fixed << setprecision(2);
        outputFile << name << ": Average = " << average << ", Grade = " << grade << endl;
    }

    inputFile.close();
    outputFile.close();

    cout << "Processing complete. Check 'results.txt' for output." << endl;
    return 0;
}

