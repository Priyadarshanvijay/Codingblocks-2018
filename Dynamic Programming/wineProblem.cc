//A Problem of 2-D DP
#include <iostream>
#include <cstring>
using namespace std;

int memo[100][100];

int maxProfit(int arr[],int be,int en,int year){
	if(be>en){
		return 0;
	}

	if(memo[be][en] != -1) return memo[be][en];

	int q1 = arr[be] * year + maxProfit(arr,be+1,en,year+1); // sell from beginning
	int q2 = arr[en] * year + maxProfit(arr,be,en-1,year+1); // sell from ending
	memo[be][en] = max(q1,q2);
	return memo[be][en];
}

int maxProfitDP(int arr[], int n){
	int dp[100][100] = {};
	int year =n;

	for(int i = 0; i< n; ++i){
		dp[i][i] = year * arr[i];
	}
	--year;
	for(int len = 2; len <= n; ++len){
		int srt = 0;
		int end = n - len;
		while(srt<=end ){
			int endWindow = srt + len -1;
			dp[srt][endWindow] = max(
				arr[srt]*year + dp[srt+1][endWindow],
				arr[endWindow]*year + dp[srt][endWindow-1]
				);
			++srt;
		}
		--year;
	}
	/*for(int i = 0; i<n;i++)
	{
		for(int j = 0 ; j< n ; j++)
		{
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}*/

	return dp[0][n-1];
}

int main()
{
	int arr[100];
	int n;    //no of bottles
	cin >> n;
	for(int i= 0 ; i< n; i++){
		cin >> arr[i]; // prices of bottles
	}
	cout<< maxProfitDP(arr,n) << endl;
	memset(memo,-1,sizeof(memo));
	int ans = maxProfit(arr,0,n-1,1) ;
	cout<< ans<<endl;
	return 0;
}