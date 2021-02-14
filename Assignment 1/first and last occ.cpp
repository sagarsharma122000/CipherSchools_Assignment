#include<bits/stdc++.h>
using namespace std;

int first_occ(int arr[],int n,int x)
{
	int l=0;
	int h = n-1;
	while(l<=h)
	{
		int mid = (l+h)/2;
		if(mid==0 || x> arr[mid-1] && arr[mid]==x)
		{
			return mid;
		}
		else if(x>arr[mid])
		{
			l = mid+1;
		}
		else
		{
			h = mid-1;
		}
	}
	return -1;
}
int last_occ(int arr[],int n,int x)
{
	int l=0;
	int h = n-1;
	while(l<=h)
	{
		int mid = (l+h)/2;
		if((mid==n-1 || x < arr[mid+1])  && arr[mid] == x)
			return mid;
		else if(x<arr[mid])
			h = mid -1;
		else
			l = mid +1;
	}
	return -1;
}

int main()
{
	int arr[] = { 1, 2, 2, 2, 2, 3, 4, 7, 8, 8 };
    int n = sizeof(arr) / sizeof(int);
 
    int x = 8;	
	int first = first_occ(arr,n,x);
	int last = last_occ(arr,n,x);
	cout<<first<<" "<<last;
}
