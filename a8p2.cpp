#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream source("source.txt");
    ofstream destination("destination.txt");

    if (!source || !destination) {
        cout << "Error opening file." << endl;
        return 1;
    }

    char ch;
    bool lastWasSpace = false;

    while (source.get(ch)) {
        if (ch == ' ') {
            if (!lastWasSpace) {
                destination.put(ch);
                lastWasSpace = true;
            }
        } else {
            destination.put(ch);
            lastWasSpace = false;
        }
    }

    source.close();
    destination.close();

    cout << "Done. Extra spaces removed." << endl;
    return 0;
}

