#include<bits/stdc++.h>
using namespace std;
/**
i and j are starting index of row and column
m and n are last index of row and column
*/
void printspiral(int mat[4][4],int i,int j,int m,int n)
{
	if(i>=m  or j>=n)
	{
		return ;
	}
	for(int p=j;p<n;p++)
		cout<<mat[i][p]<<" ";
	for(int p=i+1;p<m;p++)
	{
		cout<<mat[p][n-1]<<" ";
	}
	if((m-1)!=1)
		for(int p =n-2;p>=j;p--)
			cout<<mat[m-1][p]<<" ";
	
	if((n-1)!=j)
		for(int p=m-2;p>1;p--)
			cout<<mat[p][j]<<" ";
	
	printspiral(mat,i+1,j+1,m-1,n-1);
}

int main()
{
	int mat[4][4] = { { 1, 2, 3, 4 },
                    { 5, 6, 7, 8 },
                    { 9, 10, 11, 12 },
                    { 13, 14, 15, 16 } };
                    
    printspiral(mat,0,0,4,4);
    
 
}
