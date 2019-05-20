#include <iostream>
using namespace std;
int main()
{
	int noOfLines;
	int count = 0;
	int oStart;
	cin>>noOfLines;
	for(int curLine = 0; curLine<noOfLines; curLine+=2)
	{
		for(int curDigit = 1; curDigit<=noOfLines; curDigit++)
		{
			count = (noOfLines*curLine)+curDigit;
			if(curDigit == noOfLines)
			{
				cout<<count;
			}
			else
			{
				cout<<count<<"*";
			}
		}
		cout<<endl;
	}
	if(noOfLines%2==0)
	{
		oStart = noOfLines - 1;
	}
	else
	{
		oStart = noOfLines -2;
	}
	for(int curLine = oStart; curLine>0 ; curLine-=2)
	{
		for(int curDigit = 1; curDigit<=noOfLines; curDigit++)
		{
			count = (noOfLines*curLine)+curDigit;
			if(curDigit == noOfLines)
			{
				cout<<count;
			}
			else
			{
				cout<<count<<"*";
			}
		}
		cout<<endl;
	}
}
