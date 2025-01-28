#include<iostream>
using namespace std;
class a
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
class b : public a
{
	public:
		int sum;
		
		void addition()
		{
			sum=no1+no2;
			cout<<endl<<no1<<" + "<<no2<<" = "<<sum<<endl<<endl;
		}
};
class c : public a
{
	public:
		int sub;
		
		void subtraction()
		{
			sub=no1-no2;
			cout<<endl<<no1<<" - "<<no2<<" = "<<sub<<endl<<endl;
		}
};
int main()
{
	b p;
	c q;
	p.input();
	p.addition();
	q.input();
	q.subtraction();	
	return 0;
}

