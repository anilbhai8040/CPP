#include <iostream>
using namespace std;
class abc
{
    public:
    int a;
    
    void input()
    {
        cout << "a = ";
        cin >> a;
    }
    friend abc operator +(abc k,abc l);
    void display()
    {
        cout << endl << "a = " <<a;
    }
};

abc operator +(abc k,abc l)
{
    abc m;
    m.a=k.a+l.a;
    return m;
}
int main() 
{
    abc p,q,r;
    p.input();
    q.input();
    r=p+q;
    p.display();
    q.display();
    r.display();
    return 0;
}