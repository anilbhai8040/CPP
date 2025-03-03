#include<iostream>
using namespace std;
class abc
{
	public:
		
		void output(int no)
		{
			if(no>0)
			{
				cout<<endl<<no<<" is positive number...";
			}
			else
			{
				cout<<endl<<no<<" is not positive number...";
			}
		}
		
		void output(int no , int no1 , int no3)
		{
			if(no<0)
			{
				cout<<endl<<no<<" is negetive number...";
			}
			else
			{
				cout<<endl<<no<<" is not negetive number...";
			}
		}
		
		void output(int no , int no1)
		{
			if(no==0)
			{
				cout<<endl<<no<<" is zero number...";
			}
			else
			{
				cout<<endl<<no<<" is not zero number...";
			}
		}
};
int main()
{
	int no;
	cout<<"no : ";
	cin>>no;
	abc k;
	k.output(no);
	cout<<endl;
	k.output(no,no,no);
	cout<<endl;
	k.output(no,no);
	return 0;
}
