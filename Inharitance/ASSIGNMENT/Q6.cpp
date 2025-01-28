#include <iostream>
using namespace std;

class Person
{
	public:
		string name;
		int age;

		void inputP()
		{
			cout << "Enter Name of person : ";
			cin >> name;
			cout << "Enter Age of person : ";
			cin >> age;
		}

		void displayP()
		{
			cout << endl << "Name : " << name << endl;
			cout << "Age : " << age << endl;
		}
};
class Teacher : public Person
{
	public:
		string subject;

		void inputT()
		{
			inputP();
			cout << "Enter Subject : ";
			cin >> subject;
		}

		void displayT()
		{
			displayP();
			cout << "Subjectv: " << subject << endl;
		}
};
class Student : public Person
{
	public:
		int rollNo;

		void inputS()
		{
			inputP();
			cout << "Enter Roll Number : ";
			cin >> rollNo;
		}

		void displayS()
		{
			displayP();
			cout << "Roll Number : " << rollNo << endl;
		}
};
class Exam : public Student
{
	public:
		int marks;

		void inputE()
		{
			inputS();
			cout << "Enter Marks : ";
			cin >> marks;
		}

		void displayE()
		{
			displayS();
			cout << "Marks : " << marks << endl;
		}
};
class Talents 
{
	public:
		string talent;

		void inputTa()
		{
			cout << "Enter Talent : ";
			cin >> talent;
		}

		void displayTa()
		{
			cout << "Talent : " << talent << endl;
		}
};
class Awards : public Talents , public Exam
{
	public:
		string award;

		void inputA()
		{
			inputTa();
			cout << "Enter Award Name : ";
			cin >> award;
		}

		void displayA()
		{
			displayTa();
			cout << "Award : " << award << endl;
		}
};
int main()
{
	cout << "Teacher Details....." << endl << endl;
	Teacher t;
	t.inputT();
	t.displayT();

	cout << "\nExam Details....." << endl << endl;
	Exam e;
	e.inputE();
	e.displayE();

	cout << "\nAward Details....." << endl << endl;
	Awards a;
	a.inputA();
	a.displayA();

	return 0;
}
