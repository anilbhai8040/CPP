#include<iostream>
#include<string.h>
using namespace std;
class abc
{
	public:
		int length,i;
		
		abc()
		{
			length=0;
			i=0;
		}
		void display(char name[])
		{
			while(name[i]!='\0')
			{
				i++;
				length++;
			}
			cout<<endl<<"length = "<<length<<endl;
		}
		void display(char name[],int j)
		{
			j=length;
			cout<<endl<<"reverse string : ";
			while(j>=0)
			{
				cout<<name[j];
				j--;
			}
		}
};
int main()
{
	char name[50];
	int j=0;
	cout<<"enter string : ";
	gets(name);
	abc k;
	k.display(name);
	k.display(name,j);
	return 0;
}
