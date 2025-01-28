#include<iostream>
using namespace std;
class Media
{
	public:
		int Price;
		char Title[20];
		
		Media()
		{
			cout<<"Enter Title of Media (flopy / CD) = ";
			cin>>Title;
			cout<<"Enter price of Media = ";
			cin>>Price;
		}
};
class Flopy : public Media
{
	public:
		char F_type[30];
		int qty,amount;
		
		void Finput()
		{
			cout<<"Enter Flopy type = ";
			cin>>F_type;
			cout<<"Enter Quantity = ";
			cin>>qty;
		}
		void Fdisplay()
		{
			amount=Price*qty;
			cout<<endl<<"Title of Media = "<<Title<<endl;
			cout<<"price of Flopy = "<<Price<<endl;
			cout<<"Flopy type     = "<<F_type<<endl;
			cout<<"Quantity       = "<<qty<<endl;
			cout<<"amount         = "<<amount<<endl;
		}
		~Flopy()
		{
			Title;
			Price;
		}		
};
class CD : public Media
{
	public:
		char Cd_type[30];
		int qty,amount;
		
		void Cinput()
		{
			cout<<"Enter CD type = ";
			cin>>Cd_type;
			cout<<"Enter Quantity = ";
			cin>>qty;
		}
		void Cdisplay()
		{
			amount=Price*qty;
			cout<<endl<<"Title of Media  = "<<Title<<endl;
			cout<<"price of CD     = "<<Price<<endl;
			cout<<"CD type         = "<<Cd_type<<endl;
			cout<<"Quantity        = "<<qty<<endl;
			cout<<"amount          = "<<amount<<endl;
		}
		~CD()
		{
			Title;
			Price;
		}
};
int main()
{
	cout<<"Enter Flopy details......"<<endl<<endl;
	Flopy p1;
	p1.Finput();
	p1.Fdisplay();
	cout<<endl<<"Enter CD details......"<<endl<<endl;
	CD p2;
	p2.Cinput();
	p2.Cdisplay();
	return 0;
}
