#include <iostream>
using namespace std;
void clearBoard(char board[][100],int N)
{
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
		{
			board[i][j] = 'X';
		}
	}
}
void output(char board[][100],int N)
{
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
		{
			cout<<board[i][j]<<" ";
		}
		cout<<endl;
	}
}
bool canPlace(char board[][100],int r,int c,int dim)
{
	bool cond = true;
	if(cond)
	{
		for(int i=0,j=c;i<=r;i++)
		{
			if(board[i][j]=='Q')
			{
				cond = false;
				break;
			}
		}
	}
	if(cond)
	{
		for(int i=r,j=c;i>=0 && j<dim;i--,j++)
		{
			if(board[i][j]=='Q')
			{
				cond = false;
				break;
			}
		}
	}
	if(cond)
	{
		for(int i=r,j=c;i>=0 && j>=0;i--,j--)
		{
			if(board[i][j]=='Q')
			{
				cond = false;
				break;
			}
		}
	}
	return cond;
}
bool solveNQueen(char board[][100],int r,int dim)
{
	if(r==dim)
	{
		return true;
	}
	for(int col=0; col<dim ; col++)
	{
		bool check = canPlace(board, r,col,dim);
		if(check == true)
		{
			board[r][col] = 'Q';
			bool status = solveNQueen(board,r+1,dim);
			if(status)
			{
				return true;
			}
			board[r][col] = 'X'; //resetting the changes made to board
		}
	}
	return false;
}
int main()
{
	int N;
	cout << "Enter no of Queens : ";
	cin >> N;

	char board[100][100] = { };
	clearBoard(board,N);
	bool success = solveNQueen(board,0,N);
	if (success){
		output(board,N);
	}
	else
	{
		cout<<"Sorry Man!! You dont have a kingdom to handle these queens.\n";
	}
}