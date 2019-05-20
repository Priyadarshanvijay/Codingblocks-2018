#include <iostream>
using namespace std;
void inputArray(char arr[][10],int column,int row)
{
    for(int i=0;i<row;i++)
    {
    	for(int j=0;j<column;j++)
    	{
    		cin >> arr[j][i];
    	}
    }
}
void spiralOutputArray(char arr[][10],int column,int row)
{
    bool startFromTop = false;
    bool startFromBottom = false;
    bool startFromLeft = false;
    bool startFromRight = true;
    int totalElements = row*column;
    int rowCounter = row-1;
    int columnCounter = column;
    int complexity = 0;
    int i = 0;
    int j = 0;
    int sum = 0;
    while(sum!= totalElements)
    {
        if(startFromRight)
        {
            for(int k = 0; k< columnCounter ; k++)
            {
                cout<<arr[i][j]<<", ";
                i++;
                complexity++;
            }
            i--;
            j++;
            sum = sum + columnCounter;
            columnCounter--;
            startFromRight = !startFromRight;
            startFromTop = !startFromTop;
        }
        else if(startFromTop)
        {
             for(int k = 0; k< rowCounter ; k++)
            {
                //cout<<"hi2\n";
                cout<<arr[i][j]<<", ";
                j++;
                complexity++;
            }
            i--;
            j--;
            sum = sum + rowCounter;
            rowCounter--;
            startFromTop = !startFromTop;
            startFromLeft = !startFromLeft;
        }
        else if(startFromLeft)
        {
            for(int k = 0; k< columnCounter ; k++)
            {
                cout<<arr[i][j]<<", ";
                i--;
                complexity++;
            }
            i++;
            j--;
            sum = sum + columnCounter;
            columnCounter--;
            startFromLeft = !startFromLeft;
            startFromBottom = !startFromBottom;
        }
        else if(startFromBottom)
        {
             for(int k = 0; k< rowCounter ; k++)
            {
                //cout<<"hi2\n";
                cout<<arr[i][j]<<", ";
                j--;
                complexity++;
            }
            i++;
            j++;
            sum = sum + rowCounter;
            rowCounter--;
            startFromBottom = !startFromBottom;
            startFromRight = !startFromRight;
        }
        complexity++;
    }
    cout<<"END\n";
    cout<<complexity<<endl;
}
int main()
{
	char arr[10][10]={ };
	int row;
	int column;
	cin>>row;
	cin>>column;
	inputArray(arr,column,row);
	spiralOutputArray(arr,column,row);
	return 0;
}