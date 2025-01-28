#include<iostream>
#include<string.h>
using namespace std;
class marksheet
{
	public:
		int no;
		int maths,science,s_science,gujrati,sanskrit,english;
		char name[50];
		float per,total;
		void input()
		{
			cout<<"Name : ";
			gets(name);
			cout<<"Roll NO : ";
			cin>>no;
			cout<<endl<<"Enter subject marks out of 100 ......"<<endl;
			cout<<endl<<"science   : ";
			cin>>science;
			cout<<endl<<"maths     : ";
			cin>>maths;
			cout<<endl<<"s_science : ";
			cin>>s_science;
			cout<<endl<<"gujrati   : ";
			cin>>gujrati;
			cout<<endl<<"sanskrit  : ";
			cin>>sanskrit;
			cout<<endl<<"english   : ";
			cin>>english;	
			
			total = science + maths + s_science + gujrati + sanskrit + english;
			per = float(total) * 100 / 600;		
		}
};
class MARKSHEET : public marksheet
{
	public:
		void dispaly()
		{
			cout<<endl<<endl<<"Display marksheet......"<<endl;
			cout<<endl<<"Name : ";
			puts(name);
		
			cout<<endl<<"Roll NO   : "<<no<<endl;
			cout<<endl<<"science   : "<<science<<endl;
			
			cout<<endl<<"maths     : "<<maths<<endl;
			
			cout<<endl<<"s_science : "<<s_science<<endl;
			
			cout<<endl<<"gujrati   : "<<gujrati<<endl;
		
			cout<<endl<<"sanskrit  : "<<sanskrit<<endl;
		
			cout<<endl<<"english   : "<<english<<endl;
			
			cout<<endl<<"===================="<<endl;
			
			cout<<endl<<"Total     : "<<total<<endl;
			
			cout<<endl<<"Per       : "<<per<<"%"<<endl;
		}	
};
int main()
{
	MARKSHEET z;
	z.input();
	z.dispaly();	
	return 0;
}
