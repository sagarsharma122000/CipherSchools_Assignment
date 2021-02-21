#include<bits/stdc++.h>
#define ll long long int
using namespace std;
class TreeNode{
	public:
		int data;
		TreeNode *left;
		TreeNode *right;
		TreeNode(int data)
		{
			this->data = data;
			left = right = NULL;
		}
		
};

bool find(TreeNode *root, int k)
{
	if(root == NULL)
		return false;
	
	if(root->data ==k || find(root->left,k) || find(root->right,k))
		return true;
	
	return false;
}

TreeNode* LCA(TreeNode *root,int n1,int n2,bool &v1,bool &v2)
{
	if(root==NULL)
		return NULL;
		
	if(root->data == n1)
	{
		v1 = true;
		return root;
	}
	if(root->data == n2)
	{
		v2 = true;
		return root; 
	}
	
	TreeNode *l_lca = LCA(root->left,n1,n2,v1,v2);
	TreeNode *r_lca = LCA(root->right,n1,n2,v1,v2);
	
	if(l_lca && r_lca)
		return root;
		
	if(l_lca !=NULL){
		return l_lca;
	}
	else
	{
		r_lca;
	}
}

TreeNode* findLca(TreeNode *root,int n1,int n2)
{
	bool v1 = false, v2 = false;
	
	TreeNode *node = LCA(root,n1,n2,v1,v2);
	
	if(v1 && v2 || v1 && find(node,n2) || find(node,n1) && v2)
		return node;
	
	return NULL;
	
}

int main()
{
	TreeNode *root = new TreeNode(1);
	root->left = new TreeNode(2);
	root->right = new TreeNode(3);
	root->left->left = new TreeNode(4);
	root->left->right = new TreeNode(5);
	root->right->left = new TreeNode(6);
	root->right->right = new TreeNode(7);
	
	TreeNode *LCA = findLca(root,2,4);
	if(LCA)
	{
		cout<<LCA->data;
	}
	else
	{
		cout<<"NO";
	}
}

