#include<iostream>
using namespace std;
class abc
{
  public:
  int m,n;
  
  abc()
   {
      m=10;
      n=20;
   }
   
   abc(abc & i)
   {
     m=i.m+20;
     n=i.n+30;
   }
   void display()
   {
       cout << "m = " << m << endl;
       cout << "n = " << n << endl;
   }
};
int main()
{
    abc k;
    abc l(k);
    k.display();
    l.display();
    return 0;
}