#include<bits/stdc++.h>
#define ll long long int
using namespace std;

bool issafeToPlace(int grid[8][8],int i,int k)
{
	for(int row=i;row>=0;row--)
	{
		if(grid[row][k]==1)
			return false;
	}
	
	int x = i;
	int y=k;
	
	while(x>=0 && y>=0)
	{
		if(grid[x][y]==1)
			return false;
		
		x--;
		y--;
		
	}
	
	x = i;
	 y = k;
	while(x>=0 && y<4)
	{
		if(grid[x][y]==1)
			return false;
		x--;
		y++;
	}
	return true;
}

bool putqueens(int grid[8][8],int i,int n)
{
	if(i==n)
	{
		for(int j=0;j<n;j++)
		{
			for(int col=0;col<n;col++)
			{
				cout<<grid[j][col]<<" ";
			}
			cout<<endl;
		}
		return true;
	}
	
	for(int k=0;k<n;k++)
	{
		if(issafeToPlace(grid,i,k))
		{
			grid[i][k]=1;
			bool isplace = putqueens(grid,i+1,n);
			if(isplace)
			{
				return true;
			}
			grid[i][k]=0;
		}
	}
	return false;
}

int main()
{
	int n=8;
	int grid[8][8] ={0};
	putqueens(grid,0,n);
}

