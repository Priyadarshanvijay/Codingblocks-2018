#include <iostream>
using namespace std;
void printDec(int n)
{
	if(n>0)
		{
			cout<<n<<" ";
			printDec(n-1);
		}
}
int main()
{
	int a;
	cin>>a;
	printDec(a);
	cout<<endl;
	return 0;
}