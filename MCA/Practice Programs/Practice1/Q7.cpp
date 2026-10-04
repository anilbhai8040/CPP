#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string str;
    cout << "Enter the String: ";
    cin.ignore();
    getline(cin, str);

    stringstream ss(str);
    string word, maxWord = "";

    while (ss >> word) {
        if (word.length() > maxWord.length()) {
            maxWord = word;
        }
    }

    cout << "Longest Word: " << maxWord << "\n";
    cout << "Length: " << maxWord.length() << " characters\n";

    return 0;
}