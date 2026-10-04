#include <iostream>
#include <fstream>
#include <cstring> // For strcpy if needed

using namespace std;

int main() 
{
    char a[50], b[50];  // Make sure buffer size matches
    
    cout << "Enter text: ";
    cin >> a;  // Note: `cin >> a;` only takes input until the first space
    
    // Writing to file
    ofstream abc("demo.txt");
    if (!abc) {
        cout << "Error opening file for writing!" << endl;
        return 1;
    }
    abc << a << endl;
    cout << "Enter text: ";
    cin >> a;  // Note: `cin >> a;` only takes input until the first space
    abc << a << endl;  // Writing two lines
    abc.close();

    // Reading from file
    ifstream xyz("demo.txt");
    if (!xyz) {
        cout << "Error opening file for reading!" << endl;
        return 1;
    }

    xyz.getline(b, 50);  // Read first line
    cout << "Read from file: " << b << endl;
    xyz.getline(b, 50);  // Read second line

    cout << "Read from file: " << b << endl;

    xyz.close();
    
    return 0;
}