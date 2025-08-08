#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream file("sample.txt");
    if (!file) {
        cout << "File could not be opened!" << endl;
        return 1;
    }

    string wordToFind;
    cout << "Enter the word to search: ";
    cin >> wordToFind;

    int charCount = 0, wordCount = 0, lineCount = 0, spaceCount = 0, foundCount = 0;
    string word;

    while (!file.eof()) {
        char ch = file.get();
        if (file.eof()) break;

        charCount++;
        if (ch == ' ') spaceCount++;
        if (ch == '\n') lineCount++;
    }

    // Reset file pointer to beginning
    file.clear();
    file.seekg(0);

    while (file >> word) {
        wordCount++;
        if (word == wordToFind) foundCount++;
    }

    file.close();

    cout << "\nCharacters: " << charCount;
    cout << "\nWords: " << wordCount;
    cout << "\nLines: " << lineCount + 1; // +1 to count the last line
    cout << "\nSpaces: " << spaceCount;
    cout << "\nOccurrences of \"" << wordToFind << "\": " << foundCount << endl;

    return 0;
}

