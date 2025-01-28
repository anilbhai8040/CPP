#include<iostream>
using namespace std;
class a
{
	public:
		int no1;
		void input1()
		{
			cout<<"no1 = ";
			cin>>no1;
		}
};
class b
{
	public:
		int no2;
		void input2()
		{
			cout<<"no2 = ";
			cin>>no2;
		}
};
class c : public a , public b
{
	public:
		int sum;

		void display()
		{
			sum=no1+no2;
			cout<<endl<<no1<<" + "<<no2<<" = "<<sum<<endl;
		}
};
int main()
{
	c p;
	p.input1();
	p.input2();
	p.display();
	return 0;
}
