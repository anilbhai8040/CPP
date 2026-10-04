#include <iostream>
using namespace std;
int main() {
	char buffer[100];
	cout << "Enter the string: ";
	cin.getline(buffer, 100);
	char* ptr = buffer;
	cout << "The string is: " << buffer << "\n";
	cout << "Starting content: " << *ptr << " at address: " << (void*)ptr << "\n\n";
	while (*ptr != '\0') {
		cout << "content is " << *ptr << " | Address: " << (void*)ptr << "\n";
		ptr++;
	}
	return 0;
}