#include <iostream>
using namespace std;
int length(char arr[])
{
	int i= 0;
	while(arr[i]!='\0')
	{
		i++;
	}
	return i;
}
int main()
{
	char arr[1000]={ };
	cin.getline(arr,990);
	char maxChar = arr[0];
	int length1 = length(arr);
	int max = 0;
	for(int i = 0; i< length1; i++)
	{
		int count = 0;
		for(int j = 1;j<length1;j++)
		{
			if(arr[i]==arr[j])
			{
				count++;
			}
		}
		if(count>max)
		{
			max = count;
			maxChar = arr[i];
		}
	}
	cout<<maxChar<<endl;
}