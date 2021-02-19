#include<bits/stdc++.h>
#define ll long long int
using namespace std;

class Node{
	public:
		int data;
		Node *next;
		Node(int data )
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
	int c =0;
	while(head!=NULL)
	{
		c++;
		cout<<head->data<<"->";
		head = head->next;
		if(c==10)
			return;
	}
	cout<<"NULL";
}

void RemoveLoop(Node *slow,Node *head)
{
	Node *ptr1 = slow;
	Node *ptr2 = slow;
	
	int k =1;
	while(ptr2->next != ptr1)
	{
		ptr2 = ptr2->next;
		k++;
	}
	
	ptr1=head;
	ptr2=head;
	
	for(int i=0;i<k;i++)
		ptr2 = ptr2->next;
		
	while(ptr1!=ptr2)
	{
		ptr1 = ptr1->next;
		ptr2 = ptr2->next;
	}
	
	while(ptr2->next!=ptr1)
	{
		ptr2 = ptr2->next;
	}
	
	ptr2->next =NULL;
	return;
	
}

int DetectandRemoveLoop(Node *head)
{
	Node *slow = head, *fast = head;
	while(slow!=NULL && fast!=NULL && fast->next!=NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
		
		if(slow==fast){
			RemoveLoop(slow,head);
			return 1;
		}
	}
	return 0;
}

int main()
{
	Node *head = new Node(50);
	head->next = new Node(20);
	head->next->next = new Node(15);
	head->next->next->next = new Node(4);
	head->next->next->next->next = new Node(10);
	head->next->next->next->next->next = head->next->next;
	
	
	printList(head);
	cout<<endl;
	DetectandRemoveLoop(head);
	printList(head);
		
	
}

