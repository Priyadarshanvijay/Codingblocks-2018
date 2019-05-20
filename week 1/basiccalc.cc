#include <iostream>
using namespace std;
int main()
{
	do
	{
		char ch;
		cin >> ch;
		int n1,n2;
		if(ch == '+')
		{
			cin >> n1 >>n2;
			cout<< n1+n2<<endl;
		}
		else if(ch == '-')
		{
			cin >> n1 >>n2;
			cout<< n1-n2<<endl;
		}
		else if(ch == '/')
		{
			cin >> n1>>n2;
			cout<< n1/n2<<endl;
		}
		else if(ch == '%')
		{
			cin >> n1>>n2;
			cout<< n1%n2<<endl;
		}
		else if(ch == '*')
		{
			cin >> n1 >>n2;
			cout<< n1*n2<<endl;
		}
		else if(ch == 'x')
		{
			break;
		}
		else if(ch == 'X')
		{
			break;
		}
		else
		{
			cout<<"Invalid operation. Try again."<<endl;
		}
	}while(true);
	return 0;
}
