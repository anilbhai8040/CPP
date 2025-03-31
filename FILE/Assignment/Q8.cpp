#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int n=10,i,a[100];
	ofstream abc("input8.txt");
	for(i=0;i<n;i++)
	{
		cout<<"no "<<i+1<<" = ";
		cin>>a[i];
		abc<<a[i]<<endl;
	}
	abc.close();
	
	ifstream xyz("input8.txt");
	for(i=0;i<n;i++)
	{
		xyz>>a[i];
		cout<<"no "<<i+1<<" = "<<a[i]<<endl;
	}
	xyz.close();
	return 0;
}
