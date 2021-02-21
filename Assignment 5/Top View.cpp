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

void topviewmap(TreeNode *root, int curr,int hd, map<int , pair<int,int>> &m)
{
	if(root==NULL)
		return;
		
	if(m.find(hd)==m.end())
		m[hd] = make_pair(root->data,curr);
	else{
		pair <int,int> p = m[hd];
		if(p.second >= curr)
		{
			m[hd].second = curr;
			m[hd].first = root->data;
		}
	}
	
	topviewmap(root->left,curr+1,hd-1,m);
	topviewmap(root->right,curr+1,hd+1,m);
}

void topview(TreeNode *root)
{
	map <int , pair<int,int>> m;
	topviewmap(root,0,0,m);
	
	
	for(auto i : m)
	{
		pair<int,int> p = i.second;
		cout<<p.first<<" ";
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
	
	topview(root);
}

