#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char str[50],ch;
	cout<<"enter string : ";
	ofstream abc("INPUT4.txt");
	gets(str);
	abc<<str;
	abc.close();
	
	cout<<endl<<"display string : ";
	ifstream xyz("INPUT4.txt");
	while(xyz.get(ch))
	{
		if(ch>='a' && ch<='z')
		{
			ch-=32;
		}
		else if(ch>='A' && ch<='Z')
		{
			ch+=32;
		}
		cout<<ch;
	}
	xyz.close();
	return 0;
}
