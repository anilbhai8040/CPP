#include<iostream>
using namespace std;
class publisher
{
	public:
		char title[50];
		
		void pinput()
		{
			cout<<"Enter Title : ";
			cin>>title;
		}
};
class sales_details
{
	public:
		int no_sales[3],i;

		void sinput()
		{
			for(i=0; i<3; i++)
			{
				cout<<"Enter "<<i+1<<" month sales : ";
				cin>>no_sales[i];
			}
		}
};
class book : public sales_details , public publisher
{
	public:
		
		void bdisplay()
		{
			cout<<"Title : "<<title<<endl;
			for(i=0; i<3; i++)
			{
				cout<<i+1<<" month sale : "<<no_sales[i]<<" books."<<endl;
			}
	
		}
};
class tape : public sales_details , public publisher
{
	public:
		
		void tdisplay()
		{
			cout<<"Title : "<<title<<endl;
			for(i=0; i<3; i++)
			{
				cout<<i+1<<" month sale : "<<no_sales[i]<<" tape."<<endl;
			}
		}
};
int main()
{
	book a;
	cout<<"Enter Book details....."<<endl<<endl;
	a.pinput();
	a.sinput();
	
	tape b;
	cout<<endl<<"Enter Tape details....."<<endl<<endl;
	b.pinput();
	b.sinput();
	
	cout<<endl<<"Display Book details..."<<endl<<endl;
	a.bdisplay();
	
	cout<<endl<<"Dispaly Tape details..."<<endl<<endl;
	b.tdisplay();	

	return 0;
}
