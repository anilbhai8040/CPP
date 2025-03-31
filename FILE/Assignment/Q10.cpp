#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int n=10,i,a[10];
	ofstream abc("input10.txt");
	for(i=0;i<n;i++)
	{
		cout<<"no "<<i+1<<" = ";
		cin>>a[i];
		abc<<a[i]<<endl;
	}
	abc.close();
	
	ifstream xyz("input10.txt");
	ofstream ab("odd.txt");
	ofstream xy("even.txt");
	for(i=0;i<n;i++)
	{
		xyz>>a[i];
		if(a[i]%2==0)
		{
			xy<<a[i]<<endl;
		}
		else
		{
			ab<<a[i]<<endl;
		}
	}
	xyz.close();
	ab.close();
	xy.close();
	return 0;
}
