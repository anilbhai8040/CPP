#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cout << "Enter no of terms: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        long long term = (1LL * (i + 1) * (i + 1)) - i;
        cout << setw(6) << term << (i == n ? "." : ", ");
        if (i % 10 == 0) {
            cout << "\n";
        }
    }
    cout << "\n";
    return 0;
}