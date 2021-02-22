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

//time complexity O(n*n)

int height(TreeNode *root)
{
	if(root==NULL)
		return 0;
		
	return 1+max(height(root->left),height(root->right));
}

int findDiameter(TreeNode *root)
{
	if(root==NULL)
		return 0;
	
	int lh = height(root->left);
	int rh = height(root->right);
	
	int ld = findDiameter(root->left);
	int rd = findDiameter(root->right);
	
	return max(lh+rh+1, max(ld,rd));
}

*/

// time complexity of this approach O(n)::::----->>>>


int height(TreeNode *root, int &ans)
{
	if(root==NULL)
		return 0;
	int lh = height(root->left,ans);
	int rh = height(root->right,ans);
	
	ans = max(ans, 1+lh+rh);
	
	return 1+max(lh,rh);
}

int findDiameter(TreeNode *root)
{
	if(root==NULL)
		return 0;
	
	int ans = INT_MIN;
	height(root,ans);
	return ans;
		
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
	
	cout<<findDiameter(root);
}

