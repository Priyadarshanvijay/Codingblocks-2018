#include <iostream>
using namespace std;
int main(){
	int currLine,currDigit,input;
	cin>>input;
	for(currLine=1;currLine<=input;currLine++)
	{
		for(currDigit=1;currDigit<=currLine;currDigit++)
		{
			if(currDigit==1 || currDigit==currLine)
			{
				cout<<currLine<<"\t";
			}
			else
			{
				cout<<0<<"\t";
			}
		}
		cout<<"\n";
	}
	return 0;
}
