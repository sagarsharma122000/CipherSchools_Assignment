#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int findplatform(int a[],int d[],int n)
{
	int i=1;
	int j=0;
	int k=n-1;
	sort(a,a+n);
	sort(d,d+n);
	
	int platform =1,tp;
	
	while(i<n && j<n)
	{
		if(a[i]<=d[j]){
			platform++;
			i++;
			}
		else if(a[i]>d[j])
		{
			platform--;
			j++;
		//	i++;
		}
		if(platform>tp)
			tp=platform;
	}
	return tp;
}

int main()
{
	int arrival[] ={ 900, 940, 950, 1100, 1500, 1800 };
	int dep[] = { 910, 1200, 1120, 1130, 1900, 2000 };
	
	cout<<findplatform(arrival,dep,6);
}

