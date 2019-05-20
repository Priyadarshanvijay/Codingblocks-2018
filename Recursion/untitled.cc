void printLevelOrderArray(TreeNode* root)
{
	if(!root) return;
	vector<TreeNode*> v;
	v.push_back(root);
	if(root->left) v.push_back(root->left);
	if(root->right) v.push_back(root->right);
	for(int i = 1;i<v.size();i++)
	{
		if(v[i]->left) v.push_back(v[i]->left);
		if(v[i]->right) v.push_back(v[i]->right);
	}
	cout<<"OK TILL NOW\n";
	for(int i = 0; i<v.size();i++)
	{
		cout<<v[i]->data<<" ";
		if(!v[i+1]) continue;
		if(v[i+1]->data < v[i]->data) cout<<endl;
	}
}

void assignNext(TreeNode* root)
{
	if(!root) return;
	vector<TreeNode*> v;
	v.push_back(root);
	if(root->left) v.push_back(root->left);
	if(root->right) v.push_back(root->right);
	for(int i = 1;i<v.size();i++)
	{
		if(v[i]->left) v.push_back(v[i]->left);
		if(v[i]->right) v.push_back(v[i]->right);
	}
	for(int i = 0; i<v.size();i++)
	{
		v[i]->next = v[i+1]; 
		if(!v[i+1]) continue;
		if(v[i+1]->data < v[i]->data) v[i]->next = NULL;
	}
}
