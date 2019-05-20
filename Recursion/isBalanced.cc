#include <iostream>
using namespace std;
bool isBalanced(char arr[],int index,int count[])
{
	if(arr[index]!='\0')
	{
		if(arr[index]=='{')
			count[0]++;
		else if(arr[index]=='(')
			count[1]++;
		else if(arr[index]=='[')
			count[2]++;
		else if(arr[index]=='}')
			count[0]--;
		else if(arr[index]==')')
			count[1]--;
		else if(arr[index]==']')
			count[2]--;
		isBalanced(arr,index+1,count);
	}
	if(count[0]==0 && count[1]==0 && count [2]==0)
		return true;
	else 
		return false;

}
int main()
{
	int count[3]  = {0,0,0};
	char str[1000] = { };
	cin.getline(str,900);
	bool ans = isBalanced(str,0,count);
	if(ans)
		cout<<"true"<<endl;
	else
		cout<<"false"<<endl;
}