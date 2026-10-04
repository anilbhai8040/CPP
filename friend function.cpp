#include<iostream>
using namespace std;
class additio
{
  int m,n,add;
  public:
  void input()
  {
      cout << "enter number 1 : ";
      cin >> m;
      cout << "enter number 2 : ";
      cin >> n;
  }
  friend void sum(additio);
}k;
void sum(additio t)
{
   t.add=t.m+t.n;
   cout << "sum : " << t.add << endl;

}
int main()
{
    k.input();
    sum(k);
    
}