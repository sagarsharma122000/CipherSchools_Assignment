#include<bits/stdc++.h>
#define ll long long int
using namespace std;

class Node{
	public:
		int data;
		Node *next;
		Node(int data){
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

void RemoveDuplicates(Node* &head)
{
	Node *dummy = new Node(99999);
	dummy->next = head;
	
	Node *prev = dummy;
	Node *current = head;
	
	//int i=0;
	while(current!=NULL)
	{
		//i++;
		//if(i==20)
			//break;
		while(current->next!=NULL && prev->next->data == current->next->data){
			current = current->next;
		}
		
		if(prev->next ==current)
			prev = prev->next;
		else
			prev->next = current->next;
			
		current = current->next;
	}
	head = dummy->next;
}

int main()
{
	Node *head = new Node(23);
	head->next = new Node(28);
	head->next->next = new Node(28);
	head->next->next->next = new Node(35);
	head->next->next->next->next = new Node(49);
	head->next->next->next->next->next = new Node(49);
	head->next->next->next->next->next->next = new Node(56);
//	head->next->next->next->next->next->next->next = new Node(49);


	printList(head);
	cout<<endl;
	RemoveDuplicates(head);
	printList(head);
}

