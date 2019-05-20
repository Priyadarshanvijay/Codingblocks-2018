#include <iostream>
using namespace std;
void inputArray(int arr[][10],int column,int row)
{
    for(int i=0;i<row;i++)
    {
    	for(int j=0;j<column;j++)
    	{
    		cin >> arr[j][i];
    	}
    }
}
void outputArray(int arr[][10],int column,int row)
{
    bool startFromTop = true;
    bool startFromBottom = false;
    for(int i=0;i<column;i++)
    {
        if(startFromTop)
        {
        	for(int j=0;j<row;j++)
        	{
        		cout << arr[i][j] << ", ";
        	}
        	startFromTop = !startFromTop;
        	startFromBottom = !startFromBottom;
        }
        else if(startFromBottom)
        {
            for(int j=row-1;j>=0;j--)
        	{
        		cout << arr[i][j] << ", ";
        	}
        	startFromTop = !startFromTop;
        	startFromBottom = !startFromBottom;
        }
    }
    cout<<"END"<<endl;
}
int main()
{
	int arr[10][10]={ };
	int row;
	int column;
	cin>>row;
	cin>>column;
	inputArray(arr,column,row);
	outputArray(arr,column,row);
	return 0;
}