#include <iostream>
using namespace std;

class even
{
    public:
    int no,no1,i,sum,sum1,a[100];
    even(int k)
    {
        no=k;
    }
    even(even & j)
    {
        no1=j.no;
    }
    void input()
    {
      for(i=0; i<no1; i++) 
        {
           cout << "a["<<i<<"]"<<" = ";
           cin>>a[i];
        }
    
    }
    void Even() 
    {
        sum1=0;
        cout << "\nEven numbers from 1 to " << no1 << ":- ";
        for (i = 0; i < no1; i++) 
        {
            if (a[i] % 2 == 0) 
            {
                cout << a[i] << " ";
                sum1+=a[i];
            }
        }
        cout << endl << "sum of even number : " << sum1 << endl;
        cout << endl;
    }

    // Function to display odd numbers from 1 to n
    void Odd() 
    {
        sum=0;
        cout << "\nOdd numbers from 1 to " << no1 << ":- ";
        for (i = 0; i < no1; i++) 
        {
            if (a[i] % 2 == 1) 
            {
                cout << a[i] << " ";
                sum+=a[i];
            }
        }
        cout << endl <<"sum of odd number : " << sum << endl;
        cout << endl;
    }

};

int main() 
{
    
    int n;
    
    cout << "enter range : ";
    cin >> n;
    
    even x(n);
    even y(x);
    y.input();
    y.Even();
    y.Odd();
}

