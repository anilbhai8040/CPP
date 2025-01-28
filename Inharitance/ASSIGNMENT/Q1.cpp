#include<iostream>
using namespace std;
class abc 
{
	public:
	int no;
	void input()
	{
		cout<<"no = ";
		cin>>no;
	}
};
class xyz : public abc
{
	public:
	int i,j,count,total;
	
	void display()
	{
		total=0;
		cout<<endl<<"prime number between 1 to "<<no<<" : ";
		for(i=2; i<=no; i++)
		{
			count=0;
			for(j=2; j<i; j++)
			{
				if(i%j==0)
				{
					count=1;
					break;
				}
			}
			if(count == 0)
			{
				total++;
				cout<<endl<<i<<" ";
			}
		}
		cout<<endl<<"total prime number between 1 to "<<no<<" : "<<total;
	}
};
int main()
{
	xyz p;
	p.input();
	p.display();
	return 0;
}
