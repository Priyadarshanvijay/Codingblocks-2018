#include <iostream>
using namespace std;
void printStepsOfHanoi(int nDisc,char src,char dest,char helper)
{
	if(nDisc>0)
	{
		printStepsOfHanoi(nDisc-1,src,helper,dest);
		cout<<"Moving ring "<<nDisc<<" from "<<src<<" to "<<dest<<endl;
		printStepsOfHanoi(nDisc-1,helper,dest,src);
	}
}
int main()
{
	int noOfDiscs;
	cin >> noOfDiscs;
	printStepsOfHanoi(noOfDiscs,'A','B','C');
	return 0;
}