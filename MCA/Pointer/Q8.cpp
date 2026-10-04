#include <iostream>
using namespace std;
int main() {
	int a[5] = {10, 20, 30, 40, 50};
	int* ptr = a;
	cout << "1. Display using Array Subscript a[i]:\n";
	for (int i = 0; i < 5; i++)
		cout << "a[" << i << "] = " << a[i] << " at " << &a[i] << "\n";
	cout << "\n2. Display using Pointer Arithmetic *(ptr + i):\n";
	for (int i = 0; i < 5; i++)
		cout << "*(ptr+" << i << ") = " << *(ptr + i) << " at " << (ptr + i) << "\n";
	cout << "\n3. Display using Array Name Offset *(a + i):\n";
	for (int i = 0; i < 5; i++)
		cout << "*(a+" << i << ") = " << *(a + i) << " at " << (a + i) << "\n";
	return 0;
}