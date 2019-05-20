#include <iostream>
#include <cstring>
using namespace std;
void outputArr(char arr[], int n){
    for(int i = 0; i < n; ++i){
        cout << arr[i] ;
    }
    cout<<" ";
}
int cnt;
void printSubset(char arr[], int n, int be, char subans[], int i){
    if (be == n){
        ++cnt;
        outputArr(subans, i);
        return;
    }

    subans[i] = arr[be];
        printSubset(arr, n, be + 1, subans, i + 1);
    printSubset(arr, n, be + 1, subans, i);

    
}


int main(){
    char str[10000];
    cin>>str;   
    int n = strlen(str);
    char subans[10000];
    printSubset(str, n, 0, subans, 0);
}