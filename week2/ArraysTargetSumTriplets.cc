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
int main()
{
	int arr[1000];
	int length;
	cin >> length;
	inputArray(arr,length);
	insertionSort(arr,length);
	int target;
	cin >> target;
	for(int i=0;i<length;i++)
	{
		int num1 = arr[i];
		for(int j = i+1;j<length;j++)
		{
			int num2 = arr[j];
			for(int k=j+1;k<length;k++)
			{
				int num3 = arr[k];
				if((num1+num2+num3) == target)
				{
					cout<<num1<<", "<<num2<<" and "<<num3<<endl;
				}
			}
		}
	}
	return 0;
}
