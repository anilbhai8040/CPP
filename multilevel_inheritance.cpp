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
    }
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
class c : public b
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
    c p;
    p.input();
    p.input1();
    p.display();
    return 0;
}