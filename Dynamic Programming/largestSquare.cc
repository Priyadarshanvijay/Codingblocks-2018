#include <iostream>
using namespace std;

void inputArray(int arr[][100],int row,int col)
{
	for(int i = 0; i < row ; i++)
	{
		for(int j = 0; j < col ; j++)
		{
			cin>>arr[i][j];
		}
	}
}

void outputArray(int arr[][100],int row,int col)
{
	for(int i = 0; i < row ; i++)
	{
		for(int j = 0; j < col ; j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<"\n";
	}
}

void findLargestSquare(int arr[][100], int row,int col)
{
	int dp[100][100] = { };
	for(int i = 0 ; i < row : i++)
	{
		for( j = 0 ; j < col ; j++)
		{
			if(i==0 || j ==0) dp[i][j] = arr[i][j];
		}
	}

}

int main()
{
	int arr[100][100] = { };
	int row = 0;
	int col = 0;
	cin >> row >> col;
	inputArray(arr,row,col);
	findLargestSquare(arr,row,col);
	outputArray(arr,row,col);
	return 0;
}