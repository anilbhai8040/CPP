#include <iostream>
#include <cstring>
using namespace std;
int main() {
	char str1[100] = "Bhavnagar ";
	char str2[50] = "University";
	char str3[100];
	char* ptr1 = str1;
	char* ptr2 = str2;
	char* ptr3 = str3;
	cout << "Length of ptr1: " << strlen(ptr1) << " at " << (void*)ptr1 << "\n";
	cout << "Length of ptr2: " << strlen(ptr2) << " at " << (void*)ptr2 << "\n";
	strcpy(ptr3, ptr2);
	cout << "After strcpy, ptr3: " << ptr3 << "\n";
	strcat(ptr1, "Ram");
	cout << "After strcat(ptr1, 'Ram'): " << ptr1 << "\n";
	if (strcmp(ptr1, ptr3) > 0)
		cout << "ptr1 string is lexicographically greater than ptr3\n";
	else
		cout << "ptr3 string is greater than or equal to ptr1\n";
	return 0;
}