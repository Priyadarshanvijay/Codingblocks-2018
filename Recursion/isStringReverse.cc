#include <iostream>
#include <cstring>
using namespace std;
bool ans1 = true;
bool isReverse(char str1[],char str2[],int start,int len1)
{
	if(str1[start]!='\0')
	{
		if(str1[start]!=str2[len1] || !ans1)
		{
			return false;
		}
		ans1 = isReverse(str1,str2,start+1,len1-1);
	}
	return ans1;
}
int main()
{
	char str1[1000]= { };
	char str2[1000]= { };
	cin.getline(str1,990);
	cin.getline(str2,990);
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	if(len1!=len2)
	{
		cout<<"false\n";
	}
	else
	{
		bool ans = isReverse(str1,str2,0,len1-1);
		if(ans)
		{
			cout<<"true\n";
		}
		else
		{
			cout<<"false\n";
		}
	}
	return 0;
}