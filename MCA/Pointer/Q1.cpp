#include <iostream>
using namespace std;
int main() {
	int i = 10, j = 20, k = 30;
	char ch1 = 'C', ch2 = 'Z';
	float ans = 5.253f;
	cout << "Value of i is " << i << " stored at " << &i << "\n";
	cout << "Value of j is " << j << " stored at " << &j << "\n";
	cout << "Value of k is " << k << " stored at " << &k << "\n";
	cout << "Value of ch1 is " << ch1 << " stored at " << (void*)&ch1 << "\n";
	cout << "Value of ans is " << ans << " stored at " << &ans << "\n";

// Indirect modifications via dereferenced addresses
	*&i = *&i * 10;
	*&ch1 = *&ch1 + 1;
	*&ans = 10.235f;
	cout << "\nAfter modification:\n";
	cout << "Value of i is " << *&i << " stored at " << &i << "\n";
	cout << "Value of ch1 is " << *&ch1 << " stored at " << (void*)&ch1 << "\n";
	cout << "Value of ans is " << *&ans << " stored at " << &ans << "\n";
	return 0;
}