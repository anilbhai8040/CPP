#include <iostream>
using namespace std;

int main() {
    int d, m, y;
    int month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    cout << "Enter the value of Date, month & year (DD MM YYYY): ";
    cin >> d >> m >> y;

    // Check for Leap Year
    if (y % 4 == 0 && (y % 100 != 0 || y % 400 == 0)) {
        month[1] = 29;
    }

    if (d < month[m - 1]) {
        d++;
    } else if (m < 12) {
        d = 1;
        m++;
    } else {
        d = 1;
        m = 1;
        y++;
    }

    cout << "The new date is: " << d << "-" << m << "-" << y << "\n";
    return 0;
}