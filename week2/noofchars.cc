#include <iostream>
using namespace std;
//APPROACH 1
// int length(char arr[])
// {
// 	int i= 0;
// 	while(arr[i]!='\0')
// 	{
// 		i++;
// 	}
// 	return i;
// }
// int countChars(char arr[],int length)
// {
// 	int count = 0;
// 	for(int i=0;i<length;i++)
// 	{
// 		switch (arr[i])
// 		{
// 			case ' ':
// 			case '\n':
// 			case '\t':break;
// 			default: count++;
// 		}
// 	}
// 	return count;
// }
// void outputArray(char arr[],int length)
// {
//     for(int i=0;i<length;i++)
//     {
//         	cout << arr[i]<<" ";
//     }
//     cout<<endl;
// }
// int main()
// {
// 	char arr[100];
// 	cin.getline(arr,90,'$');
// 	int len1 = length(arr);
// 	int result = countChars(arr,len1);
// 	cout<<result<<endl;
// 	return 0;
// }
//APPROACH 2
int main()
{
	char c;
	int cnt = 0;
	while(true)
	{
		cin>>c;
		if(c=='$')
		{
			break;
		}
		++cnt;
	}
	cout<<cnt<<endl;
	return 0;
}