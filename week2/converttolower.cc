	#include <iostream>
	using namespace std;
	char upperToLower(char a)
	{
		if(c>='A' && c<='Z')
		{
			a = 'a' + (a  - 'A');
		}
		return a;
	}
	int cntLength(char arr[])
	{
		int count = 0;
		int i = 0;
		while(arr[i]!='\0')
		{
			count++;
			i++;
		}
	}
	int main()
	{
		char arr[100] = { };
		cin.getline(arr,90);
	}