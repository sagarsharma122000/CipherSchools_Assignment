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

TreeNode* tree(int I[],int P[],int s,int e,unordered_map<int ,int> &m)
{
	static int preIndex = 0;
	if(s>e)
		return NULL;
	
	int curr = P[preIndex++];
	TreeNode *tnode = new TreeNode(curr);
	
	if(s==e)
		return tnode;
		
	int inIndex = m[curr];
	
	tnode->left = tree(I,P,s,inIndex-1,m);
	tnode->right = tree(I,P,inIndex+1,e,m);
	
	return tnode;	
}

TreeNode* buildTree(int I[],int P[],int len)
{
	unordered_map<int ,int> m;
	for(int i=0;i<len;i++)
		m[I[i]] = i;
	
	return tree(I,P,0,len-1,m);
}
void printInorder(TreeNode* node)
{
    if (node == NULL)
        return;
    printInorder(node->left);
    cout<<node->data<<" ";
    printInorder(node->right);
}
int main()
{
	int I[] = {4,2,5,1,6,3,7};
	int P[] = {1,2,4,5,3,6,7};
	
	TreeNode *node = buildTree(I,P,7);
	printInorder(node);
}

