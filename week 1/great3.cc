#include <iostream>
using namespace std;
int main(){
	int in1,in2,in3;
	cout<<"Enter 3 no.'s: ";
	cin>>in1>>in2>>in3;
	if(in2>in1 || in3>in1)
	{
	    if(in3>in2)
	    	cout<<"Greatest is "<<in3<<"\n";
	    else
	    	cout<<"Greatest is "<<in2<<"\n";
	}
	else
		cout<<"Greatest is "<<in1<<"\n";
	return 0;
	}
