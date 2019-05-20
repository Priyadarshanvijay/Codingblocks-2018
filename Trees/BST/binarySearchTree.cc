#include <bits/stdc++.h>
using namespace std;

class TreeNode{
public:
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int d){
        data = d;
        left = NULL;
        right = NULL;
    }
};

//Builds A BST
TreeNode* insertInBST(TreeNode* root, int data)
{
	//base case
	if(root==NULL)
	{
		root = new TreeNode(data);
		return root;
	}
	//rec case
	if(data <= root->data)
		root->left = insertInBST(root->left,data);
	else
		root->right = insertInBST(root->right,data);
	return root;
}

void takeInput(TreeNode*& root)
{
	int data;
	cin>>data;
	while(data != -1)
	{
		root = insertInBST(root,data);
		cin>>data;
	}
}

int countHeight(TreeNode* root)
{
    if(root==NULL) return 0;
    int hLeft = countHeight(root->left);
    int hRight = countHeight(root->right);
    return max(hLeft,hRight)+1;
}

//Print A Specific Level Of Tree
void printLevel(TreeNode* root,int level)
{
	if(root==NULL)
	{
		return;
	}
	if(level==0)
	{
		cout<<root->data<<" ";
		return;
	}
	printLevel(root->left,level-1);
	printLevel(root->right,level-1);
}

//Print the tree level by level
void printLevelOrderRecursively(TreeNode* root)
{
	int minLevel = 0;
	int maxLevel = countHeight(root);
	for(int i = minLevel; i<maxLevel ; i++)
	{
		printLevel(root,i);
		cout<<endl;
	}
}

bool search(TreeNode* root,int data)
{
	if(!root) return false;
	if(root->data==data) return true;
	if(root->data < data) return search(root->right, data);
	search(root->left, data);
}

ostream& operator<<(ostream&os, TreeNode* root){
	printLevelOrderRecursively(root);
	return os;
}

istream& operator>>(istream&is,TreeNode*& root){
	takeInput(root);
	return is;
}

int main()
{
	TreeNode* root = NULL;
	cin>>root;
	cout<<root;
	int no = 0;
	cout<<"Enter No. To Search : ";
	cin>>no;
	if(search(root,no)) cout<<"FOUND "<<no<<"!\n";
	else cout<<"NOT FOUND "<<no<<endl;

	return 0;
}

//5 3 4 2 1 8 9 7 -1