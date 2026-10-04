#include <iostream>
using namespace std;
class a
{
    public:
    int no1,no2,sum,sub,mul;
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
class c : public a
{
    public:
    void display()
    {
       sub=no1-no2;
       cout << no1 << " - " << no2 <<" = "<<sub<< endl;
    }
};

class d : public a
{
    public:
    void display()
    {
       mul=no1*no2;
       cout << no1 << " * " << no2 <<" = "<<mul<< endl;
    }
};
int main() 
{
    b a1;
    c a2;
    d a3;
    cout << "for addition...." << endl;
    a1.input();
    a1.display();
    cout << "for subtraction...." << endl;
    a2.input();
    a2.display();
    cout << "for multiplication...." << endl;
    a3.input();
    a3.display();
    return 0;
}