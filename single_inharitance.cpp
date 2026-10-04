#include <iostream>
using namespace std;
class a
{
    public:
    int no1,no2,sum;
    void input()
    {
        cout << "no1 = ";
        cin>>no1;
        cout << "no2 = ";
        cin>>no2;
    }
};
class b : public a
{ 
   public:
   void display()
   {
       sum=no1+no2;
       cout << no1 << " + " << no2 <<" = "<<sum<< endl;
   }
};
int main() 
{
    b a1;
    a1.input();
    a1.display();
    return 0;
}