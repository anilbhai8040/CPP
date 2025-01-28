#include<iostream>
#include<string.h>
using namespace std;
class a
{
	public:
		char str[50];
		
		void input()
		{
			cout<<"str = ";
			gets(str);
		}
};
class b : public a
{
	public:
		int length;
		
		void display()
		{
			length=strlen(str);
			cout<<endl<<"length = "<<length;
		}
};
int main()
{
	b p;
	p.input();
	p.display();
	return 0;
}
