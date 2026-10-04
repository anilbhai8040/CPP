#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    long long n;
    cout << "Enter the Maximum No: ";
    cin >> n;

    cout << "\nAutomorphic Numbers in range [1, " << n << "]:\n";
    for (long long i = 1; i <= n; i++) {
        long long sq = i * i;
        long long temp = i;
        bool isAutomorphic = true;

        while (temp > 0) {
            if (temp % 10 != sq % 10) {
                isAutomorphic = false;
                break;
            }
            temp /= 10;
            sq /= 10;
        }

        if (isAutomorphic) {
            cout << "Square of " << setw(5) << i << " ==> " << setw(10) << (i * i) << "\n";
        }
    }
    return 0;
}