#include <iostream>
using namespace std;

int sum = 0;

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

TreeNode* createTree(){
  	char x[10] = { };
	int y; 
	cin>>y;
	sum+=y;
    TreeNode* root = new TreeNode(y);
    cin >> x;
    if (x[0] == 't')
    {root->left = createTree();}
	cin >> x;
    if (x[0] == 't')
    {root->right = createTree();}
    return root;
}

int main(){
    TreeNode* root = createTree();
    cout<<sum<<endl;
	return 0;
}