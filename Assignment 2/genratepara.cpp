#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void genratepara(int left,int right,string s)
{
	if(left>right)
		return;
	
	if(left ==0 && right ==0)
	{
		cout<<endl;
		cout<<s;
		return;
	}
	if(left>0)
	{
		genratepara(left-1,right,s+"(");
		
	}
	if(right>0)
	{
		genratepara(left,right-1,s+")");
	}
}

int main()
{
	int n;
	cin>>n;
	genratepara(n,n,"");
}

