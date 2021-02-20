#include<bits/stdc++.h>
#define ll long long int
using namespace std;
/*
stack reverse(stack<int> s)
{
	stack<int> temp;
	while(!s.empty())
	{
		temp.push(s.top());
		s.pop();
	}
	return temp;
}
*/
void print(stack<int> s)
{
	while(!s.empty())
	{
		cout<<s.top()<<" ";
		s.pop();
	}
}

int main()
{
	stack<int> st;
	st.push(1);
	st.push(2);
	st.push(3);
	st.push(4);
	
	cout<<st.top()<<endl;
	
	stack<int> temp;
	while(!st.empty())
	{
		temp.push(st.top());
		st.pop();
	}
	
	print(temp);
}

