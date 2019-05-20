#include <iostream>
using namespace std;
int main()
{
	cout<<"Enter the vale of n & r : ";
	int n;
	int r;
	cin>>n>>r;
	int r1 = n-r;
	int fact1 =1;
	while(n>0)
	{
		fact1 = fact1 * n;
		n--;
	}
	int fact2 =1;
	while(r>0)
	{
		fact2 = fact2 * r;
		r--;
	}
	int fact3 = 1;
	while(r1>0)
	{
		fact3 = fact3 * r1;
		r1--;
	}
	double result = (double)(fact1)/(fact2*fact3);
	cout << "The result is: "<<result<<"\n";
}
