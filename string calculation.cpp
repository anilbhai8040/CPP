#include <iostream>
using namespace std;

class StringDetails
{
    public:
    string str;
    int totalLength;
    int vowels, consonants,digit, specialChars, whitespaces;
    int i;
    char ch;

    // Constructor
    StringDetails(string input) 
    {
        str = input;
        totalLength = vowels = digit = consonants = specialChars = whitespaces = 0;
    }

    // Copy constructor
    StringDetails( StringDetails &original)
     {
        str = original.str;
        totalLength = original.totalLength;
        vowels = original.vowels;
        consonants = original.consonants;
        specialChars = original.specialChars;
        whitespaces = original.whitespaces;
        digit = original.digit;
    }

    // Function to calculate the details of the string
    void calculate()
     {
        for (i = 0; str[i] != '\0'; i++) 
        {
            ch = str[i];
            totalLength++;

            // Check if character is a vowel
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') 
            {
                vowels++;
            }
            // Check if character is a consonant
            else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
            {
                consonants++;
            }
            // Check for white spaces
            else if (ch == ' ') 
            {
                whitespaces++;
            }
            // Special characters
            else if(ch>='0' && ch<='9')
            {
                digit++;
            }
            else 
            {
                specialChars++;
            }
        }
    }

    // Function to display the details
    void display() 
    {
        cout << "Total Length: " << totalLength << endl;
        cout << "Vowels: " << vowels << endl;
        cout << "Consonants: " << consonants << endl;
        cout << "White Spaces: " << whitespaces << endl;
        cout << "Special Characters: " << specialChars << endl;
        cout << "digit :" << digit << endl;
    }
};

int main() 
{
    
    char str[100];
    cout << "Enter a string with spaces: ";
    cin.getline(str, 100);

    StringDetails original(str);
    StringDetails copy(original);
    copy.calculate();
    cout << "\nDetails of the copied string:\n";
    copy.display();

    return 0;
}