#include<iostream>
using namespace std;
class abc
{
	public:
		int k,r;
		
		void output(int no,int rev)
		{
			while(no>0)
			{
				r=no%10;
				rev=rev*10+r;
				no=no/10;
			}
			k=rev;
			cout<<endl<<"reverse number : "<<rev<<endl;
		}
		
		void output(int no)
		{
			if(no==k)
			{
				cout<<endl<<no<<" is palindrome number...";
			}
			else
			{
				cout<<endl<<no<<" is not palindrome number...";
			}
		}
};
int main()
{
	int no,rev=0;
	cout<<"no : ";
	cin>>no;
	abc k;
	k.output(no,rev);
	k.output(no);
	return 0;
	
}
