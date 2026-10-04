#include <iostream>
using namespace std;
int main() {
	float a[6] = {6.2f, 62.23f, 1.0f, 0.0f, -55.24f, 21.09f};
	float* ptr = a;
	float max = *ptr;
	cout << "Base Address of a is: " << a << "\n";
	for (int i = 0; i < 6; i++) {
		cout << "Content of a[" << i << "] = " << *ptr << " Address: " << ptr << "\n";
		if (*ptr > max) {
			max = *ptr;
		}
		ptr++;
	}
	cout << "\nMaximum is " << max << "\n";
	return 0;
}