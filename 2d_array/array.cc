#include <iostream>
using namespace std;
int main(){
    int mat[3][4];

    for(int r = 0; r < 3; ++r){
        for(int c = 0; c < 4; ++c){
            cout << "enter element " << r << " " << c << ": ";
            cin >> mat[r][c];
        }
    }
    for(int r = 0; r<3; r++)
    {
    	for(int c = 0; c < 4 ; c++)
    	{
    		cout<<mat[r][c]<<"\t";
    	}
    	cout<<endl;
    }
    return 0;   
}