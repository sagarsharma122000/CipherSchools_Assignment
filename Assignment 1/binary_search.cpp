#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int binarysearch(int arr[],int key,int n)
{
	int l =0;
	int h = n-1;
	while(l<=h)
	{
		int mid = (l+h)/2;
		if(arr[mid]==key)
		{
			return mid+1;
		}
		else if(arr[mid]>key)
		{
			h = mid-1;
		}
		else
		{
			l = mid+1;
		}
	}
	return -1;
}

int main()
{
	int arr[] = {1,2,3,4,5,5,6,9,11,15};
	int key = 15;
	 cout<<binarysearch(arr,key,10);
}
