#include<iostream>
using namespace std;
class STUDENT
{
	public:
		int Stud_no;
		char Stud_name[50];
		char College_name[50];
		
		void Sinput()
		{
			cout<<"Enter Student number : ";
			cin>>Stud_no;
			cout<<"Enter Student Name : ";
			cin>>Stud_name;
			cout<<"Enter College Name : ";
			cin>>College_name;
		}
};
class TEST : public STUDENT
{
	public:
		int CPP,JAVA,C,DSA,PHP,PYTHON;
		
		void Tinput()
		{
			cout<<endl<<"Enter subject marks out of 100 ......"<<endl;
			cout<<endl<<"CPP      : ";
			cin>>CPP;
			cout<<endl<<"JAVA     : ";
			cin>>JAVA;
			cout<<endl<<"C        : ";
			cin>>C;
			cout<<endl<<"DSA      : ";
			cin>>DSA;
			cout<<endl<<"PHP      : ";
			cin>>PHP;
			cout<<endl<<"PYTHON   : ";
			cin>>PYTHON;	
		}
};
class RESULT : public TEST
{
	public:
		int Total;
		float Percentage;
		
		void display()
		{
			Total=CPP+JAVA+C+DSA+PHP+PYTHON;
			Percentage=float(Total)*100/600;
			cout<<endl<<endl<<"Display marksheet......"<<endl;
			cout<<endl<<"Student Name : "<<Stud_name<<endl;
			cout<<endl<<"Student No   : "<<Stud_no<<endl;
			cout<<endl<<"College name : "<<College_name<<endl;
			
			cout<<endl<<"CPP          : "<<CPP<<endl;
			
			cout<<endl<<"JAVA         : "<<JAVA<<endl;
			
			cout<<endl<<"C            : "<<C<<endl;
			
			cout<<endl<<"DSA          : "<<DSA<<endl;
		
			cout<<endl<<"PHP          : "<<PHP<<endl;
		
			cout<<endl<<"PYTHON       : "<<PYTHON<<endl;
			
			cout<<endl<<"===================="<<endl;
			
			cout<<endl<<"Total (600)  : "<<Total<<endl;
			
			cout<<endl<<"Percentage   : "<<Percentage <<"%"<<endl;
		}
};
int main()
{
	RESULT k;
	k.Sinput();
	k.Tinput();
	k.display();
	return 0;
}
