
#include <iostream>
using namespace std;

class marksheet 
{
    public:
    int a[10], b[10], c[10], i, j, k,x;
    int isum, esum, tsum;
    float per;
    // Default constructor
    marksheet()
    {
       i = j = 0;
       isum = esum = tsum = 0;
    }

    // Copy constructor
    marksheet(marksheet &other)
    {
        for (x = 1; x <= 9; x++) 
        {
            a[x] = other.a[x];
            b[x] = other.b[x];
            c[x] = other.c[x];
        }
        i = other.i;
        j = other.j;
        k = other.k;
        isum = other.isum;
        esum = other.esum;
        tsum = other.tsum;
        per = other.per;
        
        
        
    }

    // Function to take internal marks
    void internal()
    {
        cout << "C++ - [T]  : 35 : ";
        cin  >> a[++i];
        cout << "C++ - [P]  : 15 : ";
        cin  >> a[++i];
        cout << "DFS - [T]  : 35 : ";
        cin  >> a[++i];
        cout << "DFS - [P]  : 15 : ";
        cin  >> a[++i];
        cout << "OS         : 50 : ";
        cin  >> a[++i];
        cout << "Multimedia : 50 : ";
        cin  >> a[++i];
        cout << "English    : 25 : ";
        cin  >> a[++i];
        cout << "Photoshop  : 25 : ";
        cin  >> a[++i];
        cout << "IBM        : 25 : ";
        cin  >> a[++i];
    }

    // Function to take external marks
    void external()
    {
        cout << "C++ - [T]  : 35 : ";
        cin  >> b[++j];
        cout << "C++ - [P]  : 15 : ";
        cin  >> b[++j];
        cout << "DFS - [T]  : 35 : ";
        cin  >> b[++j];
        cout << "DFS - [P]  : 15 : ";
        cin  >> b[++j];
        cout << "OS         : 50 : ";
        cin  >> b[++j];
        cout << "Multimedia : 50 : ";
        cin  >> b[++j];
        cout << "English    : 25 : ";
        cin  >> b[++j];
        cout << "Photoshop  : 25 : ";
        cin  >> b[++j];
        cout << "IBM        : 25 : ";
        cin  >> b[++j];
    }

    // Function to display the marksheet
    void display()
    {
        for (i = 1; i <= 9; i++)
        {
            c[i] = a[i] + b[i];
            isum += a[i];
            esum += b[i];
            tsum += c[i];
        }
        per = float(tsum) * 100 / 550;

        j = k = i = 0;
        cout << endl ;
        
        cout << "  subject  : max: int: ext: total " << endl << endl;
        cout << "C++ - [T]  : 35 : " << a[++i] << " : " << b[++j] << " : " << c[++k] << endl;
        cout << "C++ - [P]  : 15 : " << a[++i] << " : " << b[++j] << " : " << c[++k] << endl;
        cout << "DFS - [T]  : 35 : " << a[++i] << " : " << b[++j] << " : " << c[++k] << endl;
        cout << "DFS - [P]  : 15 : " << a[++i] << " : " << b[++j] << " : " << c[++k] << endl;
        cout << "OS         : 50 : " << a[++i] << " : " << b[++j] << " : " << c[++k] << endl;
        cout << "Multimedia : 50 : " << a[++i] << " : " << b[++j] << " : " << c[++k] << endl;
        cout << "English    : 25 : " << a[++i] << " : " << b[++j] << " : " << c[++k] << endl;
        cout << "Photoshop  : 25 : " << a[++i] << " : " << b[++j] << " : " << c[++k] << endl;
        cout << "IBM        : 25 : " << a[++i] << " : " << b[++j] << " : " << c[++k] << endl;
        cout << endl;
        cout << "           : 275: " << isum << " : " << esum << " : " << tsum << endl;
        cout << endl << "percentage : " << per << endl;
    }
    void input()
     {
        
     
     }
};

int main()
{
    marksheet p;
    char name[30];
    int rno;
        cout<<"enter name : ";
        cin>>name;
        cout<<"roll no. : ";
        cin>>rno;
    
    p.internal();
    cout << endl << "Enter external marks." << endl << endl;
    p.external();

    marksheet copy = p;

    cout<<endl<<endl;
    cout << "name    : " << name <<endl;
    cout << "roll no : " << rno  <<endl;
    copy.display();
}


