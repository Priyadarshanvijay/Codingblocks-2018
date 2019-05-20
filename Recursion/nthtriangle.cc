#include <iostream>
using namespace std;
int triangle(int n)
{
	if(n<=0) return 0;
	int sum = 0;
	sum = n+triangle(n-1);
	return sum;
}
int main()
{
	int n;
	cin >> n;
	int ans = triangle(n);
	cout<<ans<<endl;
	return 0;
}