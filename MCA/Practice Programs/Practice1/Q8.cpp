#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    // 1. Factorial
    long long fact = 1;
    for (int i = 1; i <= n; i++) fact *= i;
    cout << "Factorial Value is = " << fact << "\n\n";

    // 2. Positive Series: i / i!
    double sum1 = 0.0;
    fact = 1;
    cout << "Series 1: ";
    for (int i = 1; i <= n; i++) {
        fact *= i;
        sum1 += (double)i / fact;
        cout << i << "/" << fact << (i == n ? " = " : " + ");
    }
    cout << fixed << setprecision(2) << sum1 << "\n\n";

    // 3. Alternating Series: (-1)^(i-1) * (i / i!)
    double sum2 = 0.0;
    fact = 1;
    int sign = 1;
    cout << "Series 2: ";
    for (int i = 1; i <= n; i++) {
        fact *= i;
        sum2 += (double)(i * sign) / fact;
        cout << (sign == 1 && i > 1 ? "+ " : (sign == -1 ? "- " : ""))
             << i << "/" << fact << " ";
        sign *= -1;
    }
    cout << "= " << fixed << setprecision(2) << sum2 << "\n\n";

    // 4. Offset Alternating Series: i / (i-1)!
    double sum3 = 1.0;
    cout << "Series 3: 1/1 ";
    fact = 1;
    sign = -1;
    for (int i = 2; i <= n; i++) {
        fact *= (i - 1);
        sum3 += (double)(i * sign) / fact;
        cout << (sign == -1 ? "- " : "+ ") << i << "/" << fact << " ";
        sign *= -1;
    }
    cout << "= " << fixed << setprecision(2) << sum3 << "\n";

    return 0;
}