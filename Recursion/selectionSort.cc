#include <iostream>
using namespace std;
int findMinIndexArray(int arr[],int start,int end)
{
	int min = arr[start];
	int index = start;
	for(int i = start+1 ; i< end; i++)
	{
		if(min>arr[i])
		{
			min = arr[i];
			index = i;
		}
	}
	return index;
}
void selectionSort(int arr[],int start,int length)
{
	//for(int i=0;i<length-1;i++)
	if(start<length-1)
	{
		int indexOfMin = findMinIndexArray(arr,start,length);
		int temp = arr[indexOfMin];
		arr[indexOfMin] = arr[start];
		arr[start] = temp;
		selectionSort(arr,start+1,length);
	}
}
void inputArray(int arr[],int length)
{
    for(int i=0;i<length;i++)
    {
        cin >> arr[i];
    }
}
void outputArray(int arr[],int length)
{
    for(int i=0;i<length;i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
	int arr[100];
	int length;
	cin >> length;
	inputArray(arr,length);
	selectionSort(arr,0,length);
	outputArray(arr,length);
	return 0;
}