#include <iostream>
using namespace std;
void inParenthesis(char arr[],int index,int& startIndex,int& endIndex)
{
	if(arr[index]!='\0')
	{
		if(arr[index]=='(')
			{
				startIndex = index + 1;
			}
		else if(arr[index]==')')
			{
				endIndex = index - 1;
			}
		inParenthesis(arr,index+1,startIndex,endIndex);
	}
}
void outputArrayLimits(char arr[],int startIndex,int endIndex)
{
	int i = startIndex;
	while(i<=endIndex)
	{
		cout<<arr[i];
		i++;
	}
	cout<<endl;
}
int main()
{
	int startIndex  = 0;
	int endIndex = 0;
	char str[1000] = { };
	cin.getline(str,900);
	inParenthesis(str,0,startIndex,endIndex);
	outputArrayLimits(str,startIndex,endIndex);
	return 0;
}