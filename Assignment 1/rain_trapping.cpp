#include<bits/stdc++.h>
using namespace std;

int trapi(int arr[],int left,int right)
{
	int left_arr[left];
	int right_arr[right];
	left_arr[0]=arr[0];
	right_arr[right-1] = arr[right-1];
	for(int i=1;i<left;i++)
	{
		if(arr[i]>left_arr[i-1])
		{
			left_arr[i]=arr[i];
		}
		else
		{
			left_arr[i]=left_arr[i-1];
		}
	}
	
	for(int j=right-2;j>=0;j--)
	{
		if(arr[j]>right_arr[j+1])
		{
			right_arr[j]=arr[j];
		}
		else
		{
			right_arr[j]=right_arr[j+1];
		}
	}
	
	int tw =0;
	for(int i=0;i<left;i++)
	{
		tw+= (min(left_arr[i],right_arr[i])-arr[i]); 
	}
	return tw;
}

int main()
{
	int arr[] ={0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
	
	int left = 12;
	int right = 12;
	
	cout<<trapi(arr,left,right);
	
}
