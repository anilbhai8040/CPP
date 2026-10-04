#include <iostream>
using namespace std;

class Temperature 
{
    private:
        float temp;

    public:
        // Constructor to initialize the temperature
        Temperature(float k) 
        {
            temp = k;
        }

        // Copy constructor
        Temperature(Temperature &obj) 
        {
            temp = obj.temp;
        }

        // Convert Celsius to Fahrenheit
        void Fahrenheit()
        {
            temp = (9.0 / 5.0) * temp + 32;
            cout << "Fahrenheit: " << temp << endl;
        }

        // Convert Fahrenheit to Celsius
        void celsius()
        {
            temp = (temp - 32) * 5.0 / 9.0;
            cout << "Celsius: " << temp << endl;
        }
};

int main() 
{
    float no;
    int choice;
    
    cout << "1. Fahrenheit to Celsius." << endl;
    cout << "2. Celsius to Fahrenheit." << endl << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    
    switch (choice)
    {
       case 1:
           cout << "Enter Fahrenheit: ";
           cin >> no;
           {
               Temperature p(no);
               Temperature k(p);
               k.celsius(); 
           }
           break;
       case 2:
           cout << "Enter Celsius: ";
           cin >> no;
           {
               Temperature p(no);
               Temperature k(p);
               k.Fahrenheit(); 
           }
           break;
       default:
           cout << "Invalid choice!" << endl;
           break;
    }
}