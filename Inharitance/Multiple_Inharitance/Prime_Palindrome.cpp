#include<iostream>
using namespace std;
class a
{
	public:
		int no;
		
		void input()
		{
			cout<<"no = ";
			cin>>no;
		}
};
class b :public a
{
	 public:
	 	int i,count;
	 	void display()
	 	{
	 		for(i=2; i<no; i++)
	 		{
	 			if(no%i==0)
	 			{
	 				count=1;
	 				break;
				}
			}
			if(count==0)
			{
				cout<<endl<<no<<" is prime palindrome...."<<endl<<endl;
			}
			else
			{
				cout<<endl<<no<<" is not palindrome...."<<endl<<endl;
			}
		}
};
class c : public a
{
	public:
		int rev,k,r;
		
		void display2()
		{
			k=no;
			while(k>0)
			{
				r=k%10;
				rev=rev*10+r;
				k=k/10;
			}
			if(no==rev)
			{
				cout<<endl<<no<<" is palindrome...."<<endl<<endl;
			}
			else
			{
				cout<<endl<<no<<" is not prime...."<<endl<<endl;
			}
		}
};
int main()
{
	b p;
	c p1;
	
	p.input();
	p.display();
	
	p1.input();
	p1.display2();
	
	return 0;
}
