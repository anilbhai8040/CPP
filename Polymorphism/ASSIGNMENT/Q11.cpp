#include<iostream>
#include<string.h>
using namespace std;
class abc 
{
	public:
		int A,D,S,W,i;
		char name[30];
		
		abc()
		{
			A=D=W=S=i=0;
		}
		void display(char name[])
		{
			strcpy(this->name,name);
		}
		
		void display()
		{
			while(name[i]!='\0')
			{
				if(name[i]>='A' && name[i]<='Z')
				{
					A++;
				}
				else if(name[i]>='a' && name[i]<='z')
				{
					A++;
				}
				else if(name[i]>='0' && name[i]<='9')
				{
					D++;
				}
				else if(name[i]==' ')
				{
					W++;
				}
				else
				{
					S++;
				}
				
				i++;
			}
				cout<<endl<<"Alphabets : "<<A<<endl;
				cout<<endl<<"Digit     : "<<D<<endl;
				cout<<endl<<"Spaces    : "<<W<<endl;
				cout<<endl<<"Symbols   : "<<S<<endl;
		}
};
int main()
{
	char name[30];
	cout<<"enter string : ";
	gets(name);
	abc k;
	k.display(name);
	k.display();
	return 0;
}
