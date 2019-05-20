#include <iostream>
using namespace std;

void reverseLLIterativePointer(int& a,int& b)
{
	int* ptra = &a;
	int* ptrb = &b;
	int* temp = ptra;
	ptra = ptrb;
	ptrb = temp;
}

int main()
{
	int a = 23;
	int b = 67;
	reverseLLIterativePointer(a,b);
	cout<<&a<<"\t"<<&b<<endl;
	cout<<a<<"\t"<<b<<endl;
	cout<<&a<<"\t"<<&b<<endl;
	return 0;
}