#include <iostream>
using namespace std;

class even
{
    public:
    int no,no1,i,sum,sum1;
    even(int k)
    {
        no=k;
    }
    even(even & j)
    {
        no1=j.no;
    }
    void Even() 
    {
        sum1=0;
        cout << "\nEven numbers from 1 to " << no1 << ":- ";
        for (i = 1; i <= no1; i++) 
        {
            if (i % 2 == 0) 
            {
                cout << i << " ";
                sum1+=i;
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
        for (i = 1; i <= no1; i++) 
        {
            if (i % 2 == 1) 
            {
                cout << i << " ";
                sum+=i;
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
    y.Even();
    y.Odd();
}

