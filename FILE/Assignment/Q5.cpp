#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{
	char str[100],ch;
	// create and write file INPUT4
	ofstream abc("INPUT5.txt");
	cout<<"enter string in INPUT4: ";
	gets(str);
	abc<<str;
	abc.close();

    // read file INPUT4
	ifstream xyz("INPUT5.txt");
	// create  file OUTPUT
	ofstream pqr("OUTPUT5.txt");
	while(xyz.get(ch))
	{
		pqr<<ch;
	}
	xyz.close();
	pqr.close();
	return 0;
}
