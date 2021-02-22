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

void printarray(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

void printpathrecur(TreeNode *root,int path[],int pathlen)
{
	if(root==NULL)
		return;
		
	path[pathlen++] = root->data;
	
	if(root->left==NULL && root->right == NULL)
		printarray(path,pathlen);
		
	else{
		printpathrecur(root->left,path,pathlen);
		printpathrecur(root->right,path,pathlen);
	}
}

void printPath(TreeNode *root)
{
	int path[10000];
	printpathrecur(root,path,0);
	
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
	
	printPath(root);
}

