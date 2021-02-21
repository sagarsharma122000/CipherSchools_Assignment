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

/*


// this method consume O(n^2) time complexity//

int height(TreeNode *root)
{
	if(root==NULL)
		return -1;
	
	else
	{
		int ld = height(root->left);
		int rd = height(root->right);
		
		if(ld>rd)
			return (ld+1);
		else
			return (rd+1);
	}
}

void printlevel(TreeNode *root, int l)
{
	if(root==NULL)
		return;
	
	if(l==1)
	{
		cout<<root->data<<" ";
	}
	else if(l>1)
	{
		printlevel(root->left,l-1);
		printlevel(root->right,l-1);
	}
}

void Levelorder(TreeNode *root)
{
	for(int i=1;i<=height(root)+1;i++)
	{
		printlevel(root,i);
	}
		
	
}
*/


void Levelorder(TreeNode *root)
{
	if(root==NULL)
		return ;
		
	queue<TreeNode *> q;
	q.push(root);
	while(!q.empty())
	{
		TreeNode *t = q.front();
		cout<<t->data<<" ";
		q.pop();
		
		
		if(t->left)
			q.push(t->left);
		if(t->right)
			q.push(t->right);
	}
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
	
	Levelorder(root);
}

