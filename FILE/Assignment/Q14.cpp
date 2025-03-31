#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int n,i,a[10];
	cout<<"enter total element : ";
	cin>>n;
	ofstream abc("input14.txt");
	for(i=0;i<n;i++)
	{
		cout<<"no "<<i+1<<" = ";
		cin>>a[i];
		if(a[i]%2==0)
		{
			abc<<a[i]<<endl;
		}
	}
	abc.close();
	
	ifstream xyz("input14.txt");
	cout<<endl<<"even numbers....."<<endl<<endl;
    while(xyz>>n)
	{
		cout<<"no = "<<n<<endl;
	}
	xyz.close();
	return 0;
}
