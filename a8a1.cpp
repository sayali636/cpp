#include <iostream>
#include <fstream>
#include <cstdlib> // for atoi
using namespace std;

int main(int argc, char* argv[]) {
    if (argc < 2) {
        cout << "Please provide numbers as command line arguments.\n";
        cout << "Example: ./program 10 -5 20 -15 0\n";
        return 1;
    }

    ofstream posFile("Positive.txt");
    ofstream negFile("Negative.txt");

    if (!posFile || !negFile) {
        cerr << "Error creating output files.\n";
        return 1;
    }

    cout << "Processing numbers...\n";

    for (int i = 1; i < argc; ++i) {
        int num = atoi(argv[i]);
        if (num >= 0) {
            posFile << num << " ";
        } else {
            negFile << num << " ";
        }
    }

    posFile.close();
    negFile.close();

    cout << "Numbers saved to Positive.txt and Negative.txt successfully.\n";

    return 0;
}

