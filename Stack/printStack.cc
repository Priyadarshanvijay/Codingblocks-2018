#include <iostream>
#include <stack>
using namespace std;

template <typename T>
void print(stack<T> s)
{
	int len = s.size();
	while(len)
	{
		cout<<s.top()<<endl;
		s.pop();
		len--;
	}
}

int main()
{
	stack<int> s;
	stack<char> s1;

	int x;
	while(true)
	{
		cin >> x;
		if( x== -1 )
			break;
		s.push(x);
	}
	print<int>(s);
	char y;
	while(true)
	{
		cin >> y;
		if( y== 'z' )
			break;
		s1.push(y);
	}
	print<char>(s1);
	return 0;
}