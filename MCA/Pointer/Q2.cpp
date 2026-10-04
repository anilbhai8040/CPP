#include <iostream>
using namespace std;
int main() {
	int i = 10;
	int* intpt = &i; // Stores address of i
	cout << "The Content of i is " << i << " and stored at " << &i << "\n";
	cout << "The Value of intpt is " << intpt << " and stored at " << &intpt << "\n";
	cout << "The Content of intpt is " << *intpt << " and stored at " << intpt << "\n";
	i = 20; // Direct change
	cout << "\nDirect change: *intpt = " << *intpt << " at " << intpt << "\n";
	*intpt = *intpt + 10; // Indirect change
	cout << "Indirect change: *intpt = " << *intpt << " at " << intpt << "\n";
	return 0;
}