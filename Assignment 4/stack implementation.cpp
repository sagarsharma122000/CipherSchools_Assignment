#include<bits/stdc++.h>
#define ll long long int
using namespace std;

class Node{
	public:
		int data;
		Node *next;
		Node(int data)
		{
			this->data = data;
			next = NULL;
		}
};
Node *top;

void push(int data)
{
	Node *temp = new Node(data);
	if(!temp)
		cout<<"overflow"<<endl;
	temp->next = top;
	top = temp;
	
}

void print()
{
	Node *temp;
	if(top==NULL){
		cout<<"Stack Empty"<<endl;
		return;
	}
	
	else
	{
		temp = top;
		while(temp!=NULL){
			cout<<temp->data<<"->";	
			temp = temp->next;
		}
		cout<<"NULL"<<endl;
	}	
}

void pop()
{
	Node *temp;
	if(top==NULL)
		cout<<"empty"<<endl;
	else
	{
		temp = top;
		
		top = top->next;
		temp->next = NULL;
		free(temp);	
	}	
}

int main()
{
	print();
	push(11);
	push(22); 
    push(33); 
    push(44);
    
    print();
    
    pop();
    print();
	
}
