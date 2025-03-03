#include<iostream>
using namespace std;
class abc
{
	public:
		int arr[10],i;
		
		void display()
		{
			for(i=0; i<10; i++)
			{
				cout<<"no"<<i+1<<" = ";
				cin>>arr[i];
			}
		}
		
		void display(int sum)
		{
			cout<<endl;
			for(i=0; i<10; i++)
			{
	            if(i!=9)
	            {
	            	cout<<arr[i]<<" + ";
				}
				else
				{
					cout<<arr[i]<<" = ";
				}
				sum+=arr[i];
			}
			cout<<sum;
		}
};
int main()
{
	int sum=0;
	abc a;
	a.display();
	a.display(sum);
	return 0;
}
