#include<bits/stdc++.h>
using namespace std;

bool meet(int d1,int d2,int v1,int v2)
{
	if((d1>d2 && v1>v2) || (d2>d1 && v2>v1))
	{
		return false;
	}
	int D = abs(d1-d2);
	int V = abs(v1-v2);
	if(D%V==0)
	{
		return true;
	}
	return false;
}
int main()
{
	int d1,d2,v1,v2;
	cout<<"Enter the distances";
	cin>>d1>>d2;
	cout<<"Enter the speed";
	cin>>v1>>v2;
	if(meet(d1,d2,v1,v2))
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
}
