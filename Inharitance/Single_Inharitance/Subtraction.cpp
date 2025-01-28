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
		int sub;
		
		void display()
		{
			sub=no1-no2;
			cout<<endl<<no1<<" - "<<no2<<" = "<<sub;
		}
};
int main()
{
	b p;
	p.input();
	p.display();
	return 0;
}
