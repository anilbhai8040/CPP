#include<iostream>
using namespace std;
int total;
char pname[20];
class product
{
	public:
		int productcode;
		
		void pinput()
		{
			cout<<"Enter product code : ";
			cin>>productcode;
			cout<<"Enter product name : ";
			cin>>pname;
		}
};
class stock : public product
{
	public:
		int p,s;
		void update_stok(int k)
		{
			total=total+k;
		}

		void display()
		{
			cout<<"total stock = "<<total;
		}
};
class purchase : public stock
{
	public:

		void input1()
		{
			cout<<"enter "<<pname<<"s you want to purchase : ";
			cin>>p;
			update_stok(p);
		}
};
class sale : public stock
{
	public:

		void input2()
		{
			cout<<"enter "<<pname<<"s you want to sale : ";
			cin>>s;
			if(total>=s)
			{
				update_stok(-s);
			}
			else
			{
				cout<<"stock is not enough...."<<endl;
			}
		}
};
int main()
{
	sale a;
	stock b;
	purchase c;
	int ch;
	
	b.pinput();
    anil:
	cout<<endl<<"1.purchase."<<endl;
	cout<<"2.sale."<<endl;
	cout<<"3.display."<<endl;
	cout<<"4.exit."<<endl<<endl;
	cout<<"Enter your choise : ";
	cin>>ch;
	
	switch(ch)
	{
		case 1:
			c.input1();
			goto anil;
			
		case 2:
			a.input2();
			goto anil;
			
		case 3:
			b.display();
			goto anil;
			
		case 4:
			goto baraiya;
			
		default:
			cout<<"Invalide choise .....";
			goto anil;
	}
	baraiya:
	return 0;
}
