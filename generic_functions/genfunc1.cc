#include <iostream>
using namespace std;


template<typename T, typename Y>
void bubbleSort(T arr[], int n, Y compare){
    for(int i = 0; i < n - 1; ++i){
        for(int cur = 0; cur < n - i - 1; ++cur){
            if (compare(arr[cur], arr[cur+1])){
                // it returns true if arr[i] > arr[i + 1]
                swap(arr[cur], arr[cur + 1]);
            }
        }
    }
}



class Elephant{
public:
    int wt;
    char name[20];
};

bool compareMyElepnant(ElephanmyPrintt A, Elephant B){
    return A.wt > B.wt;
}

template<typename T>
bool compareInt(T x, T y){
    return x > y;
}

void printMyElephant(Elephant A)
{
    cout<<"Name of Elephant : "<< A.name <<endl;
    cout<<"Weight of Elephant : "<<A.wt<<endl;
}

template<typename T>
void printInt(T a)
{
    cout<<a;
}

template<typename T, typename Y>
void print(T arr[], int n, Y myPrint){
    for(int i = 0; i < n; ++i){
         myPrint(arr[i]);
    }
    cout << endl;
}

int main() {
    int arr_int[] = {3,2,1};
    char arr_char[] = {'a','b','c'};

    bubbleSort(arr_char, 3, compareInt<char>);
    print<char>(arr_char, 3, printInt<char>);
    cout << endl;

    bubbleSort(arr_int, 3, compareInt<int>);
    print(arr_int, 3, printInt<int>);
    cout << endl;

    Elephant E[] = {
        {1600, "Hachi"},
        {1500, "Rocky"},
        {1000, "Jumbo"}
    };
    
    bubbleSort(E, 3, compareMyElepnant);
    print(E, 3, printMyElephant);

}