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
    int x; cin >> x;
    if (x == -1) return NULL;

    TreeNode* root = new TreeNode(x);
    // cout << "Enter left child of " << x << " ";
    root->left = createTree();
    // cout << "Enter right child of " << x << " ";
    root->right = createTree();
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

int replaceWithSumOfChildren(TreeNode* root)
{
	if(root==NULL)
	{
		return 0;
	}
	if(!root->right && !root->left)
	{
		return root->data;
	}
	int leftChild = replaceWithSumOfChildren(root->left);
	int rightChild = replaceWithSumOfChildren(root->right);
	int sumToReturn = (root->data) + leftChild + rightChild;
	root->data = leftChild + rightChild;
	return sumToReturn;
}

int sumOfNodes(TreeNode* root)
{
	if(!root) return 0;
	int l = sumOfNodes(root->left);
	int r = sumOfNodes(root->right);
	root->data = root->data + l + r;
	return root->data;
}

int main()
{
	TreeNode* root = createTree();
	printLevelOrderRecursively(root);
	// sumOfNodes(root);
	replaceWithSumOfChildren(root);
	printLevelOrderRecursively(root);
	return 0;
}