#include<bits/stdc++.h>
using namespace std;

void majority(int arr[],int n)
{
	unordered_map<int, int> hs;
	for(int i=0;i<n;i++)
	{
		hs[arr[i]]++;
	}
	
	int count =0;
	for(auto x : hs)
	{
		if(x.second > n/2)
		{
			count=1;
			cout<<x.first<<endl;
			break;
		}
	}
	if(count==0)
		cout<<"No Majaority Element is there";
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
	majority(arr,n);
}
