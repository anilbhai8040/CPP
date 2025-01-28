#include<iostream>
#include<string.h>
using namespace std;
class EMPLOYEE
{
	public:
		char name[50];
		int age;
		char Designation[50];

		void Einput()
		{
			cout<<"Enter name of employee : ";
			gets(name);
			cout<<"Enter age of employee : ";
			cin>>age;
			cout<<"Enter Designation of employee : ";
			cin>>(Designation);
		}
};
class Salary : virtual public EMPLOYEE
{
	public:
		int Basic_salary;
		
		void Sinput()
		{
			cout<<"Enter basic salary : ";
			cin>>Basic_salary;
		}
};
class Allowance : virtual public EMPLOYEE
{
	public:
		int TA,DA,HRA,PF;
		
		void Ainput()
		{
			cout<<"Enter TA in (%) of Basic_salary : ";
			cin>>TA;
			cout<<"Enter DA in (%) of Basic_salary : ";
			cin>>DA;
			cout<<"Enter HRA in (%) of Basic_salary : ";
			cin>>HRA;
			cout<<"Enter PF in (%) of Basic_salary : ";
			cin>>PF;
		}
};
class Salary_Account :  public Salary ,  public Allowance
{
	public:
		int Net_salary;
		
		void display()
		{
			cout<<endl<<"Name        = ";
			puts(name);
			
			cout<<"Age         = "<<age;
			
			cout<<endl<<"Designation = "<<Designation;
			
			cout<<endl<<"TA ("<<TA<<"%)     = ";
			TA=(Basic_salary*TA)/100;
			cout<<TA;
			
			cout<<endl<<"DA ("<<DA<<"%)     = ";
			DA=(Basic_salary*DA)/100;
			cout<<DA;
			
			cout<<endl<<"HRA ("<<HRA<<"%)    = ";
			HRA=(Basic_salary*HRA)/100;
			cout<<HRA;
			
			cout<<endl<<"PF ("<<PF<<"%)     = ";
			PF=(Basic_salary*PF)/100;
			cout<<PF;
			
			Net_salary=Basic_salary+DA+TA+HRA-PF;
			cout<<endl<<"Net_salary  = "<<Net_salary;
		}
};
int main()
{
	Salary_Account p1;
	p1.Einput();
	p1.Sinput();
	p1.Ainput();
	p1.display();
	return 0;
}
