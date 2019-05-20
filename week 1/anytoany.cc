#include <iostream>
using namespace std;
int convertToDec(int sb,int input)
{
    int res =0;
    int n = 0;
    while(input>0)
    {
        
        int lastDigit = input % 10;
        input = input/10;
        int res1=1;
        int power = n;
        while(power>0)
        {
            res1 = res1*sb;
            power--;
        }
        res = res + (lastDigit*(res1));
        n++;
    }
    return res;
}
int convert(int sb,int db,int sn)
{
    int res;
	if(db==10)
	{
		res = convertToDec(sb,sn);
		return res;
	}
	else
	{
	    int decimal = convertToDec(sb,sn);
	    int sum = 0;
    	int count = 0;
    	while(decimal>0)
    	{
		    int mul = 1;
		    int lastDigit = decimal%db;
		    decimal = decimal/db;
		    for(int i=1;i<=count;i++)
		    {
		        mul = mul*10;
		    }
		    count++;
		    sum = sum + mul*lastDigit;
		}
		return sum;
    }
}
int main()
{
	int sb;
	int db;
	int sn;
	cin>>sb>>db>>sn;
	int res = convert(sb,db,sn);
	cout<<res<<endl;
}
