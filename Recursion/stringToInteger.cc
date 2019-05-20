#include <iostream>
using namespace std;
int sum = 0;
int stringToInt(char arr[],int element)
{
	if(arr[element]!='\0')
	{
		int a = arr[element] - 48;
		sum = sum*10 + a;
		stringToInt(arr,element+1);
		
	}
	return sum;
}
int main()
{
	char arr[10000]= { };
	cin >> arr;
	int res = stringToInt(arr,0);
	cout<<res<<"\n";
}