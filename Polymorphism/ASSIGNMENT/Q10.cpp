#include<iostream>
using namespace std;
class abc
{
	public:
		int no1,no2,no3;
		void display(int no1,int no2,int no3)
		{
			this->no1=no1;
			this->no2=no2;
			this->no3=no3;
		}
		
		void display()
		{
			if(no1<no2 && no1<no3)
			{
				cout<<no1<<" is minimum...";
			}
			else if(no2<no1 && no2<no3)
			{
				cout<<no2<<" is minimum...";
			}
			else if(no3<no1 && no3<no2)
			{
				cout<<no3<<" is minimum...";
			}
			else
			{
				cout<<"all are equal numbers...";
			}
		}
};
int main()
{
	int no1,no2,no3;
	cout<<"no1 : ";
	cin>>no1;
	cout<<"no2 : ";
	cin>>no2;
	cout<<"no3 : ";
	cin>>no3;
	abc a;
	cout<<endl;
	a.display(no1,no2,no3);
	a.display();
	return 0;
}
