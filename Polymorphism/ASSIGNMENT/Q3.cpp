#include<iostream>
using namespace std;
class abc
{
	public:
		int i,j;
		
		void output(int no,int count)
		{
			cout<<endl<<"prime numbers between 1 to "<<no<<"....."<<endl;
			for(i=1; i<=no; i++)
			{
				count=0;
				for(j=2; j<=i; j++)
				{
					if(i%j==0)
					{
						count=1;
						break;
					}
				}
				if(count==1)
				{
					cout<<endl<<i;
				}
			}
		}
		void output(int no)
		{
			cout<<endl<<endl<<"even numbers between 1 to "<<no<<"....."<<endl;
			for(i=1; i<=no; i++)
			{
				if(i%2==0)
				{
					cout<<endl<<i;
				}
			}
		}
};
int main()
{
	int no,count=0;
	cout<<"no : ";
	cin>>no;
	abc k;
	k.output(no,count);
	k.output(no);
	return 0;
}
