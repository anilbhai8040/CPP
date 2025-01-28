#include<iostream>
using namespace std;
class emp
{
	public:
		int Emp_no,Salary,Dept_code;
		char Emp_name[50];
		
		void Einput()
		{
			cout<<"Enter Employee NO : ";
			cin>>Emp_no;
			cout<<"Enter Employee name : ";
			cin>>Emp_name;
			cout<<"Enter Employee Salary : ";
			cin>>Salary;
			cout<<"Enter Department code : ";
			cin>>Dept_code;
		}
};
class Dept : public emp
{
	public:
		int Dept_code;
		char name[50],location[50];
		
		void Dinput()
		{
			cout<<"Enter Department code : ";
			cin>>Dept_code;
			cout<<"Enter Department name : ";
			cin>>name;
			cout<<"Enter Department location : ";
			cin>>location;
		}
		
		void display()
		{
			cout<<"Employee NO         : "<<Emp_no<<endl;
			cout<<"Employee name       : "<<Emp_name<<endl;
			cout<<"Employee Salary     : "<<Salary<<endl;
			cout<<"Department code     : "<<Dept_code<<endl;
			cout<<"Department name     : "<<name<<endl;
			cout<<"Department location : "<<location<<endl;
		}
};
int main()
{
	Dept a;
	cout<<"Enter employee detail....."<<endl<<endl;
	a.Einput();
	cout<<endl<<"Enter Depatment detail....."<<endl<<endl;
	a.Dinput();
	cout<<endl<<"Display detail....."<<endl<<endl;
	a.display();
	return 0;
}
