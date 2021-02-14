#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void mergearr(int arr1[],int m,int arr2[],int n)
{
	int m_arr = m-1;
	int n_arr = n-1;
	int last = m+n-1;
	
	while(m_arr>=0 && n_arr>=0 && last >=0)
	{
		if(arr1[m_arr]>arr2[n_arr])
		{
			arr1[last] = arr1[m_arr];
			last--;
			m_arr--;
		}
		else
		{
			arr1[last]=arr2[n_arr];
			n_arr--;
			last--;
		}
	}
}

int main()
{
	int m,n;
	m=4,n=4;
	int arr1[] = { 1, 3, 4, 5,0,0,0,0}, arr2[] = {2, 4, 6, 8};
	
	mergearr(arr1,m,arr2,n);
	
	//printing..........
	for(int i=0;i<m+n;i++)
	{
		cout<<arr1[i]<<" ";
	}
	
}

