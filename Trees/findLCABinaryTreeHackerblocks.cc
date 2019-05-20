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

bool found(TreeNode* root,int element){
	if(!root) return false;
	if(root->data == element) return true;
	bool foundInLeft = found(root->left,element);
	bool foundInRight = found(root->right,element);
	if(foundInLeft || foundInRight) return true;
	return false;
}

void findLowestCommonAncestor(TreeNode* root,int element1,int element2,TreeNode*& LCA)
{
	if(!root) return;
	bool foundElement1 = found(root,element1);   /*found(root->left,element1) || found(root->right,element1) ||*/ 
	bool foundElement2 = found(root,element2);   /*found(root->left,element2) || found(root->right,element2) || */ 
	if(foundElement1 && foundElement2) LCA = root;
	findLowestCommonAncestor(root->left,element1,element2,LCA);
	findLowestCommonAncestor(root->right,element1,element2,LCA);
}

//inOrder Printing would give sorted output
void printTreeInOrder(TreeNode* root)
{
    if(!root) return;
    printTreeInOrder(root->left);
    cout<<root->data<<" ";
    printTreeInOrder(root->right);
}


int main(){
    TreeNode* root = createTree();
	int element1 = 0;
	int element2 = 0;
	cin>>element1>>element2;
	TreeNode* LCA = NULL;
	findLowestCommonAncestor(root,element1,element2,LCA);
	if(LCA)
	cout<<LCA->data<<endl;
	return 0;
}