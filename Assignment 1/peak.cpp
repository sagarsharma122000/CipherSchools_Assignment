#include<bits/stdc++.h>
using namespace std;

int peak(int arr[],int l,int h,int n)
{
	while(l<=h)
	{
		int mid = (l+h)/2;
		if((mid==0 || arr[mid-1]<=arr[mid] ) && (mid ==n-1 || arr[mid+1]<=arr[mid]))
			return arr[mid];
		else if(mid>0 && arr[mid-1]>arr[mid])
			h = mid-1;
		else
			l=mid+1;
	}
	return 0;
}

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<peak(arr,0,n-1,n);
}
