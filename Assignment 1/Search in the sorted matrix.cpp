#include<bits/stdc++.h>
using namespace std;

void isExist(int arr[4][4],int n,int x)
{
	int j=n-1;
	int i=0;
	while(i<n && j>=0)
	{
		if(arr[i][j]==x)
		{
			cout<<"element found at ("<<i<<","<<j<<")";
			return; 
		}
		else if(arr[i][j]>x)
		{
			j--;
		}
		else
		{
			i++;
		}
	}
	cout<<"Element not found";
}

int main()
{
	int mat[4][4];
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			cin>>mat[i][j];
		}
	}
	int x;
	cout<<"Enter the element that You want to search"<<endl;
	cin>>x;
	isExist(mat,4,x);
}
