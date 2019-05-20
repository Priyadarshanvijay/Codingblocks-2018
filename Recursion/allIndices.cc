#include <iostream>
using namespace std;
void allIndices(int arr[],int startIndex,int index,int noToFind)
{
	if(startIndex<=index-1)
	{
		if(arr[startIndex] == noToFind)
		{
			cout<<startIndex<<" ";
		}
		allIndices(arr,startIndex+1,index,noToFind);
	}
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
	allIndices(arr,0,length,noToFind);
	cout<<endl;
	return 0;
}