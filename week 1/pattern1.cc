#include <iostream>
using namespace std;
int main(){
	int currLine,currDigit,count=1,n;
	cin>>n;
	for(currLine=1;currLine<=n;currLine++)
	{
		for(currDigit=0;currDigit<currLine;currDigit++)
		{
			cout<<count<<"\t";
			count++;
		}
		cout<<"\n";
	}
	return 0;
}
