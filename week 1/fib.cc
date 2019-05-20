#include<iostream>
using namespace std;
int logn(int input1,int input2);
int main() {
    int x;
    int n;
    cin >> x >> n;
    int res = logn(x,n);
	cout << res << endl;
	return 0;
}
int logn(int input1, int input2)
{
    int count = 0;
    int power = 1;
    while(power!=input1)
    {
		count++;
        power = 1;
        for(int i = 1; i<=count ; i++)
        {
            power = power * input2;
        }
        
		
    }
    return count;
}