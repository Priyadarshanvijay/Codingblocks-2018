#include <iostream>
using namespace std;
int main(){
   int count =1;
   int noOfLines;
   cin>>noOfLines;
   for(int curLine = 1; curLine <= noOfLines; curLine++)
   {
       if(curLine%2==0)
       {
          count = 0;
       }
       else
       {
       	  count=1;
       }
       for(int curDigit = 1; curDigit<=curLine; curDigit++)
       {
           cout<<count;
           if(count==1)
           {
              count--;
           }
           else
           {
              count++;
           }
           
       }
       cout<<endl;
    }
}   
