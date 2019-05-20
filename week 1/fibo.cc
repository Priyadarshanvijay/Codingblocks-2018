#include <iostream>
using namespace std;
int main(){
	int fib1=0;
	int fib2=1;
	int i;
	int input,next;
	cout<<"Input the no.: ";
	cin>>input;
	if(input==0)
		next=fib1;
	else
		next=fib2;
	
	for(i=2;i<=input;i++)
		{
			next=fib1+fib2;
			fib1=fib2;
			fib2=next;
		}
	cout<<"The "<<input<<"th fibbonaci no. is "<<next<<"\n";
	return 0;
	}
