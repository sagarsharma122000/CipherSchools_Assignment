#include<bits/stdc++.h>
#define ll long long int
using namespace std;

class Node
{
	public:
		int data;
		Node *next;
		Node(int data)
		{
			this->data=data;
			next=NULL;
		}
};

Node delnode(Node *head)
{
	if(head->next==NULL)
	{
		head->next = NULL;
		return *head;
	}
	Node *curr = head;
	while(curr->next->next!=NULL)
	{
		curr = curr->next;
	}
	curr->next = NULL;
	return *head;
}

Node push(Node *head, int n)
{
	if(head->next==NULL)
	{
		head->next = new Node(n);
		return *head;
	}
	Node *cur = head;
	while(cur->next!=NULL)
	{
		cur = cur->next;
	}
	cur->next = new Node(n);
	return *head;
	
	
}

void printList(Node *head)
{
	if(head==NULL)
	{
		return;
	}
	while(head!=NULL)
	{
		cout<<head->data<<"->";
		head = head->next;
	}
}
int main()
{
	Node *head = new Node(1);
	head->next = new Node(2);
	head->next->next = new Node(3);
	head->next->next->next = new Node(4);
	
	
	printList(head);
	
	push(head,5);
	
	cout<<endl;
	printList(head);
	
	delnode(head);
	
	cout<<endl;
	printList(head);	
}
