#include <iostream>
using namespace std;
bool containedInAnArray(int arr[],int startIndex,int index,int noToFind)
{
	if(startIndex<=index-1)
	{
		if(arr[startIndex] == noToFind)
		{
			return true;
		}
		containedInAnArray(arr,startIndex+1,index,noToFind);
		return false;
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
	bool result = containedInAnArray(arr,0,length,noToFind);
	if(result)
	{
		cout<<"true"<<endl;
	}
	else
	{
		cout<<"false"<<endl;
	}
	return 0;
}