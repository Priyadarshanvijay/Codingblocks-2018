#include <iostream>
using namespace std;
void printInc(int n)
{
	if(n>0)
	{
		printInc(n-1);
		cout<<n<<" ";
	}
}
int main()
{
	int a;
	cin>>a;
	printInc(a);
	cout<<endl;
	return 0;
}