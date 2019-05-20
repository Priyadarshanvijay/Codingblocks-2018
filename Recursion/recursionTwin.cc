#include <iostream>
using namespace std;
int noOfTwins(char arr[],int index)
{
	if(arr[index+2]=='\0') return 0;
	int ans = noOfTwins(arr,index+1);
	if(arr[index]==arr[index+2])
	{
		ans = ans+1;
	}
	return ans;
}
int main()
{
	char str[1000];
	cin>>str;
	int ans = noOfTwins(str,0);
	cout<<ans<<endl;
	return 0;
}