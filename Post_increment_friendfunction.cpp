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
    friend abc operator ++(abc & k,int);
    void display()
    {
        cout << endl << "a = " <<a;
    }
};

abc operator ++(abc & k,int)
{
    k.a++;
    return k;
}
int main() 
{
    abc p;
    p.input();
    p++;
    p.display();
    return 0;
}