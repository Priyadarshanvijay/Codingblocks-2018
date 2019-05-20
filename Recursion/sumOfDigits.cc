#include <iostream>
using namespace std;
int sum = 0;
int sumOfDigits(char arr[],int element)
{	
	if(arr[element]=='\0') return 0;
	int ans = sumOfDigits(arr,element+1);
	return ans + arr[element] - 48;
}
int main()
{
	char str[1000];
	cin>>str;
	int ans = sumOfDigits(str,0);
	cout<<ans<<endl;
	return 0;
}