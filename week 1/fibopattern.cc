#include <iostream>
using namespace std;
int main()
{
    int noOfLines;
    cin>>noOfLines;
    int fib1=1;
    int fib2=1;
    int current=2;
    if(noOfLines>=1)
    {
       cout<<0<<endl;
    }
    if(noOfLines>=2)
    {
       cout<<0<<"\t"<<1<<endl;
    }
    for(int currentLine=3;currentLine<=noOfLines;currentLine++)
    {
        for(int currentDigit=1;currentDigit<=currentLine;currentDigit++)
        {
           
           current=fib1+fib2;
           fib1=fib2;
           fib2=current;
           cout<<current<<"\t";
        }
        cout<<endl;
     }
     return 0;
}
