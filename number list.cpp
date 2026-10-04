#include <iostream>
using namespace std;

class operation 
{
    public:
    int i,j,k,total,fact,m,no,rev,r;
    operation(int k)
    {
        no=k;
    }
    void Even() 
    {
        cout << "\nEven numbers from 1 to " << no << ": ";
        for (i = 1; i <= no; i++) 
        {
            if (i % 2 == 0) 
            {
                cout << i << " ";
            }
        }
        cout << endl;
    }

    // Function to display odd numbers from 1 to n
    void Odd() 
    {
        cout << "\nOdd numbers from 1 to " << no << ": ";
        for (i = 1; i <= no; ++i) 
        {
            if (i % 2 == 1) 
            {
                cout << i << " ";
            }
        }
        cout << endl;
    }

    // Function to display prime numbers from 1 to n
    void Prime() 
    {
        cout << "\nPrime numbers from 1 to " << no << ": ";
        total=0;
        for(j = 1; j <= no; j++)
          {
             k = 0;
             for(i=1 ; i <= j; i++)
              {
               if(j%i==0)
                 {
                     k++;
                 }
              }
             if(k==2)
              {
                   printf("%d    ",j);
                   total++;
              }
          }
        cout << endl;
    }

    // Function to display factorials from 1 to n
    void Factorials() 
    {
        cout << "\nFactorial of numbers from 1 to " << no << ": ";
        
        for (i = 1; i <= no; i++) 
        { 
           fact=1;
           for (j = 1; j <= i; j++)
           {
                fact = fact * j;
           }
              cout << i << "! = " << fact << " ";
        }
        cout << endl;
    }

    // Function to display palindrome numbers from 1 to n
    void Palindrome()
    {
        cout << "\nPalindrome numbers from 1 to " << no << ": ";
        for (i = 1; i <= no; ++i) 
        {
           m=i;
           rev=0;
           while(m>0)
            {
                r=m%10;
                rev=rev*10+r;
                m=m/10;
            }
           if(i==rev)
            {
                cout << i << " ";
            }
        }
        cout << endl;
    }
};

int main() 
{
    
    int no;
    int choice;
    
    
        cout << "\nEnter the value of no: ";
        cin >> no;

        anil:
        cout << "\n1. Even\n2. Odd\n3. Prime Number\n4. Factorial Number\n5. Palindrome Number\n6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        
        
       operation p(no);
        switch (choice) 
        {
            case 1:
                p.Even();
                goto anil;
            case 2:
                p.Odd();
                goto anil;
            case 3:
                p.Prime();
                goto anil;
            case 4:
                p.Factorials();
                goto anil;
            case 5:
                p.Palindrome();
                goto anil;
            case 6:
                cout << "Exiting program...";
                goto baraiya;
            default:
                cout << "Invalid choice! Please choose again.";
                goto anil;
        }
    baraiya:

    return 0;
}

