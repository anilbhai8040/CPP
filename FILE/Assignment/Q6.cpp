#include <iostream>
#include <fstream>
using namespace std;

int main() 
{
    char str[100];  
    cout << "Enter string: ";
    gets(str);  

    // Writing input to file
    ofstream outFile("INPUT6.txt");
    outFile << str;
    outFile.close();

    // Variables for counting
    
    int word = 0, space = 0, number = 0, alphabet = 0, special = 0,k=0;
    char ch;

    // Reading from file
    ifstream xyz("INPUT6.txt");
    while (xyz.get(ch)) 
	{
        if (isalpha(ch)) 
		{
            alphabet++; k=1;
        } 
        else if (isdigit(ch)) 
		{
            number++;
            k=1;
        } 
        else if (isspace(ch)) 
		{
            space++;
            if (k) 
			{
                word++;
                k=0;
            }
        } 
        else 
		{
            special++;
            k=1;
        }
    }
    if (k)
	{
	    word++;  // Count the last word if there was no trailing space
    }
    xyz.close();

    // Output the results
    cout << "\nWord count: " << word;
    cout << "\nSpaces: " << space;
    cout << "\nNumbers: " << number;
    cout << "\nAlphabets: " << alphabet;
    cout << "\nSpecial characters: " << special << endl;

    return 0;
}
