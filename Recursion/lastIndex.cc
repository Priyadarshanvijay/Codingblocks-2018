#include <iostream>
using namespace std;
int lastIndex(int arr[],int index,int noToFind)
{
	int res=-1;
	if(index>0)
	{
		
		if(arr[index-1] == noToFind)
		{
			return	index-1;
		}
		res  = lastIndex(arr,index-1,noToFind);
	}
	return res;
}
void inputArray(int arr[],int n)
{
	if(n>0)
	{
		inputArray(arr,n-1);
		cin>>arr[n-1];
	}
}
int main()
{
	int length;
	int noToFind;
	int arr[1000];
	cin >> length;
	inputArray(arr,length);
	cin >> noToFind;
	int res = lastIndex(arr,length,noToFind);
	cout<<res<<endl;
	return 0;
}