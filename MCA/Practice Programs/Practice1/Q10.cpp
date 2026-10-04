#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cout << "Enter the no of terms: ";
    cin >> n;

    cout << "\nFibonacci Series (2 Variables):\n";
    int f1 = 0, f2 = 1;
    for (int i = 1; i <= n; i++) {
        cout << setw(5) << f1;
        f2 = f1 + f2;
        f1 = f2 - f1;
    }
    cout << "\n";

    cout << "\nLucas Series (2 Variables):\n";
    int l1 = 1, l2 = 3;
    for (int i = 1; i <= n; i++) {
        cout << setw(5) << l1;
        l2 = l1 + l2;
        l1 = l2 - l1;
    }
    cout << "\n";

    return 0;
}