#include<iostream>
using namespace std;
class abc
{
	public:
		int no1,no2;
		void input()
		{
			cout<<"no1 = ";
			cin>>no1;
			cout<<"no2 = ";
			cin>>no2;
		}
};
class xyz : public abc
{
	public:
		int sum;
		void addition()
		{
			sum=no1+no2;
		}
};
class pqr : public xyz
{
	public:
		void display()
		{
			cout<<endl<<no1<<" + "<<no2<<" = "<<sum<<endl;
		}
};
int main()
{
	pqr p;
	p.input();
	p.addition();
	p.display();
	return 0;
}
