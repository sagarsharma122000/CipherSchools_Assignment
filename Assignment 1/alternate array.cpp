#include<bits/stdc++.h>
using namespace std;


int main()
{
	int n;
	cin>>n;
	int arr[n] ;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	sort(arr,arr+7);
	int low,high;
	for(low =0,high=n-1;low<high;low++,high--)
	{
		cout<<arr[high]<<" "<<arr[low]<<" ";
	}
	if(n%2!=0)
	{
		cout<<arr[low];
	}
}
