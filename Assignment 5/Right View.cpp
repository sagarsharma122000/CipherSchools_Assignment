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

void printrightview(TreeNode *root,int l,int *max)
{
	if(root==NULL)
		return ;
		
	if(*max < l)
	{
		cout<<root->data<<" ";
		*max = l;
	}
	
	printrightview(root->right,l+1,max);
	printrightview(root->left,l+1,max);
}

void rightview(TreeNode *root)
{
	int max =0;
	printrightview(root,1,&max);
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
	
	rightview(root);
}

