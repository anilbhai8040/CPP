#include<iostream>
#include<string.h>
using namespace std;
class Palindrome{
	private:
		char str[100];
		int flag;
		
	public:
		Palindrome();
		void findPalindrome();
		void display();
		~Palindrome();
};

Palindrome::Palindrome(){
	cout <<endl<< "...Constructor Called..."<<endl; 
	cout << endl <<"Enter the String : ";
	gets(str);
}

void Palindrome::findPalindrome(){
	char str1[100],str2[100];
	strcpy(str1,str);
	strcpy(str2,str);
	strrev(str1);
	strlwr(str1);
	strlwr(str2);
	if(strcmp(str1,str2) == 0)
		flag = 1;
	else
		flag = 0;
}

void Palindrome::display(){
	if(flag == 1)
		cout<<endl<<"\""<<str<<"\""<<" is Palindrome String..."<<endl<<endl;
	else
		cout<<endl<<"\""<<str<<"\""<<" is Not Palindrome String..."<<endl<<endl;
}

Palindrome::~Palindrome(){
	cout <<"Destructor Called..."<<endl;
}

int main(){
	Palindrome obj;
	obj.findPalindrome();
	obj.display();	
	return 0;
}