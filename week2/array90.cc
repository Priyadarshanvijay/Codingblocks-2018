#include <iostream>
using namespace std;
void myswap(int& a,int& b)
{
	int temp = a;
	a = b;
	b= temp;
}
void inputArray(int arr[][100],int row,int column)
{
    for(int i=0;i<row;i++)
    {
    	for(int j=0;j<column;j++)
    	{
    		cin >> arr[i][j];
    	}
    }
}
void outputArray(int arr[][100],int row,int column)
{
	cout<<endl<<"-----outputArray begins-----"<<endl<<endl;
    for(int i=0;i<row;i++)
    {
    	for(int j=0;j<column;j++)
    	{
    		cout << arr[i][j]<< " ";
    	}
    	cout << endl;
    }
    cout<<endl<<"-----outputArray ends-----"<<endl;
}
void rotate90(int arr[][100],int dim , int column)
{
	// cout << dim/2 << endl;
	column--;
	// cout << column << endl;
	for(int j = 0 ; j < dim/2 ; j++)
	{
		int iLimit = column  - (2*j);
		// cout << iLimit << endl;
		for(int i = 0; i < iLimit ; i++)
		{
			cout << "i " << i << endl;
			myswap(arr[j][i+j],arr[j+i][column-j]);
			myswap(arr[j][i+j],arr[column-i-j][j]);
			myswap(arr[column-i-j][j],arr[column-j][column-i-j]);
		}
	}
}
int main()
{
	int arr[100][100]={ };
	int row, column;
	cin>>row>>column;
	inputArray(arr,row,column);
	outputArray(arr,row,column);
	rotate90(arr,row,column);
	if(row!=column)
	outputArray(arr,column,row+1);
	else
	outputArray(arr,column,row);
	return 0;
}