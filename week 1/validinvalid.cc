#include <iostream>
using namespace std;
int main()
{
	bool isIncreasing = false;
	bool isDecreasing = true;
	int i;
	int n;
	cin >> n;
	int oldInput = 1000000000;
	for(i = 1; i<= n; i++)
	{
		int newInput;
		
		if(isDecreasing)
		{
			cin >> newInput;
			if(newInput<oldInput)
			{
				oldInput = newInput;
			}
			else
			{
				oldInput = newInput;
				isDecreasing = !isDecreasing;
				isIncreasing = !isIncreasing;
			}
		}
		else
		{
			if(isIncreasing)
			{
				cin >> newInput;
				if(newInput>oldInput)
				{
					oldInput= newInput;
				}
				else
				{
					break;
				}
			}
		}
	}
	if(i<n)
	{
		cout<<"false"<<endl;
	}
	else
	{
		cout<<"true"<<endl;
	}
}
