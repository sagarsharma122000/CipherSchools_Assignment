#include<bits/stdc++.h>
#define ll long long int
using namespace std;

class TreeNode{
	public:
		int data;
		TreeNode *left;
		TreeNode *right;
		TreeNode *next;
		TreeNode *back;
		TreeNode(int data)
		{
			this->data = data;
			next = back = left = right = NULL;
		}
		
};
//extend form of Preorder
void connectrecur(TreeNode *root)
{
	if(!root)
		return;
	
	if(root->left){
		root->left->next = root->right;
		root->left->back = (root->back)?root->back->right:NULL;
	}
	if(root->right)
	{
		root->right->next = (root->next)? root->next->left:NULL;
		root->right->back = root->left; 
	}
	
	connectrecur(root->left);
	connectrecur(root->right);
}

void connectDoubly(TreeNode *root)
{
	root->back = NULL;
	root->next = NULL;
	connectrecur(root);
}
void print(TreeNode *root)
{
	if(root==NULL)
		return;
		
	TreeNode *temp = root;
	while(temp!=NULL)
	{
		cout<<temp->data<<"->";
		temp = temp->next;
	}
	cout<<"NULL\n";
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
	
	connectDoubly(root);
	print(root);
	//cout<<endl<<root->right->right->back->data;
}

