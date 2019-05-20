#include <iostream>
#include <algorithm>
using namespace std;

void inputArray(int arr[], int n){
	for(int i = 0; i<n; i++){
		cin >> arr[i];
	}
}

void printHistogram(int* arr,int n)
{
	 int curHeight = *max_element(arr,arr+n);
	 while(curHeight>0)
	 {
	 	cout<<curHeight<<"\t";
	 	for(int i = 0; i< n; i++)
	 	{
	 		if(arr[i]>=curHeight)
	 		cout<<"*";
	 		else
	 			cout<<" ";
	 	}
	 	cout<<endl;
	 	curHeight--;
	 }
	 cout<<endl;
}

int volOfWater(int arr[],int n)
{
	if(n<=1) return 0;
	int endIndex = n-1;
	int startIndex = 0;
	int endIndexMax = arr[n-1];
	int startIndexMax = arr[0];
	int curVol = 0;
	while(startIndex!=endIndex)
	{
		if(arr[startIndex]>arr[endIndex])
		{
			if(arr[endIndex]>endIndexMax)
			{
				endIndexMax = arr[endIndex];
			}
			curVol = curVol + endIndexMax - arr[endIndex];
			endIndex--;
		}
		else
		{
			if(arr[startIndex]>startIndexMax)
			{
				startIndexMax = arr[startIndex];
			}
			curVol = curVol + startIndexMax - arr[startIndex];
			startIndex++;
		}
	}
	return curVol;
}

int main()
{
	int arr[100];
	int n;
	cin >> n;
	inputArray(arr,n);
	int ans = volOfWater(arr,n);
	cout<<"Vol of water b/w the bars is : "<<ans<<endl;
	printHistogram(arr,n);
	return 0;
}