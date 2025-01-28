#include<iostream>
#include<string.h>
using namespace std;
class Student
{
	public:
		int rno;
		char name[50];
		void input1()
		{
			cout<<"Enter name : ";
			gets(name);
		}
};
class Test 
{
	public:
		int marks;
		float per;
		void input2()
		{
			cout<<"Enter obtain marks out of 550 :  ";
			cin>>marks;
			per=float(marks)*100/550;
			
		}
};
class Sports : public Student
{
	public:
		char name1[50];
		void input3()
		{
			cout<<"Enter the name of your favorate sport : ";
			cin>>name1;
		}
};
class Result : public Test ,public Sports
{
	public:
		
		void display()
		{
			cout<<"name  = "<<name<<endl;
			cout<<"marks = "<<marks<<endl;
			cout<<"per   = "<<per<<endl;
			cout<<"sport = "<<name1<<endl;
		}	
};
int main()
{
	Result p;
	p.input1();
	p.input2();
	p.input3();
	p.display();
	
	return 0;
}
