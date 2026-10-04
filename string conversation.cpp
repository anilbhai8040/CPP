#include <iostream>
using namespace std;

class Convert
{
    

    public:
    string str;
    int i;
    Convert(string s) 
    {
        str = s;
    }

    
    void display() 
    {
        i=0;
        while(str[i]!='\0')
         {
            if(str[i]>='A' && str[i]<='Z')
              {
                 str[i]+=32;
              }
            else if(str[i]>='a' && str[i]<='z')
              {
                 str[i]-=32;
              }
            i++;
         }
        
        cout << "Capital String: " << str << endl;
    }
};

int main() 
{
    string input;
    cout << "Enter String: ";
    cin>>input;

    
    Convert obj(input);

    
  //  obj.toUpperCase();
    obj.display();

    return 0;
}