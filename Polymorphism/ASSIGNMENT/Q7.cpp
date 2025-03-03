#include<iostream>
#include<string.h>
using namespace std;
class abc
{
	public:
		int i;
		
		void display(char name[])
		{
			cout<<"name : ";
	        gets(name);
		}
		void display(char name[],char str[])
		{
			i=0;
			while(name[i]!='\0')
			{
			    str[i]=name[i];
			    i++;
			}
		}
};
int main()
{
	char name[50],str[50];
	abc k;
	k.display(name);
	k.display(name,str);
	cout<<endl<<"name = "<<name<<endl;
	cout<<endl<<"str  = "<<str;
	return 0;
}
