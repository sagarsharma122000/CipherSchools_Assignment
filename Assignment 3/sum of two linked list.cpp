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

Node* reverse(Node *head)
{
	
	Node *current = head;
	Node *prev = NULL , *next=NULL;
	while(current!=NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
		
	}
	head = prev;
	return head;
}

Node* sumOfTwoLinkedList(Node *head1,Node *head2)
{
	Node *result = NULL;
	Node *temp , *prev = NULL;
	
	Node *newhead1 = NULL;
	Node *newhead2 = NULL;
	
	newhead1 = reverse(head1);
	newhead2 = reverse(head2);
	
	int sum,carry =0;
	
	while(newhead1!=NULL || newhead2!=NULL)
	{
		sum = carry + (newhead1? newhead1->data:0) + (newhead2 ? newhead2->data : 0);
		
		carry = (sum>9) ? 1 : 0;
		
		sum = sum %10;
		
		temp = new Node(sum);
		
		if(result==NULL)
			result = temp;
		else
			prev->next = temp;
			
		prev = temp;
		
		if(newhead1)
			newhead1 = newhead1->next;
		if(newhead2)
			newhead2 = newhead2->next;
	}
	if(carry>0)
		temp->next = new Node(carry);
		
	Node *newresult = NULL;
	newresult = reverse(result);
	
	return newresult;
}

int main()
{
	Node *head1 = new Node(7);
	head1->next = new Node(5);
	head1->next->next = new Node(9);
  	head1->next->next->next = new Node(4);
  	head1->next->next->next->next = new Node(6);
	
	Node *head2 = new Node(8);
	head2->next = new Node(4);
	
  	cout<<"First List: ";
	printList(head1);
	cout<<endl;
  	cout<<"Second List: ";
	printList(head2);
	cout<<endl;
	
	
	Node *result = NULL;
	result = sumOfTwoLinkedList(head1,head2);
	cout<<"Resultant List: ";
	printList(result);
	
	
}

