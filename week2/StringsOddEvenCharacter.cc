#include <iostream>
using namespace std;
void changeAscii(char arr[],int length)
{
	for(int i=0;i<length;i++)
	{
		if(arr[i]%2==0)
		{
			arr[i]--;
		}
		else
		{
			arr[i]++;
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
void outputArray(char arr[],int length)
{
    for(int i=0;i<length;i++)
    {
        cout << arr[i];
    }
    cout<<endl;
}
int main()
{
	char arr[1000]= { };
	cin.getline(arr,990);
	int len1 = length(arr);
	changeAscii(arr,len1);
	outputArray(arr,len1);
	return 0;
}