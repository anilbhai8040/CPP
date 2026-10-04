#include <iostream>
using namespace std;

int main() {
    int a[50], no;
    cout << "Enter no of Elements: ";
    cin >> no;

    for (int i = 0; i < no; i++) {
        cout << "Enter a[" << i << "] = ";
        cin >> a[i];
    }

    char ans = 'E'; // 'E' represents All Equal initially
    for (int i = 0; i < no - 1; i++) {
        if (a[i] == a[i + 1]) {
            continue;
        } else if (a[i] < a[i + 1]) {
            if (ans == 'D') { ans = 'N'; break; }
            ans = 'A';
        } else {
            if (ans == 'A') { ans = 'N'; break; }
            ans = 'D';
        }
    }

    if (ans == 'A') cout << "\nArray sorted in Ascending order\n";
    else if (ans == 'D') cout << "\nArray sorted in Descending order\n";
    else if (ans == 'E') cout << "\nAll elements are equal\n";
    else cout << "\nNot Sorted\n";

    return 0;
}