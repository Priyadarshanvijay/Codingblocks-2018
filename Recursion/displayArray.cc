#include <iostream>
using namespace std;
void displayArray(int arr[],int n)
{
	if(n>0)
	{
		cout<<arr[n-1]<<" ";
		displayArray(arr,n-1);
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
	int arr[100];
	int n;
	cin>>n;
	inputArray(arr,n);
	displayArray(arr,n);
	return 0;
}