#include <iostream>
using namespace std;
int main()
{
	int input;
	int flag =0;
	cin >> input;
	int arr[input]={};
	int arr2[input]={};
	for(int i=0;i<input;i++)
	{
	    cin >> arr[i];
	}
	int k = input - 1;
	for(int i=0;i<(input/2);i++)
	{
	    int temp = arr[i];
	    arr[i] = arr[k];
	    arr[k] = temp;
	    k--;
	}
	for(int i=0;i<input;i++)
	{
		arr2[arr[i]-1]=i+1;
	}
	for(int i=0;i<input;i++)
	{
		if(arr2[i]!=arr[i])
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		cout<<"false"<<endl;
	}
	else
	{
		cout<<"true"<<endl;
	}
}
