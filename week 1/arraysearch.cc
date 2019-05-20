#include <iostream>
using namespace std;
int search(int arr[],int size, int elementToSearch)
{
	int res=-1;
	for(int i=0;i<size;i++)
	{
		if(elementToSearch==arr[i])
		{
			res = i;
			break;
		}
	}
	return res;	
}
int main()
{
	int arr[10]={};
	int n;
	int toSearch;
	cout<<"Enter Length of array: ";
	cin >> n;
	cout << "Enter the elements of array : ";
	for(int i=0;i<n;i++)
	{
		cin >> arr[i];
	}
	cout << "Enter the element to search : ";
	cin >> toSearch;
	int res = search(arr,n,toSearch);
	cout<<"The element is at index "<<res<<endl;
}
