#include <iostream>
using namespace std;
int cnt = 0;
void printStepsOfHanoi(int nDisc,char src[],char dest[],char helper[])
{
	if(nDisc>0)
	{
		printStepsOfHanoi(nDisc-1,src,helper,dest);
		cout<<"Move "<<nDisc<<"th disc from "<<src<<" to "<<dest<<endl;
		cnt++;
		printStepsOfHanoi(nDisc-1,helper,dest,src);
	}
}
int main()
{
	int noOfDiscs;
	cin >> noOfDiscs;
	char src[3] = "T1";
	char dest[3] = "T2";
	char helper[3] = "T3";
	printStepsOfHanoi(noOfDiscs,src,dest,helper);
	cout << cnt << endl;
	return 0;
}