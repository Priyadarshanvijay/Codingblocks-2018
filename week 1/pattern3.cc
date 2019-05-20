#include <iostream>
using namespace std;
int main()
{
   int noOfLines;
   cin>>noOfLines;
   int initStars=noOfLines/2;
   int middle = (noOfLines/2)+1;
   for(int currLine=1;currLine<=middle;currLine++)
   {
   	int stars= noOfLines - ( initStars*2);
   	for(int currChar=1;currChar<=initStars;currChar++)
   	{
   	   cout<<" \t";
   	}
   	for(int currChar=1;currChar<=stars;currChar++)
   	{
   	   cout<<"*\t";
   	}
   	initStars--;
   	cout<<endl;
   }
   initStars=initStars+2;
   for(int currLine=2;currLine<=middle;currLine++)
   {
   	int stars= noOfLines - ( initStars*2);
   	for(int currChar=1;currChar<=initStars;currChar++)
   	{
   	   cout<<" \t";
   	}
   	for(int currChar=1;currChar<=stars;currChar++)
   	{
   	   cout<<"*\t";
   	}
   	initStars++;
   	cout<<endl;
   }
}
