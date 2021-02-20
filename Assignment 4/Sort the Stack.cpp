#include<bits/stdc++.h>
#define ll long long int
using namespace std;

stack<int> sortStack(stack<int> st)
{
	stack<int> tm;
	while(!st.empty())
	{
		int temp = st.top();
		st.pop();
		
		while(!tm.empty() && tm.top() > temp)
		{
			st.push(tm.top());
			tm.pop();
		}
		tm.push(temp);
	}
	return tm;
}


int main()
{
	stack<int> st;
	st.push(2);
	st.push(0);
	st.push(1);
	st.push(7);
	st.push(5);
	
	stack<int> re = sortStack(st);
	 while (!re.empty()) 
    { 
        cout << re.top()<< " "; 
        re.pop(); 
    }
	
}

