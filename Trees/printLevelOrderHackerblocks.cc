#include <iostream>
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

TreeNode* createTree(){
	char x[10] = { };
	int y; 
	cin>>y;
    TreeNode* root = new TreeNode(y);
    cin >> x;
    if (x[0] == 't')
    {root->left = createTree();}
	cin >> x;
    if (x[0] == 't')
    {root->right = createTree();}
    return root;
}

int countHeight(TreeNode* root)
{
    if(root==NULL) return 0;
    int hLeft = countHeight(root->left);
    int hRight = countHeight(root->right);
    return max(hLeft,hRight)+1;
}

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

int main()
{
	TreeNode* root = createTree();
	printLevelOrderRecursively(root);
	return 0;
}