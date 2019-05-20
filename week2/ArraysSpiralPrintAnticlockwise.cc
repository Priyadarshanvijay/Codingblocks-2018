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
void spiralOutputArray(int arr[][10],int column,int row)
{
    bool startFromTop = true;
    bool startFromBottom = false;
    bool startFromLeft = false;
    bool startFromRight = false;
    int totalElements = row*column;
    int rowCounter = row;
    int columnCounter = column - 1;
    int i = 0;
    int j = 0;
    int sum = 0;
    while(sum!= totalElements)
    {
        if(startFromTop)
        {
             for(int k = 0; k< rowCounter ; k++)
            {
                //cout<<"hi2\n";
                cout<<arr[i][j]<<", ";
                j++;
            }
            i++;
            j--;
            sum = sum + rowCounter;
            rowCounter--;
            startFromTop = !startFromTop;
            startFromRight = !startFromRight;
        }
        else if(startFromRight)
        {
            for(int k = 0; k< columnCounter ; k++)
            {
                cout<<arr[i][j]<<", ";
                i++;
            }
            i--;
            j--;
            sum = sum + columnCounter;
            columnCounter--;
            startFromRight = !startFromRight;
            startFromBottom = !startFromBottom;
        }
        else if(startFromBottom)
        {
             for(int k = 0; k< rowCounter ; k++)
            {
                //cout<<"hi2\n";
                cout<<arr[i][j]<<", ";
                j--;
            }
            i--;
            j++;
            sum = sum + rowCounter;
            rowCounter--;
            startFromBottom = !startFromBottom;
            startFromLeft = !startFromLeft;
        }
        else if(startFromLeft)
        {
            for(int k = 0; k< columnCounter ; k++)
            {
                cout<<arr[i][j]<<", ";
                i--;
            }
            i++;
            j++;
            sum = sum + columnCounter;
            columnCounter--;
            startFromLeft = !startFromLeft;
            startFromTop = !startFromTop;
        }
    }
    cout<<"END\n";
}
int main()
{
	int arr[10][10]={ };
	int row;
	int column;
	cin>>row;
	cin>>column;
	inputArray(arr,column,row);
	spiralOutputArray(arr,column,row);
	return 0;
}