#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter the character string in Capital (e.g. A-E): ";
    cin >> str;

    if (str.length() >= 3 && str[1] == '-') {
        char current = str[0];
        char target = str[2];

        cout << "Character Sequence: ";
        while (true) {
            cout << current << " ";
            if (current == target) break;
            current++;
            if (current > 'Z') current = 'A';
        }
        cout << "\n";
    } else {
        cout << "Invalid format. Expected format: Start-End\n";
    }
    return 0;
}