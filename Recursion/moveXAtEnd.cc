#include <iostream>
#include <cstring>
using namespace std;
void outputString(char arr[],int length1)
{
	for(int i =0;i<length1;i++)
	{
		cout<<arr[i];	
	}
	cout<<endl;
}

void moveXAtEnd(char arr[],int currChar,int len,int len2)
{
	if(len2==0) return;
	if(arr[currChar]=='x')
	{
		char temp = arr[currChar];
		for(int i = currChar ; i < len-1 ; i++)
		{
			arr[i] = arr[i+1];
		}
		arr[len-1] = temp;
		moveXAtEnd(arr,currChar,len,len2-1);
	}
	else
	{
		moveXAtEnd(arr,currChar+1,len,len2-1);
	}
}

int main()
{
	char arr[1000] = { };
	cin>>arr;
	int len = strlen(arr);
	moveXAtEnd(arr,0,len,len);
	outputString(arr,len);
	return 0;
}