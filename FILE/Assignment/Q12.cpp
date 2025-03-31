#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int n=10,i,a[10],sum=0;
	ofstream abc("input12.txt");
	for(i=0;i<n;i++)
	{
		cout<<"no "<<i+1<<" = ";
		cin>>a[i];
		abc<<a[i]<<endl;
	}
	abc.close();
	
	ifstream xyz("input12.txt");
	for(i=0;i<n;i++)
	{
		xyz>>a[i];
		sum+=a[i];
		cout<<"no "<<i+1<<" = "<<a[i]<<endl;
	}
	cout<<endl<<"sum = "<<sum;
	xyz.close();
	return 0;
}
