#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char ch,str[50];
	cout<<"enter string : ";
	ofstream abc("INPUT3.txt");
	gets(str);
	abc<<str;
	abc.close();
	
	cout<<endl<<"display string : ";
	ifstream xyz("INPUT3.txt");
	while(xyz.get(ch))
	{
		if(ch>='a' && ch<='z')
		{
			ch-=32;
		}
		cout<<ch;
	}
	xyz.close();
	return 0;
}
