#include<iostream>
#include<string.h>
using namespace std;
class Employee
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
			cin>>Designation;
		}
};
class Clerk : virtual public Employee
{
	public:
		int Basic_salary,experience;
		
		void Sinput()
		{
			cout<<"Enter basic salary      : ";
			cin>>Basic_salary;
			cout<<"Enter experience (YEAR) : ";
			cin>>experience;
		}
};
class Allowance : virtual public Employee
{
	public:
		int TA,DA;
		
		void Ainput()
		{
			cout<<"Enter TA in (%) of Basic_salary : ";
			cin>>TA;
			cout<<"Enter DA in (%) of Basic_salary : ";
			cin>>DA;
		}
};
class Salary:  public Clerk ,  public Allowance
{
	public:
		int Total_salary,Bonus;
		
		void display()
		{
			cout<<endl<<"Name            : ";
			puts(name);
			cout<<"Age             : "<<age;
			cout<<endl<<"Designation     : "<<Designation;
			cout<<endl<<"experience      : "<<experience<<"years";
			
			cout<<endl<<"TA  ("<<TA<<"%)        : ";
			TA=(Basic_salary*TA)/100;
			cout<<TA;
			
			cout<<endl<<"DA  ("<<DA<<"%)        : ";
			DA=(Basic_salary*DA)/100;
			cout<<DA;		
			
			Bonus=(Basic_salary*25)/100;
			cout<<endl<<"Bonus (25%)     : "<<Bonus;
			
			Total_salary=Basic_salary+DA+TA+Bonus;
			cout<<endl<<"Total_salary    : "<<Total_salary;
		}

};
int main()
{
	Salary p1;
	p1.Einput();
	p1.Sinput();
	p1.Ainput();
	p1.display();
	return 0;
}
