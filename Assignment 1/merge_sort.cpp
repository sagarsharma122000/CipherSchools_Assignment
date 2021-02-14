#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void merge(int arr[],int l,int m,int h)
{
	int n1 = m-l+1;
	int n2 = h-m;
	
	int L[n1],R[n2];
	
	for(int i=0;i<n1;i++)
	{
		L[i] = arr[l+i];
	}
	for(int i=0;i<n2;i++)
	{
		R[i] = arr[m+1+i];
	}
	
	int i=0,j=0;
	int k=l;
	while(i<n1 && j<n2)
	{
		if(L[i]<=R[j])
		{
			arr[k]=L[i];
			i++;
		}
		else
		{
			arr[k]=R[j];
			j++;
		}
		k++;
	}
	while(i<n1)
	{
		arr[k] = L[i];
		k++;
		i++;
	}
	while(j<n2)
	{
		arr[k++]= R[j++];
	}
	
}

void mergesort(int arr[],int l,int h)
{
	if(l>=h)
		return ;
		
	int m = (h+l)/2;
	mergesort(arr,l,m);
	mergesort(arr,m+1,h);
	merge(arr,l,m,h);
}

int main()
{
	int arr[] = {8,7,9,1,2,6,4};
	
	mergesort(arr,0,6);
	
	for(int i=0;i<7;i++)
	{
		cout<<arr[i]<<" ";
	}
	
	
	
	
	
	
}
