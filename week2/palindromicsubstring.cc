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
int isPalindrome(char arr[])
{
	char arr1[1000] = { };
	int count = 0;
	reverseString(arr,arr1);
	int flag = 1;
	int i = 0;
	while(arr[i]!='\0')
	{
		if(arr[i]!=arr1[i])
		{
			flag = 0;
			break;
		}
		else
		{
			i++;
		}
	}
	if(flag ==1) count++;
}
int main()
{
	char arr[1000];
	cin.getline(arr,900);
	int stringIsPalindrome = isPalindrome(arr);	
	cout<<stringIsPalindrome<<endl;	
	return 0;
}