// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com
#include <iostream>
#include <cstring>
using namespace std;
int cnt = 0;

void printPermutations(string arr, int be){
    if (arr[be] == '\0'){
        ++cnt;
        cout <<cnt << ".\t" << arr << endl;
        return;
    }
    string s = arr;
    for(int pos = be; arr[pos] != '\0'; ++pos){
        swap(s[be], s[pos]);
        // strcpy(arr.c_str(),s.c_str());
        printPermutations(arr, be + 1);
        // swap(arr[pos], arr[be]);
    }
}

int main(){
    char arr[100];
    cin >> arr;
    
    printPermutations(arr, 0);   
}