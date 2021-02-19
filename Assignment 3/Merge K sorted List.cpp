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

int findmin(int a,int b,int c)
{
	int r=0;
	while(a && b && c)
	{
		a--;
		b--;
		c--;
		r++;
	}
	return r;
}

Node* MergeList(Node *head1,Node *head2,Node *head3,int n)
{
	Node *result = NULL;
	Node *temp ,*prev = NULL;
	int i=0;
	while(head1!=NULL || head2!=NULL || head3!=NULL)
	{
		int min = findmin((head1 ? head1->data : 9999),(head2 ? head2->data : 9999),(head3 ? head3->data : 9999));
		
		i++;
		if(i==3*n+1)
			break;
			
			
		temp = new Node(min);
		if(result == NULL)
			result = temp;
		else
			prev->next = temp;
		
		prev = temp;
		
		if(min == head1->data )
		{
			if(head1->next!=NULL)
				head1 = head1->next;
			else
			{
				head1->data = 9999999;
			}	
		}
		if(min == head2->data )
		{
			if(head2->next!=NULL)
				head2 = head2->next;
			else
			{
				head2->data = 9999999;
			}	
		}
		if(min == head3->data )
		{
			if(head3->next!=NULL)
				head3 = head3->next;
			else
			{
				head3->data = 9999999;
			}	
		}
		
	}
	return result;
}


int main()
{
	Node *head1 = new Node(1);
	head1->next = new Node(3);
    head1->next->next = new Node(5);
    head1->next->next->next = new Node(7);
    head1->next->next->next->next = new Node(14);
    
    Node *head2 = new Node(2);
    head2->next = new Node(4);
    head2->next->next = new Node(6);
    head2->next->next->next = new Node(8);
    head2->next->next->next->next = new Node(13);
    
    Node *head3 = new Node(0);
    head3->next = new Node(9);
    head3->next->next = new Node(10);
    head3->next->next->next = new Node(11);
    head3->next->next->next->next = new Node(12);
    
    
    int n = 5; //size of each Linked List
    
    printList(head1);
    cout<<endl;
    printList(head2);
    cout<<endl;
    printList(head3);
    cout<<endl;
    
    
    Node *newhead = NULL;
    
    newhead = MergeList(head1,head2,head3,n);
    
    printList(newhead);
}

