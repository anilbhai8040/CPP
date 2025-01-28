#include<iostream>
using namespace std;
class a
{
	public:
		int no1,no2,sum,sub;	
		
		void input()
		{
			cout<<"no1 = ";
			cin>>no1;
			cout<<"no2 = ";
			cin>>no2;
		}
};
class b : virtual public a
{
	public:
		
		void display()
		{
			sum=no1+no2;
			cout<<endl<<no1<<" + "<<no2<<" = "<<sum<<endl;
		}
};
class c : virtual public a
{
	public:
		void display1()
		{
			sub=no1-no2;
			cout<<endl<<no1<<" - "<<no2<<" = "<<sub<<endl;
		}	
};
class d : public b , public c
{
	public:
		
		
};
int main()
{
	d p;
	p.input();
	p.display();
	p.display1();
	return 0;
}
