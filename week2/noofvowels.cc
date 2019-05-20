#include <iostream>
using namespace std;
int main()
{
	char input[100]={ };
	int vowels = 0;
	int count = 0;
	int i =0;
	cin.getline(input,90);
	while(input[i]!='\0')
	{
		count++;
		i++;
	}
	for ( i = 0; i < count; i++)
	{
		if(input[i] == 'a' || input[i] == 'e' || input[i] == 'i' || input[i] == 'o' || input[i] == 'u' || input[i] == 'A' || input[i] == 'E' || input[i] == 'I' || input[i] == 'O' || input[i] == 'U')
		{
			vowels++;
		}
	}
	cout<<"there are "<<vowels<<" vowels\n";
	return 0;
}