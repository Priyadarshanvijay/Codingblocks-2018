#include <iostream>
using namespace std;
int fibo(int n)
{
	if(n<=0) return 0;
	if(n==1) return 1;
	int first = fibo(n-1);
	int second = fibo(n-2);
	// cout<<first+second<<" ";
	return first+second;
}
int main()
{
	int a;
	cin >> a;
	for(int i = 0;i<=a;i++)
	{
		int b = fibo(i);
		cout<<b<<" ";
	}
	cout<<endl;
	return 0;
}