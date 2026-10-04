#include<iostream>
using namespace std;
class length 
{
  int l;
  char str[30];
  public:
  void input()
  {
      cout << "enter string : ";
      cin >> str;
  }
  friend void output(length);
};
void output(length t)
{
   int k=0;
   while(t.str[k]!='\0')
   {
       t.l++;
       k++;
   }
   
   cout << endl << "string length : " << t.l;
   
}
int main()
{
    length p;
    p.input();
    output(p);
    
}