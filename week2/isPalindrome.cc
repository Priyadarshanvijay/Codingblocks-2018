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
void reverseString(char arr[],char arr1[])
{
	int len = length(arr);
	int k = len - 1;
	int i = 0;
	while(k>=0)
	{
		arr1[k] = arr[i];
		k--;
		i++;
	}
}
bool isPalindrome(char arr[])
{
	char arr1[1000] = { };
	reverseString(arr,arr1);
	int i = 0;
	while(arr[i]!='\0')
	{
		if(arr[i]!=arr1[i])
			return false;
			i++;
	}
	return true;
}
int main()
{
	char arr[1000];
	cin.getline(arr,900);
	bool stringIsPalindrome = isPalindrome(arr);
	if(stringIsPalindrome)
	{
		cout<<"true"<<endl;
	}
	else
	{
		cout<<"false"<<endl;
	}	
	return 0;
}