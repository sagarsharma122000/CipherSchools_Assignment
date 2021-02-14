#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int search(int arr[],int l,int h,int key)
{
	if(l>h)
		return -1;
	int mid = (l+h)/2;
	if(arr[mid]==key)
		return mid;
	
	if(arr[l]<=arr[mid])
	{
		if(key >= arr[l] && key <=arr[mid])
			return search(arr,l,mid-1,key);
		return search(arr,mid+1,h,key);
	}
	
	if(key >=arr[mid]  && key <=arr[h])
		return search(arr,mid+1,h,key);
	
	return search(arr,l,mid-1,key);
}

int main()
{
	 int arr[] = { 4, 5, 6, 7, 8, 9, 1, 2, 3 }; 
	 int k=6;
	 
	 cout<<search(arr,0,8,k)+1;
}
 
