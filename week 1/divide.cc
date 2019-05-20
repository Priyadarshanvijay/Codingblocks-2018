#include <iostream>
using namespace std;
int main(){
	int x;
	double y,z;
	cin >> x;	  //input numbers from user: x,y
	cin >> y;
	if(y==0)
	{
	   cout << "0 divisor error\n";
	}
	else
	{
	z = x/y;
	cout<< "Quotient is : ";
	cout << z;      //print Quotient
	cout << "\n";
	}
	
	return 0;
	}
