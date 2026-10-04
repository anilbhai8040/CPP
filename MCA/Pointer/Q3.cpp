#include <iostream>
using namespace std;
int main() {
	int n;
	cout << "How many values are there : ";
	cin >> n;
// Safely allocate contiguous block of heap memory
	int* ptr = new int[n];
	cout << "Initial value of ptr: " << ptr << " and address: " << &ptr << "\n";
	for (int i = 0; i < n; i++) {
		cout << "Enter ptr value [" << i << "] at address " << (ptr + i) << ": ";
		cin >> *(ptr + i);
	}
	cout << "\nDisplay the value on Screen for ptr:\n";
	for (int i = 0; i < n; ++i) {
		cout << "The value is: " << *(ptr + i) << " and address: " << (ptr + i) << "\n";
	}
	delete[] ptr; // Clean up memory
	return 0;
}