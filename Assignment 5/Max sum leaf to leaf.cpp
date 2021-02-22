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
 
static int Max = 0;
int Maxsum(TreeNode *root)
{
	if(root==NULL)
		return 0;
	
	int left_sum = Maxsum(root->left);
	int right_sum = Maxsum(root->right);
	Max = max(Max , left_sum + right_sum +root->data);
	
	return max(left_sum ,right_sum) + root->data;
}

int main()
{
	TreeNode *root = new TreeNode(-10);
	root->left = new TreeNode(2);
	root->right = new TreeNode(3);
	root->left->left = new TreeNode(4);
	root->left->right = new TreeNode(5);
	root->right->left = new TreeNode(6);
	root->right->right = new TreeNode(7);
	
	
	int maxsum = Maxsum(root);
	cout<<Max;
	
}

