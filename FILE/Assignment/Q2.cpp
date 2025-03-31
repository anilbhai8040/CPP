#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{
	char ch,str[50];
	cout<<"enter string : ";
	ofstream abc("INPUT2.txt");
	gets(str);
	abc<<str;
	abc.close();
	
	cout<<endl<<"display string : ";
	ifstream xyz("INPUT2.txt");
	while(xyz.get(ch))
	{
		cout<<ch;
	}
	xyz.close();
	return 0;
}
