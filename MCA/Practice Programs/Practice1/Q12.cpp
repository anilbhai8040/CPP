#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int spaces = (n - i) * 3;
        if (spaces > 0) {
            cout << setw(spaces) << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << setw(3) << j;
        }
        cout << "\n";
    }
    return 0;
}