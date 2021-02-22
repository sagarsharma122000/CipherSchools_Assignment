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

void printkdistanceNodeDown(TreeNode *root, int k) 
{ 
    // Base Case 
    if (root == NULL || k < 0)  return; 
   
    if (k==0) 
    { 
        cout << root->data << endl; 
        return; 
    } 
  
    printkdistanceNodeDown(root->left, k-1); 
    printkdistanceNodeDown(root->right, k-1); 
} 
   
int printkdistanceNode(TreeNode* root, TreeNode* target , int k) 
{ 
    if (root == NULL) return -1; 
  
    if (root == target) 
    { 
        printkdistanceNodeDown(root, k); 
        return 0; 
    } 
  
    int dl = printkdistanceNode(root->left, target, k); 
  
    if (dl != -1) 
    {  
         if (dl + 1 == k) 
            cout << root->data << endl; 
   
         else
            printkdistanceNodeDown(root->right, k-dl-2); 
  
         return 1 + dl; 
    } 
  
    int dr = printkdistanceNode(root->right, target, k); 
    if (dr != -1) 
    { 
         if (dr + 1 == k) 
            cout << root->data << endl; 
         else
            printkdistanceNodeDown(root->left, k-dr-2); 
         return 1 + dr; 
    } 
  
    return -1; 
} 

int main()
{
TreeNode *root = new TreeNode(1);
	root->left = new TreeNode(2);
	root->right = new TreeNode(3);
	root->left->left = new TreeNode(4);
	root->left->right = new TreeNode(5);
	root->left->right->right = new TreeNode(8);
	root->right->left = new TreeNode(6);
	root->right->right = new TreeNode(7);
	
	printkdistanceNode(root,root->left,1);
	
}

