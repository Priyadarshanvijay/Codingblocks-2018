#include <iostream>
#include <stack>
using namespace std;

void inputArray(int arr[], int n){
	for(int i = 0; i<n; i++){
		cin >> arr[i];
	}
}

void outputArray(int arr[], int n){
	for(int i = 0 ; i<n ;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int* stockSpan(int arr[], int n){
	int* ans = new int[n];
	typedef  int index;
	stack<index> s;

	for(int i = 0; i< n; i++){
		int curPrice = arr[i];
		while(!s.empty() && arr[s.top()] < curPrice){ s.pop(); }
		ans[i] = s.empty() ? 0 : i - s.top();
		s.push(i);
	}
	return ans;
}

int main()
{
	int arr[100];
	int n;
	cin>>n;
	inputArray(arr,n);
	int* ans = stockSpan(arr,n);
	outputArray(ans,n);
	return 0;
}