#include <iostream>
#include <string>
using namespace std;

int main() {
    int d2, m2, y2;
    int month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string days[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

    cout << "Enter Target Date (DD MM YYYY): ";
    cin >> d2 >> m2 >> y2;

    int d1 = 1, m1 = 1, y1 = 1900;
    long totalDays = 0;

    for (int y = y1; y < y2; y++) {
        bool isLeap = (y % 4 == 0 && (y % 100 != 0 || y % 400 == 0));
        totalDays += isLeap ? 366 : 365;
    }

    bool targetLeap = (y2 % 4 == 0 && (y2 % 100 != 0 || y2 % 400 == 0));
    month[1] = targetLeap ? 29 : 28;

    for (int m = 1; m < m2; m++) {
        totalDays += month[m - 1];
    }
    totalDays += (d2 - d1);

    cout << "Total Days from 01-01-1900: " << totalDays << "\n";
    cout << "For Given Date Day is: " << days[totalDays % 7] << "\n";

    return 0;
}