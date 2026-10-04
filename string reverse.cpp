#include<iostream>
using namespace std;
class rev
{
  int l;
  char str[30],str1[30];
  public:
  void input()
  {
      cout << "enter string : ";
      cin >> str;
  }
  friend void output(rev);
}p;
void output(rev t)
{
   int n,i,j,k=0;
   while(t.str[k]!='\0')
   {
       t.l++;
       k++;
   }
   j=t.l-1;
   for(i=0; i<t.l; i++)
   {
      t.str1[j]=t.str[i];
      j--;
   }
   for(i=0; i<t.l; i++)
   {
       cout<<t.str1[i];
   }
   
   
   

}
int main()
{
    p.input();
    output(p);
    
}