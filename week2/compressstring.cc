#include <iostream>
using namespace std;
void removeDuplicates(char arr[],int count1[],int& length)
{
	int i = 0;
	int k =0;
	for(i = 0 ; i < length ; i++)
	{
		char curChar  = arr[i];
		int j = i + 1;
		int count = 0;
		while( curChar == arr[j])
		{
			count++;
			j++;
		}
		if( count > 0 )
		{
			count1[k++]=count+1;
			while(j<length)
			{
				arr[ j - count ] = arr[j];
				j++;
			}
			arr[ j - count ] = '\0';
			length = length - count ;
		}
	}
}
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
	char arr[1100]={ };
	int count[1000]={ };
	cin.getline(arr,1000);
	int j = length(arr);
	removeDuplicates(arr,count,j);
	int i = 0;
	while(arr[i]!='\0')
	{
		if(count[i]>1)
		{
			cout<<arr[i]<<count[i];
		}
		else
		{
			cout<<arr[i];
		}
		i++;
	}
	cout<<endl;
	return 0;
}