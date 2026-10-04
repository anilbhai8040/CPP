#include<iostream>
using namespace std;
class abc
{
  private:
  int b;
  void output()
  {
     cout << b;
  }
  public:
  int a;
  void display()
  {
     cout << "b=";
     cin >>b;
     
     cout << a <<endl;
     
     
     output();
  }
  
};
int main()
{
    abc k;
    //k.a=5;
    cout<<"a=";
    cin>>k.a;
    
    k.display();
    
    return 0;
}