#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char ch;
	int vowel=0,consonant=0;
	cout<<"enter string : ";
	ofstream abc("INPUT7.txt");
	ch=getchar();
	while(ch!=EOF)
	{
		abc<<ch;
		ch=getchar();
	}
	abc.close();
	
	cout<<endl<<"cout string : ";
	ifstream xyz("INPUT7.txt");
	while(xyz.get(ch))
	{
		if((ch>='a' && ch<='z') ||(ch>='A' && ch<='Z'))
		{
			if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
			{
				vowel++;
			}
			else if(ch=='a' ||ch=='e' ||ch=='i' ||ch=='o' ||ch=='u')
			{
				vowel++;
			}
			else
			{
				consonant++;
			}
		}
	}
	
	cout<<endl<<"vowel     : "<<vowel;
	cout<<endl<<"consonant   : "<<consonant;
	
	xyz.close();
	return 0;
}
