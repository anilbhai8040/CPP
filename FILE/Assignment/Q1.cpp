#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char ch,k;
	cout<<"enter single charecter : ";
	ofstream abc("INPUT1.txt");
	ch=getchar();
	abc<<ch;
	abc.close();
	cout<<endl<<"display single charecter : ";
	ifstream xyz("INPUT1.txt");
	k=xyz.get();
	cout<<k;
	xyz.close();
	return 0;
}
