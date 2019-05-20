#include <iostream>
using namespace std;
bool isArraySorted(int arr[],int startIndex,int endIndex)
{
	if(startIndex==endIndex) return true;
	bool ans = isArraySorted(arr,startIndex+1,endIndex);
	if(arr[startIndex]>arr[startIndex+1])
	{
		return false;
	}
	return true;
}
void inputArray(int arr[],int length)
{
    for(int i=0;i<length;i++)
    {
        cin >> arr[i];
    }
}
int main()
{
	int arr[100];
	int n = 0;
	cin>>n;
	inputArray(arr,n);
	bool ans = isArraySorted(arr,0,n-1);
	if(ans)
	{
		cout<<"true"<<endl;
	}
	else
	{
		cout<<"false\n";
	}
	return 0;
}