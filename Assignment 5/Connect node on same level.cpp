#include<bits/stdc++.h>
#define ll long long int
using namespace std;
class TreeNode{
	public:
		int data;
		TreeNode *left;
		TreeNode *right;
		TreeNode *next;
		TreeNode(int data)
		{
			this->data = data;
			next = right = left = NULL;
		}
		
};

void connectLevels(TreeNode *root)
{
	while(root!=NULL){
		TreeNode *dummy = new TreeNode(INT_MIN);
		TreeNode *child = dummy;
		
		while(root!=NULL)
		{
			if(root->left!=NULL)
			{
				child->next = root->left;
				child = child->next;
			}
			if(root->right!=NULL)
			{
				child->next = root->right;
				child = child->next;
			}
			root = root->next;
		}
		root = dummy->next;
	}
}

/// Another Approach

void connectrecur(TreeNode *root)
{
	if(!root)
		return;
	if(root->left)
		root->left->next = root->right;
		
	if(root->right)
		root->right->next = (root->next)? root->next->left : NULL;
		
	connectrecur(root->left);
	connectrecur(root->right);
}
void connectLevels2(TreeNode *root)
{
	root->next = NULL;
	connectrecur(root);	
}

//
void print(TreeNode *root)
{
	if(root==NULL)
		return;
		
	TreeNode *temp = root;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<"\n";
	if(root->left!=NULL)
		print(root->left);
	else
		print(root->right);
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
	root->left->left->left = new TreeNode(8);
	
	
	connectLevels(root);

	print(root);
	cout<<endl;
	
	connectLevels2(root);
	print(root);
}

