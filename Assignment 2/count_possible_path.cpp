#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int countpath(int m,int n)
{
	if(m==1 || n==1)
		return 1;
		
	return countpath(m-1,n)+countpath(m,n-1); 
}

int main()
{
	int m,n;
	cin>>m>>n;
	
	cout<<countpath(m,n);
	
}
