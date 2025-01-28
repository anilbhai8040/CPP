#include<iostream>
using namespace std;
class furniture
{
	public:
		char color[30];
		int width,height;
		
		void input()
		{
			cout<<"Enter furniture details....."<<endl;
			cout<<"Enter color : ";
			cin>>color;
			cout<<"Enter width (cm) : ";
			cin>>width;
			cout<<"Enter height (cm) : ";
			cin>>height;
		}
};
class shelf : public furniture
{
	public:
		int shelvesls;
		
		void display()
		{
			cout<<"Enter the no of shelvesls : ";
			cin>>shelvesls;
			
			cout<<endl<<"display furniture details......"<<endl;
			cout<<"color     : "<<color<<endl;
			cout<<"width     : "<<width<<endl;
			cout<<"height    : "<<height<<endl;
			cout<<"shelvesls : "<<shelvesls;
		}
};
int main()
{
	shelf a;
	a.input();
	a.display();
	return 0;
}
