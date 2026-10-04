#include<iostream>
using namespace std;
class library 
{
     public:
     int a[100],i,j,reduce,k,no;
     library()
     {
        j=0;
     }
     void insert() 
     {
         
         cout << endl <<" enter index range = ";
         cin >> no;
         for(i=j; i<no; i++)
           {
                cout << i << " book code = " ;
                cin >> a[i];
                j++;
           }
         
     }
     void remove()
     {
          cout << endl << "remove book code = " ;
          cin >> reduce;
          for(i=0; i<100; i++)
           {
               if(i==reduce)
               {
                  for(k=i; k<j-1; k++)
                    {
                       a[k]=a[k+1];
                    }
               }
           }
          j--;
     }
     void display()
     {
        for(i=0; i<j; i++)
          {
              if(a[i]!='\0')
              {
               cout << endl<< i << " book index = " << a[i];
              } 
          }
     
     }
};
int main()
{
    library k;
    int number;
    anil:
    cout << endl <<"1.insert." << endl;
    cout << "2.delete." << endl;
    cout << "3.display." << endl;
    cout << "4.exit." << endl;
    cout << endl <<"enter your choice = " ;
    cin >> number;
    
    switch(number)
     {
        case 1:
            k.insert();
            goto anil;
        case 2:
            k.remove();
            goto anil;
        case 3:
            k.display();
            goto anil;
        case 4:
            goto baraiya;            
        default:
            goto anil;
     }
     baraiya:
     return 0;
}