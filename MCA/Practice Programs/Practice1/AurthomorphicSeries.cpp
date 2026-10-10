#include <iostream>
using namespace std;

int main() {
    int n, sq, temp, div;

    cout << "Enter the limit: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        sq = i * i;
        temp = i;
        div = 1;

        while (temp > 0) {
            div *= 10;
            temp /= 10;
        }

        if (sq % div == i)
            cout << i << " ";
    }

    return 0;
}
