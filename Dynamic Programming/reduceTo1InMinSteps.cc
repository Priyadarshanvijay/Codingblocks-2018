#include <iostream>
#include <algorithm>
using namespace std;
const int inf = (int)1e9; //initializing variable inf to infinity

int memo[10000];

int reduceNo(int n){
	if(n==1) return 0;

	int q1 = inf;
	int q2 = inf;
	int q3 = inf;

	if(memo[n] != -1) return memo[n]; // because it has already been computed 

	if(n%3==0) q1 = 1 + reduceNo(n/3);
	if(n%2==0) q2 = 1 + reduceNo(n/2);
	q3 = 1 + reduceNo(n-1);  

	memo[n] = min(q1,min(q2,q3)); //momoizing the ans
	return memo[n];
}

int main()
{
	int n;
	cin >> n;
	fill(memo, memo + n +1 , -1);  //fills the array with -1 , function predefined in <algorithm>
	int ans = reduceNo(n);
	cout<< ans << endl;
	return 0;
}