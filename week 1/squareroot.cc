#include <iostream>
using namespace std;
int sqrt1(int input)
{	int res = 0;
	for(int i=1;i<=input;i++)
	{
		if((i*i) > input)
		{
			res =i-1;
			break;
		}
	}
	return res;
}
int main()
{
	int input;
	cin >> input;
	int result = sqrt1(input);
	cout<<result<<endl;
	return 0;
}
