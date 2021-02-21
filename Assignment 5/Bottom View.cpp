#include<bits/stdc++.h>
#include <map>
#define ll long long int
using namespace std;

class TreeNode{
	public:
		int data;
		int hd;
		TreeNode *left;
		TreeNode *right;
		TreeNode(int data)
		{
			hd = INT_MAX;
			this->data = data;
			left = right = NULL;
		}
		
};


void printbottomview(TreeNode *root , int curr, int hd, map <int,pair<int,int>> &m)
{
	if(root==NULL)
		return;
		
	if(m.find(hd)==m.end()){
		m[hd] = make_pair(root->data,curr);
	}
	else
	{
		pair<int,int> p = m[hd];
		if(p.second <=curr)
		{
			m[hd].second = curr;
			m[hd].first = root->data;
		}
	}
	
	printbottomview(root->left,curr+1,hd-1,m);
	printbottomview(root->right,curr+1,hd+1,m);
}

void bottomview(TreeNode *root)
{
	map<int,pair<int,int>> m;
	printbottomview(root,0,0,m);
	
	
	
	map < int, pair < int, int > > ::iterator it; 
    for (it = m.begin(); it != m.end(); ++it) 
    { 
        pair < int, int > p = it -> second; 
        cout << p.first << " "; 
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
	
	bottomview(root);
	
}

