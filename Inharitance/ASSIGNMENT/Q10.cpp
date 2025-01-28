#include<iostream>
#include<string.h>
using namespace std;
class BOOK
{
	public:
		int Book_Cost;
		char Book_Name[50],Book_ID[50];
		
		void Binput()
		{
			cout<<"Enter Book Id = ";
			gets(Book_ID);
			cout<<"Enter Book_Name = ";
			cin>>Book_Name;
			cout<<"Book_Cost = ";
			cin>>Book_Cost;
		}
};
class Wholesaler : virtual public BOOK
{
	public:
		int W_sales,Sale_price1;
		
		void Winput()
		{
			cout<<"Enter total Books you want to sale Wholesale : ";
			cin>>W_sales;
			cout<<"Enter Sale price : ";
			cin>>Sale_price1;
		}
};
class Retailer : virtual public BOOK
{
	public:
		int R_sales,Sale_price2;
		
		void Rinput()
		{
			cout<<"Enter total Books you want to sale Retaile : ";
			cin>>R_sales;
			cout<<"Enter Sale price : ";
			cin>>Sale_price2;	
		}
};
class Total_Sales : public Wholesaler , public Retailer
{
	public:
		int Tot_sales,Tot_amt,Profit;
		
		void dispaly()
		{
			Tot_sales=R_sales+W_sales;
			Tot_amt=(R_sales*Sale_price2)+(W_sales*Sale_price1);
			Profit=Tot_amt-(Tot_sales*Book_Cost);
			
			cout<<endl<<endl;
			
			cout<<"Book Id     = "<<Book_ID<<endl;
			cout<<"Book_Name   = "<<Book_Name<<endl;
			cout<<"Book_Cost   = "<<Book_Cost<<endl<<endl;
			
			cout<<"No. of Wholesale Book    : "<<W_sales<<endl;
			cout<<"Wholesale Price          : "<<Sale_price1<<endl;
			cout<<"selling amount           : "<<Sale_price1*W_sales<<endl<<endl;
			
			cout<<"No. of Retaile sale Book : "<<R_sales<<endl;
			cout<<"Retailesale Price        : "<<Sale_price2<<endl;
			cout<<"selling amount           : "<<Sale_price2*R_sales<<endl<<endl;
			
			cout<<"Total sale (BOOK) : "<<Tot_sales<<endl;
			cout<<"Total sale amount : "<<Tot_amt<<endl;
			cout<<"Total Base amount : "<<Book_Cost*Tot_sales<<endl;
			cout<<"Profit            : "<<Profit<<endl;
		}
};
int main()
{
	Total_Sales x;
	x.Binput();
	x.Winput();
	x.Rinput();
	x.dispaly();
	return 0;
}
