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
}

bool isPalindrome(Node *head)
{
	stack <int> s;
	if(head==NULL)
	{
		return false;
	}
	Node *curr = head;
	while(curr!=NULL)
	{
		s.push(curr->data);
		curr = curr->next;
	}
	while(head!=NULL)
	{
		if(head->data != s.top())
			return false;
		head = head->next;
		s.pop();
	}
	return true;
}



int main()
{
	Node *head = new Node(1);
	head->next = new Node(2);
	head->next->next = new Node(1);
	head->next->next->next = new Node(1);
	
	printList(head);
	cout<<endl;
	cout<<(isPalindrome(head)?"YES":"NO");
}

