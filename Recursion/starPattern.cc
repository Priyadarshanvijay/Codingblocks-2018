#include <iostream>
using namespace std;
void printPattern(int n,int r,int c)
{
	//if row goes out of bounds
	if(r>n) return;
	//if the no of stars = no of row
	if(c>=r)
	{
		cout<<endl;
		printPattern(n,r+1,0);
		return;
	}
	cout<<"*\t";
	printPattern(n,r,c+1);

}
int main()
{
	int n;
	cin>>n;
	printPattern(n,1,0);
	cout<<endl;
	return 0;
}