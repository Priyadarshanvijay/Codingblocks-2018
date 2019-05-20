#include <iostream>
using namespace std;
int countAlphabets(char arr[],int length)
{
	int count = 0;
	for(int i =0; i< length; i++)
	{
		if((arr[i]>='a' && arr[i]<='z')||(arr[i]>='A' && arr[i]<='Z'))
		{
			count++;
		}
	}
	return count;
}
int countDigits(char arr[],int length)
{
	int count = 0;
	for(int i =0; i< length; i++)
	{
		if(arr[i]>='0' && arr[i]<='9')
		{
			count++;
		}
	}
	cout<<count<<" \n";
	return count;
}
int countWhitespace(char arr[],int length)
{
	int count = 0;
	for(int i =0; i< length; i++)
	{
		if(arr[i]==' ' || arr[i]=='\t' || arr[i]=='\n')
		{
			count++;
		}
	}
	return count;
}
int countSpaces(char arr[],int length)
{
	int count = 0;
	for(int i =0; i< length; i++)
	{
		if(arr[i]==' ')
		{
			count++;
		}
	}
	return count;
}
int countWord(char arr[],int length)
{
	int count = 0;
	bool isSpace = false;
	for(int i =0; i< length; i++)
	{
		if(!isSpace)
		{
			if(arr[i]==' ' || arr[i]=='\t' || arr[i]=='\n')
			{
				count++;
				isSpace = !isSpace;
			}
		}
		else
		{
			isSpace = !isSpace;
		}

	}
	return count;
}
int length(char arr[])
{
	int i= 0;
	while(arr[i]!='\0')
	{
		i++;
	}
	return i;
}
int main()
{
	char arr[100];
	cin.getline(arr,90,'$');
	int len1 = length(arr);
	int alphabets = countAlphabets(arr,len1);
	int digits = countDigits(arr,len1);
	int whitespace = countWhitespace(arr,len1);
	int spaces = countSpaces(arr,len1);
	int words = countWord(arr,len1);
	cout<<alphabets<<" "<<digits<<" "<<" "<<whitespace<<" "<<spaces<<" "<<words<<endl; 
}
