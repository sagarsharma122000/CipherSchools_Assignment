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
}

void revLinked(Node **head)
{
	Node *curr = *head;
	Node *prev = NULL,*next = NULL;
	while(curr!=NULL)
	{
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	*head = prev;
}

int main()
{
	Node *head = new Node(1);
	head->next = new Node(2);
	head->next->next = new Node(3);
	head->next->next->next = new Node(4);
	
	printList(head);
	revLinked(&head);
	cout<<endl;
	printList(head);
}

