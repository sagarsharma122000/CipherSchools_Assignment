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

int length(Node *head)
{
	int len =0;
	while(head!=NULL)
	{
		head = head->next;
		len++;
	}
	//cout<<len<<endl;
	return len;
}

Node* DetectIntersection(Node *head1,Node *head2)
{
	int len1 = length(head1);
	int len2 = length(head2);
	
	Node *curr1 = head1;
	Node *curr2 = head2;
	
	if(len1>len2)
	{
		for(int i=1;i<len2;i++){
			curr1= curr1->next;
		}		
	}	
	else{
		for(int i=1;i<len1;i++)
		{
			curr2=curr2->next;
		}
	}
	while(curr1 != curr2 && curr1!=NULL && curr2!=NULL){
		curr1 = curr1->next;
		curr2 = curr2->next;
	}
	return curr1;
}

int main()
{
	Node *head = new Node(3);
	head->next = new Node(6);
	head->next->next = new Node(9);
	head->next->next->next = new Node(15);
	head->next->next->next->next = new Node(30);
	
	Node *head2 = new Node(10);
	head2->next = head->next->next->next;
	
	printList(head);
	cout<<endl;
	printList(head2);
	
	Node *inter = NULL;
	inter = DetectIntersection(head,head2);
	
	cout<<endl;
	cout<<inter->data;
}

