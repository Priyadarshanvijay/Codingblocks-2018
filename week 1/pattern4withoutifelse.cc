#include <iostream>
using namespace std;
int main(){
   int count =1;
   int noOfLines;
   cin>>noOfLines;
   for(int curLine = 1; curLine <= noOfLines; curLine++)
   {
       count = curLine % 2;
       for(int curDigit = 1; curDigit<=curLine; curDigit++)
       {
           cout<<count;
           count  = 1 - count;   //or we can write count = !count;
           
       }
       cout<<endl;
    }
}   
