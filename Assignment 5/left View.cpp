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

void leftviewprint(TreeNode *root, int l,int *max)
{
	if(root==NULL)
		return;
		
	if(l > *max)
	{
		cout<<root->data<<" ";
		*max = l;
	}
	leftviewprint(root->left,l+1,max);
	leftviewprint(root->right,l+1,max);
}

void leftview(TreeNode *root)
{
	int max =0;
	leftviewprint(root,1,&max);	
}


int main()
{
	TreeNode *root = new TreeNode(1);
	root->left = new TreeNode(2);
	root->right = new TreeNode(3);
	//root->left->left = new TreeNode(4);
	//root->left->right = new TreeNode(5);
	root->right->left = new TreeNode(6);
	root->right->right = new TreeNode(7);
	
	leftview(root);
}

