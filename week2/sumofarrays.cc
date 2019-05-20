#include <iostream>
using namespace std;
void reverseArray(int arr[],int length){
	int k = length -1;
	for(int i=0;i<length/2;i++)
	{
		int temp = arr[i];
		arr[i] = arr[k];
		arr[k] = temp;
		k--;
	}
}
int sum(int arr1[],int arr2[],int lengthOf1, int lengthOf2)
{
	int carry = 0;
	int min = lengthOf1;
	int max = lengthOf2;
	if(lengthOf2<lengthOf1)
	{
		min = lengthOf2;
		max = lengthOf1;
	}
	for(int i = 0;i<max;i++)
	{
		arr2[i] = arr1[i] + arr2[i] + carry;
		carry = arr2[i]/10;
		arr2[i] = arr2[i]%10;
	}
	if(carry)
	{
		arr2[max] = arr2[max] + carry;
		max++;
	}
	reverseArray(arr2,max);
	return max;
}
void inputArray(int arr[],int length)
{
    for(int i=length-1;i>=0;i--)
    {
        cin >> arr[i];
    }
}
void outputArray(int arr[],int length)
{
    for(int i=0;i<length;i++)
    {
        cout << arr[i] << ", ";
    }
    cout<<"END"<< endl;
}
int main()
{
	int arr1[1000]={};
	int n;
	cin >> n;
	inputArray(arr1,n);
	int arr2[1000]={};
	int m;
	cin >> m;
	inputArray(arr2,m);
	int max = sum(arr1,arr2,n,m);
	outputArray(arr2,max);
	return 0;
}