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
	cout<<"NULL";
}



int main()
{
	Node *head1 = new Node(1);
	head1->next = new Node(2);
	head1->next->next = new Node(5);
	head1->next->next->next = new Node(8);
	
	Node *head2 = new Node(0);
	head2->next = new Node(4);
	head2->next->next = new Node(6);
	head2->next->next->next = new Node(7);
	
	printList(head1);
	cout<<endl;
	printList(head2);
	cout<<endl;
}

