#include <iostream>
using namespace std;
int firstIndex(int arr[],int startIndex,int index,int noToFind)
{
	int res=-1;
	if(startIndex<=index-1)
	{
		if(arr[startIndex] == noToFind)
		{
			return	startIndex;
		}
		res  = firstIndex(arr,startIndex+1,index,noToFind);
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
	int res = firstIndex(arr,0,length,noToFind);
	cout<<res<<endl;
	return 0;
}