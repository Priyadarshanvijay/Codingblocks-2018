#include <iostream>
using namespace std;
bool isPalindrome(int arr[],int index1,int index2)
{
	if(index2>=0)
	{
		bool  ans = isPalindrome(arr,index1+1,index2-1);
		if(arr[index1]==arr[index2] && ans)
			{return true;}
		return false;
	}
	else return true;
}
void inputArray(int arr[],int n)
{
	if(n>0)
	{
		inputArray(arr,n-1);
		cin>>arr[n-1];
	}
}
int main()
{
	int arr[1000] = { };
	int n = 0;
	cin >> n;
	inputArray(arr,n);
	bool arrayIsPalindrome = isPalindrome(arr,0,n-1);
	if(arrayIsPalindrome)
	{
		cout<<"true\n";
	}
	else{
		cout<<"false\n";
	}
	return 0;
}