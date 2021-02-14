#include<bits/stdc++.h>
using namespace std;

void ksmallest(int arr[],int k,int n)
{
	for(int i=k;i<n;i++)
	{
		int max = arr[k-1];
		int max_p = k-1;
		
		for(int j = k-2;j>=0;j--)
		{
			if(arr[j]>max)
			{
				max = arr[j];
				max_p = j	;
			}
		}
		int c_el = arr[i];
		if(max>c_el)
		{
			int m = max_p;
			while(m<k-1)
			{
				arr[m]=arr[m+1];
				m++;
			}
			arr[k-1]=c_el;
		}
	}
}

int main()
{
	int arr[5] = {4,2,6,1,5};
	int k;
	cin>>k;
	
	ksmallest(arr,k,5);
	for(int i=0;i<k;i++)
	{
		cout<<arr[i]<<" ";
	}
	
}
