#include<bits/stdc++.h>
using namespace std;

void segarr(int arr[],int n)
{
	int low = 0;
	int high = n-1;
	while(low<high)
	{
		if(arr[low]==1)
		{
			swap(arr[low],arr[high]);
			high--;
		}
		else
			low++;
	}
}

int main()
{
	int arr[10] = {0,1,0,1,0,0,1,1,1,0};
	
	segarr(arr,10);
	
	for(int i=0;i<10;i++)
	{
		cout<<arr[i]<<" ";
	}
}
