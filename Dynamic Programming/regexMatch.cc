#include <iostream>
#include <cstring>
using namespace std;

bool regexMatch(char* str, char* pattern)
{
	int lenStr = strlen(str);
	int lenPattern = strlen(pattern);
	bool dp[110][110];

	for(int i = 0 ; i <= lenPattern ; i++)
	{
		for(int j = 0 ; j <= lenStr ; j++)
		{
			if(i==0 and j==0) { dp[i][j] = true;}
			else if ( i == 0)
			{
				//
			}
		}
	}
}

int main()
{
	char str[100],pattern[100];
	cin >> str >> pattern;
	if(regexMatch(str,pattern))
	{
		cout<<"Pattern matches!\n";
		return 0;
	}
	cout<<"Pattern doesn't matches!\n";
	return 0;
}