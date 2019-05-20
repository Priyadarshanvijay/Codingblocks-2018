#include <iostream>
using namespace std;

void removeDuplicates(char arr[],int i)
{
	if(arr[i] == '\0') return;
	if(arr[i] == arr[i+1])
	{
		int j = i+1;
		while(arr[j]!='\0')
		{
			arr[j]  = arr[j+1];
			j++;
		}
		arr[j-1] = '\0';
		removeDuplicates(arr,i);
	}
	else
		removeDuplicates(arr,i+1);
}

int main()
{
	char arr[100];
	cin>>arr;
	removeDuplicates(arr,0);
	cout<<arr<<endl;
	return 0;
}