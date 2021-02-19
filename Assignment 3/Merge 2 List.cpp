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

int length(Node *head)
{
	int l =0;
	while(head!=NULL)
	{
		l++;
		head = head->next;
	}
	return l;
}

Node* mergeList(Node *head1,Node *head2)
{
	Node *res=NULL;
	Node *temp, *prev= NULL;
	
	int len = length(head1) + length(head2);
	
	int i=0;
	while(len-- && (head1!=NULL || head2!=NULL))
	{
		i++;
		if(i==10)
			break;
		
		int data1 = head1->data;
		int data2 = head2->data;
		
		int min  = std::min(data1,data2);
		
		
		
		temp = new Node(min);
		if(res==NULL)
			res = temp;
		else
			prev->next = temp;
		prev = temp;
		
		
		
		if(min == head1->data)
			if(head1->next !=NULL)
				head1 = head1->next;
			else
				head1->data = 999999;
		if(min == head2->data)
			if(head2->next !=NULL)
				head2 = head2->next;
			else
				head2->data = 999999;
					
	}
	
	return res;
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
	
	Node *res = mergeList(head1,head2);
	printList(res);
}
