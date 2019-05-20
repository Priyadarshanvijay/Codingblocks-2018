#include <iostream>
using namespace std;
void insertionSort(int arr[],int n)
{
	for(int i=1;i<n;i++)
	{
		int j=i-1;
		int temp = arr[i];
		while(j>=0 && temp<arr[j])
		{
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = temp;
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
    int i = 0;
	cout<<"[";
    for( i=0;i<length-1;i++)
    {
        cout << arr[i] << ", ";
    }
    cout<<arr[i]<<"]" << endl;
}
int intersectArrays(int arr[],int arr2[],int arr3[],int length)
{
	insertionSort(arr,length);
	insertionSort(arr2,length);
	int i = 0;
	int j = 0;
	int k = 0;
    while(j<length && i<length && k<length)
		{
			if(arr[i] == arr2[j])
			{
				arr3[k] = arr[i];
				k++;
				j++;
				i++;
				
			}
			else if(arr[i]>arr2[j])
			{
			    j++;
			}
		    else
				i++;
				 // break;
			
		}
	return k;
}
int main()
{
	int arr[1000]={ };
	int arr2[1000]={ };
	int arr3[1000]={ };
	int length;
	cin >> length;
	inputArray(arr,length);
	inputArray(arr2,length);
	int len1 = intersectArrays(arr,arr2,arr3,length);
	//cout<<"len 1: "<<len1<<endl;
	outputArray(arr3,len1);
	return 0;
}