#include<bits/stdc++.h>
using namespace std;

int maxsum(int arr[],int n)
{
	int max_so_far = 0;
	int max_ending = 0;
	
	
	for(int i=0;i<n;i++)
	{
		max_ending = max_ending + arr[i];
		if(max_so_far < max_ending )
		{
			max_so_far = max_ending;
		}
		if(max_ending < 0)
		{
			max_ending =0;
		}
	}
	return max_so_far;
}

int main()
{
	int arr[] ={-2, -3, 4, -1, -2, 1, 5, -3};
	
	cout<<maxsum(arr,8);
                    
}
