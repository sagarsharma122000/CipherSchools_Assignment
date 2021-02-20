#include<bits/stdc++.h>
#define ll long long int
using namespace std;

struct MyStack{
	stack<int> s;
	int min;
	
	void getMin()
	{
		if (s.empty()) 
            cout << "Stack is empty\n"; 
 
        else
            cout <<"Minimum Element in the stack is: "
                 << min << "\n";
	}
	void pop()
	{
		if (s.empty()) 
        { 
            cout << "Stack is empty\n"; 
            return; 
        } 
  
  
        int t = s.top(); 
        s.pop(); 
  
        if (t < min) 
        { 
            cout << min << "\n"; 
            min = 2*min - t; 
        } 
  
        else
            cout << t << "\n";
	}
	
	void push(int x)
	{
		if(s.empty())
		{
			min = x;
			s.push(x);
			return;
		}
		if(x<min)
		{
			s.push(2*x - min);
			min = x;
			
		}
		else
			s.push(x);
	}
	
};

int main()
{
	
	MyStack s; 
    s.push(3); 
    s.push(5); 
    s.getMin(); 
    s.push(2); 
    s.push(1); 
    s.getMin(); 
    s.pop(); 
    s.getMin(); 
    s.pop();
}

