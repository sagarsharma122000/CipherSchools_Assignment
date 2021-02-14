#include<bits/stdc++.h>
using namespace std;

void sorting(int arr[] ,int n)
{
	int low = 0;
	int mid =0;
	int high = n-1;
	while(mid<=high)
	{
		if(arr[mid]==0)
		{
			swap(arr[mid],arr[low]);
			mid++;
			low++;
		}
		else if(arr[mid]==1)
		{
			mid++;
		}
		else
		{
			swap(arr[mid],arr[high]);
			high--;
		}
	}
}

int main()
{
	int arr[] = { 0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1 };
	
	sorting(arr,12);
	
	for(int i=0;i<12;i++)
	{
		cout<<arr[i]<<" ";
	}
}
