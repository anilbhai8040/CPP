#include <iostream>
using namespace std;
int main() {
	int arr[5];
	int* ptr = arr;
	cout << "Initial ptr value: " << ptr << " stored at: " << &ptr << "\n";
	for (int i = 0; i < 5; i++) {
		cout << "Enter value at " << ptr << ": ";
		cin >> *ptr;
		ptr++;
	}
	cout << "\nDisplaying in reverse order:\n";
	for (int i = 0; i < 5; i++) {
		ptr--;
		cout << "Value: " << *ptr << " and address: " << ptr << "\n";
	}
	return 0;
}