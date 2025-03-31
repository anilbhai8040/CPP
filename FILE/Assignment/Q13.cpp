#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int n=10,i,a[10],count=0,j;
	ofstream abc("input13.txt");
	for(i=0;i<n;i++)
	{
		cout<<"no "<<i+1<<" = ";
		cin>>a[i];
		abc<<a[i]<<endl;
	}
	abc.close();
	
	ifstream xyz("input13.txt");
	ofstream ab("output13.txt");
	for(i=0;i<n;i++)
	{
		count=0;
		xyz>>a[i];
		for(j=1; j<=a[i]; j++)
		{
			if(a[i]%j==0)
			{
				count++;
			}
		}
		if(count==2)
		{
			ab<<a[i]<<endl;
		}
	}
	xyz.close();
	ab.close();
	ifstream xy("output13.txt");
	cout<<endl<<"prime numbers : "<<endl<<endl;
	while(xy>>n)
	{
		cout<<"no = "<<n<<endl;
	}
	return 0;
}
