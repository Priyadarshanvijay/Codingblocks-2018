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

int countDiameter(TreeNode* root)
{
    if(!root) return 0;
    int leftDia = countDiameter(root->left);
    int rightDia = countDiameter(root->right);
    int curDia = countHeight(root->left)+countHeight(root->right)+1;
    return max(max(leftDia,rightDia),curDia);
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
    int ans = countHeight(root);
    cout<<"Height : "<<ans<<endl;
    cout<<"Diameter: "<<countDiameter(root);
    cout<<endl;
    return 0;
}