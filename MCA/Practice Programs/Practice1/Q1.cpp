#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	int n;
	cout << "How many rows are there : ";
	cin >> n;
	for (int i = n; i >= 1; i--) {
		char ch = 'A';
		for (int j = 1; j <= i; j++) cout << setw(2) << ch++;
		for (int s = 0; s < 2 * (n - i); s++) cout << "  ";
		ch--;
		for (int j = 1; j <= i; j++) cout << setw(2) << ch--;
		cout << "\n";
	}
	return 0;
}