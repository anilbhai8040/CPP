#include <iostream>
using namespace std;

class pqr 
{
   public: 
   int b;
   
   pqr()
   {
   
   }
   
   pqr(int k)
   {
       b=k;
   }
   
   void display()
   {
      cout<<"b = "<<b;
   
   }
   
};

class abc
{
    public:
    int a;
    
    void input()
    {
        cout << "a = ";
        cin>>a;
    }
    
    operator pqr()
    {
        return a;
    }
};

int main() 
{
    abc p;
    pqr  q;
    p.input();
    q=p;
    q.display();
    return 0;
}