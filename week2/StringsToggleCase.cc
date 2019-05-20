	#include <iostream>
	using namespace std;
	int length(char arr[])
	{
		int i= 0;
		while(arr[i]!='\0')
		{
			i++;
		}
		return i;
	}
	char convertCase(char a)
	{
		if(a>='a' && a<='z')
		{
			//isLowerCase
			a = 'A' + (a - 'a'); 
		}
		else if(a>='A' && a<='Z')
		{
			//isUpperCase
			a = 'a' + (a - 'A');
		}
		return a;
	}
	int main()
	{
		char arr[1000]={ };
		cin.getline(arr,990);
		int length1 = length(arr);
		for(int i =0;i<length1;i++)
		{
			arr[i] = convertCase(arr[i]);	
		}
		for(int i =0;i<length1;i++)
		{
			cout<<arr[i];	
		}
		cout<<endl;
	}