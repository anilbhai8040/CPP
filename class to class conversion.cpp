#include <iostream>
using namespace std;

class pqr 
{
    public:
    int b;
    
    pqr() {} // Default constructor
    
    pqr(int x)
    {
        b = x;
    }
    
    void display()
    {
        cout << b << " odd number..." << endl;  
    }
};

class abc
{
    public:
    int a;
    
    void input()
    {
        cout << "a = ";
        cin >> a;
    }
    
    operator pqr()
    {
        pqr temp(a);
        return temp;
    }
};

int main() 
{
    abc p;
    pqr y;
    p.input();
    y = p;
    y.display();
    return 0;
}