//https://gist.github.com/Priyadarshanvijay/4c98a7515a3625cb14b1885056c10482
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

class Pair{
public:
	int cnt;
	bool isSameValSubTree;
	Pair(int c,bool ans){
		cnt = c;
		isSameValSubTree = ans;
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

/*int isSubTree(TreeNode* root)
{
	if(root==NULL) return 1;
	if(root->left && root->right && root->data == root->left->data && root->data == root->right->data)
	{
		return 1;
	}
	return 0;
}
*/
/*bool isSameValSubTree(TreeNode* root)
{
	if(root == NULL ){ return true;}

	bool isRoot = (root->left ? root->data == root->left->data : true) &&
				  (root->right ? root->data == root->right->data : true);

	return isRoot && isSameValSubTree(root->left) && isSameValSubTree(root->right);
}
*/
/*int noOfSubtrees(TreeNode* root)
{
	if(root==NULL) return 0;
	if(root->left == NULL && root->right==NULL) return 1;
	int lSubTree = noOfSubtrees(root->left);
	int rSubTree = noOfSubtrees(root->right);
	//int selfTree = isSubTree(root);
	bool isRootSameValSubtree  = isSameValSubTree(root);//  computatiponally Expensive
	return lSubTree+rSubTree+(isRootSameValSubtree ? 1 : 0)//selfTree;
}*/

/*Pair noOfSubtrees(TreeNode* root){
	if(root==NULL){
		return Pair(0, true);
	}

	Pair x = noOfSubtrees(root->left);
	Pair y = noOfSubtrees(root->right);

	Pair curAns(0, true);
	curAns.isSameValSubTree = (root->left ? root->data == root->left->data : true) &&
							  (root->right ? root->data == root->right->data : true) &&
							  x.isSameValSubTree &&
							  y.isSameValSubTree;
	curAns.cnt = x.cnt + y.cnt + (curAns.isSameValSubTree ? 1 : 0);
	return curAns;
}*/

bool isSameValSubTree2(TreeNode* root,int& cnt){

	if(root==NULL){
		return true;
	}

	bool isLeft = isSameValSubTree2(root->left,cnt);
	bool isRight = isSameValSubTree2(root->right,cnt);

	bool isRootSameVal = (root->left ? root->data == root->left->data : true) &&
						 (root->right ? root->data == root->right->data : true) &&
						  isLeft && isRight;
	if(isRootSameVal) {cnt++;}
	return isRootSameVal;
}

int cntSameValSubTree3(TreeNode* root){
	int cnt = 0;
	bool ans = isSameValSubTree2(root,cnt);
	return cnt;
}

void printTreeInOrder(TreeNode* root)
{
    if(!root) return;
    printTreeInOrder(root->left);
    cout<<root->data<<" ";
    printTreeInOrder(root->right);
}

int main()
{
    TreeNode* root = createTree();
    printTreeInOrder(root);
    cout<<endl;
    int ans = cntSameValSubTree3(root);
    cout<<"No Of Same VAlue Subtrees : "<<ans<<endl;
    return 0;
}