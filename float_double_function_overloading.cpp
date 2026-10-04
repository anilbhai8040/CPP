#include <iostream>
using namespace std;

class abc
{
    public:
    
    void sum(float a,float b)
    {
        cout << "hi...." << endl;
    }
    
    void sum(double a,double b)
    {
        cout << "hellow......" << endl;
    }

};
int main() 
{
    abc k;
    
    k.sum(8.10,2.5);      // f is not required for double value 
    k.sum(8.10f,2.5f);    // f is required for float value 
    return 0;
}