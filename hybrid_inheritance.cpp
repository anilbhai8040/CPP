
#include <iostream>
using namespace std;
class a
{
    public:
    int no1,no2,sum,sub;
};
class b : virtual public a
{
    public:
    void input1()
    {
       cout << "no2 = ";
       cin>>no2;
    }
};
class c : virtual public a
{
    public:
    void input()
    {
       cout << "no1 = ";
       cin>>no1;
    }
};
class d : public b, public c
{
    public:
    void display()
    {
       sum=no1+no2;
       sub=no1-no2;
       cout << no1 << " + " << no2 <<" = "<<sum<< endl;
       cout << no1 << " - " << no2 <<" = "<<sub<< endl;
    }
};
int main() 
{
    d p;
    p.input();
    p.input1();
    p.display();
    return 0;
}