#include<iostream>
#include<string.h>
using namespace std;
class abc
{
	public:
		char name[50];
		int i;
		
		void display(char str[])
		{
			cout<<"enter string : ";
	        gets(name);
			strcpy(str,name);
			strrev(name);
		}
		void display(char str[],int j)
		{
			i=0;
			while(name[i]!='\0')
			{
				if(name[i]!=str[i])
				{
					j=1;
				}
				i++;
			}
			if(j==0)
			{
				cout<<endl<<str<<" is palindrome string....";
			}
			else
			{
				cout<<endl<<str<<" is not palindrome string....";
			}
		}
};
int main()
{
	char str[50];
	int j=0;
	abc k;
	k.display(str);
	k.display(str,j);
	return 0;
}
