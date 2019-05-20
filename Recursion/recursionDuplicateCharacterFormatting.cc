#include <iostream>
#include <cstring>
using namespace std;

void removeDuplicates(char arr[],int i,int len)
{
	if(arr[i] == '\0') return;
	if(arr[i] == arr[i+1])
	{
		arr[len] = '\0';
		int j = len-1;
		while(j!=i)
		{
			arr[j+1]  = arr[j];
			j--;
		}
		arr[i+1] = '*';
		removeDuplicates(arr,i+2,len+1);
	}
	else
		removeDuplicates(arr,i+1,len);
}

int main()
{
	char arr[100]={ };
	cin>>arr;
	int len = strlen(arr);
	removeDuplicates(arr,0,len);
	cout<<arr<<endl;
	return 0;
}