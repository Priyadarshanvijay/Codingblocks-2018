#include <iostream>
#include<cstring>
using namespace std;

int res2 = 0;

int countAAA1(char inp[],int i,int len)
{
	if(i == len-2 || len<3)
		return 0;
	int res = countAAA1(inp,i+1,len);
	if(inp[i] == 'a' && inp[i+1] == 'a' && inp[i+2] == 'a')
	{
		return res + 1;
	}
	return res;
}

void countAAA2(char inp[],int i,int len)
{
	if(i >= len-2 || len<3)
		return ;
	if(inp[i] == 'a' && inp[i+1] == 'a' && inp[i+2] == 'a')
	{
		res2++;
		countAAA2(inp,i+3,len);
	}
	else
	{
		countAAA2(inp,i+1,len);
	}
}

int main()
{
	char inp[100];
	cin >> inp;
	int len = strlen(inp);
	int res1 = countAAA1(inp,0,len);
	countAAA2(inp,0,len);
	cout<<res1<<endl;
	cout<<res2<<endl;
	return 0;
}