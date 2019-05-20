#include <iostream>
using namespace std;
void inputArray(int arr[],int length)
{
    for(int i=0;i<length;i++)
    {
        cin >> arr[i];
    }
}
int binarySearch(int arr[],int n,int search)
{
  cin>>search;
  int first = 0;
  int last = n-1;
  int middle = (first+last)/2;
  while (first <= last)
  {
    if(arr[middle] < search)
    {
      first = middle + 1;

    }
    else if(arr[middle] == search)
    {
      return middle;
    }
    else
    {
       last = middle - 1;
    }
    middle = (first + last)/2;
  }
  if(first > last)
  {
    return -1;
  }
}
int main()
{
  int  arr[1000]={ };
  int n;
  int noToFind;
  cin>>n;
  inputArray(arr,n);
  cin>>noToFind;
  int res = binarySearch(arr,n,noToFind);
  cout<<res<<endl;
  return 0;
}