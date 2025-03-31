#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int n=10,i,a[10];
	ofstream abc("input11.txt");
	for(i=0;i<n;i++)
	{
		cout<<"no "<<i+1<<" = ";
		cin>>a[i];
		abc<<a[i]<<endl;
	}
	abc.close();
	
	ifstream xyz("input11.txt");
	cout<<endl<<"devisable by 5 ...."<<endl<<endl;
	for(i=0;i<n;i++)
	{
		xyz>>a[i];
		if(a[i]%5==0)
		{
			cout<<"no "<<i+1<<" = "<<a[i]<<endl;
		}
	}
	xyz.close();
	return 0;
}
