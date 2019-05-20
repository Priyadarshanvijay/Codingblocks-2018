#include <iostream>
using namespace std;
int main()
{
	int a[5];
	int sum =0;
	for(int i=0;i<5;i++)
	{
		cin >> a[i];
	}
	
	for(int i=0;i<5;i++)
	{
		cout << a[i]<<"\t";
	}
	cout<<endl;
	for(int i=0;i<5;i++)
	{
		sum = sum + a[i];
	}
	cout<<"The sum is : "<<sum << endl;
	for(int i=0;i<5;i++)
	{
		a[i]=a[i]+3;
	}
	for(int i=0;i<5;i++)
	{
		cout << a[i]<<"\t";
	}
	cout<<endl;
	return 0;
}
