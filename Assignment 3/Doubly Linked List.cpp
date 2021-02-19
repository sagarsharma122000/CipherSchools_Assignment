#include<bits/stdc++.h>
#define ll long long int
using namespace std;

class Node
{
	public:
		int data;
		Node *forw;
		Node *back;
		Node(int data)
		{
			this->data=data;
			forw=NULL;
			back= NULL;
		}
};

void printList(Node *head)
{
	while(head!=NULL)
	{
		cout<<head->data<<"->";
		head = head->forw;
	}
}
void printListRev(Node *head)
{
	Node *curr = head;
	while(curr->forw!=NULL)
	{
		curr= curr->forw;
	}
	while(curr!=NULL)
	{
		cout<<curr->data<<"->";
		curr = curr->back;
	}
}

Node push(Node *head,int n)
{
	while(head->forw != NULL)
	{
		head = head->forw;
	}
	Node *new_node = new Node(n);
	head->forw = new_node;
	new_node->back = head;
}

int main()
{
	Node *head = new Node(1);
	head->forw = new Node(2);
	head->forw->back = head;
	
	printList(head);
	cout<<endl;
	printListRev(head);
	push(head,3);
	cout<<endl;
	printList(head);
	cout<<endl;
	printListRev(head);
}

