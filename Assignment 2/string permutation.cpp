#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void printpermu(string input,int l,int r)
{
	if(l==r)
		cout<<input<<endl;
		
	else
	{
		for(int i=l;i<=r;i++)
		{
			swap(input[i],input[l]);
			printpermu(input,l+1,r);
			swap(input[l],input[i]);
		}
	}
}

int main()
{
	string st;
	cin>>st;
	printpermu(st,0,st.size()-1);
}

