#include<iostream>
using namespace std;
class abc
{
	public:
		
		void display(int no1,long int no2)
		{
			if(no1>no2)
			{
				cout<<no1<<" is maximum...";
			}
			else
			{
				cout<<no2<<" is maximum...";
			}
		}
		
		void display(long int no2,int no1)
		{
			if(no2<no1)
			{
				cout<<no2<<" is minimum...";
			}
			else
			{
				cout<<no1<<" is minimum...";
			}
		}
};
int main()
{
	int no1;
	long int no2;
	cout<<"no1 : ";
	cin>>no1;
	cout<<"no2 : ";
	cin>>no2;
	abc a;
	cout<<endl;
	a.display(no1,no2);
	cout<<endl<<endl;
	a.display(no2,no1);
	return 0;
}
