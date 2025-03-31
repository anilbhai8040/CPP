#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int n=10,i,a[10];
	ofstream abc("input9.txt");
	for(i=0;i<n;i++)
	{
		cout<<"no "<<i+1<<" = ";
		cin>>a[i];
		abc<<a[i]<<endl;
	}
	abc.close();
	
	ifstream xyz("input9.txt");
	ofstream ab("output9.txt");
	for(i=0;i<n;i++)
	{
		xyz>>a[i];
		ab<<a[i]<<endl;
	}
	xyz.close();
	ab.close();
	return 0;
}
