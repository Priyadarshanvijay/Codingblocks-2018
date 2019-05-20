#include <iostream>
using namespace std;
int differenceASCII(char arr[],int index)
{
	return arr[index+1]-arr[index];
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
void outputArray(char arr[],int length)
{
    for(int i=0;i<length-1;i++)
    {
        	cout << arr[i]<<differenceASCII(arr,i);
    }
    cout<<arr[length-1];
    cout<<endl;
}
int main()
{
	char arr[1000]= { };
	cin.getline(arr,990);
	int len1 = length(arr);
	outputArray(arr,len1);
	return 0;
}