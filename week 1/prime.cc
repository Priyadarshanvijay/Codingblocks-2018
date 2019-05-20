#include <iostream>
using namespace std;
int main(){
	int i=0,in,flag=1;
	cout<<"Enter no.: ";
	cin>>in;
	for(i=2;i<in;i++)
	{
		if(in%i==0)
		{
			flag=0;
			break;
		}
		/*else
			flag=1;*/
	}
	if(flag==0)
		cout<<in<<" is non prime\n";
	else
		cout<<in<<" is Prime\n";
	return 0;
}
