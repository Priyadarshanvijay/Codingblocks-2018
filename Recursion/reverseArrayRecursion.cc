#include <iostream>
using namespace std;
void mySwap(int& a,int& b)
{
	int temp = a;
	a=b;
	b=temp;
}
void reverseArray(int arr[],int firstIndex,int lastIndex)
{
	if(firstIndex>=lastIndex) return;
	mySwap(arr[firstIndex],arr[lastIndex]);
	reverseArray(arr,firstIndex+1,lastIndex-1);
}
void displayArray(int arr[],int n)
{
	if(n>0)
	{
		displayArray(arr,n-1);
		cout<<arr[n-1]<<" ";
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
	reverseArray(arr,0,n-1);
	displayArray(arr,n);
	cout<<endl;
	return 0;
}