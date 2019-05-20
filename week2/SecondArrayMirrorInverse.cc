#include<iostream>
using namespace std;
void inputArray(int arr[],int length)
{
    for(int i=0;i<length;i++)
    {
        cin >> arr[i];
    }
}
void inverseArray(int arr[],int arr2[],int length)
{
	for(int i=0;i<length;i++)
	{
	   int x;
	   x=arr[i];
	   arr2[x]=i;
	}
}
bool isSecondMirrorInverse(int a[],int b[],int length)
{
	int c[100]={ };
	inverseArray(a,c,length);
	bool flag = true;
	for(int i=0;i<length;i++)
	{
	    if(c[i]!=b[i])
	    {
	        flag = false;
	        break;
	    }
	}
	return flag;
}
int main() {
	int a[100]={ };
	int b[100]={ };
	int n;
	cin>>n;
	inputArray(a,n);
	inputArray(b,n);
	bool answer = isSecondMirrorInverse(a,b,n);
	if(answer)
	{
		cout<<"true"<<endl;
	}
	else
	{
		cout<<"false"<<endl;
	}
}

