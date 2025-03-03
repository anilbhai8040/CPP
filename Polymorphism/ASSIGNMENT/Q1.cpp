#include<iostream>
using namespace std;
class abc
{
	public:
		int no1,no2;
		
		void input()
		{
			cout<<"no1 : ";
			cin>>no1;
			cout<<"no2 : ";
			cin>>no2;
		}
		
		void output(long int sum)
		{
			sum=no1+no2;
			cout<<endl<<no1<<" + "<<no2<<" = "<<sum<<endl;
		}
		
		void output(int sub)
		{
			sub=no1-no2;
			cout<<endl<<no1<<" - "<<no2<<" = "<<sub<<endl;
		}
		
		void output(double mul)
		{
			mul=no1*no2;
			cout<<endl<<no1<<" * "<<no2<<" = "<<mul<<endl;
		}
		
		void output(float div)
		{
			div=float(no1)/float(no2);
			cout<<endl<<no1<<" / "<<no2<<" = "<<div<<endl;
		}
};
int main()
{
	long int sum;
	int sub;
	double mul;
	float div;
	abc k;
	k.input();
	k.output(sum);
	k.output(sub);
	k.output(mul);
	k.output(div);
	return 0;
}
