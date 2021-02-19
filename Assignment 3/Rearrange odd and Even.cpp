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

void RearrangeList(Node *head)
{
	Node *odd = head;
	Node *even = head->next;
	Node *evenHead = even;
	
	while(even!=NULL &&even->next !=NULL){
		odd->next = even->next;
		odd = odd->next;
		even->next = odd->next;
		even = even->next;
	}
	odd->next = evenHead;	

}

int main()
{
	Node *head1 = new Node(10);
	head1->next = new Node(22);
    head1->next->next = new Node(30);
    head1->next->next->next = new Node(43);
    head1->next->next->next->next = new Node(56);
	head1->next->next->next->next->next = new Node(70);
	
	printList(head1);
	
	RearrangeList(head1);
	
	cout<<endl;
	printList(head1);
}

