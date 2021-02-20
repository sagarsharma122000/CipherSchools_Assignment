#include<bits/stdc++.h>
#define ll long long int
using namespace std;

class Node{
	public:
		int data;
		Node *next;
		Node *prev;
		static Node *newnode(int data)
		{
			Node *newNode = (Node*)malloc(sizeof(Node));
			newNode->data = data;
			newNode->next = newNode->prev = NULL;
			return newNode;
			
		}
};

class Deque : Node{
	Node *front;
	Node *rear;
	int size;
	public:
		Deque()
		{
			front = rear = NULL;
			size =0;
		}
		void insertFront(int data)
		{
			Node *n = newnode(data);
			if(n==NULL)
				cout<<"overflow";
			else
			{
				if(front==NULL)
				{
					rear = front = n;
				}
				else
				{
					n->next = front;
					front->prev = n;
					front = n;
				}
				size++;
			}
		}
    	void insertRear(int data)
    	{
    		Node *n = newnode(data);
    		if(n==NULL)
    			cout<<"overflow";
    		else{
    			if(rear==NULL)
    			{
    				front = rear = n;
				}
				else
				{
					n->prev = rear;
					rear->next = n;
					rear = n;
				}
				size++;
			}
			
		}
    	void deleteFront()
    	{
    		if(front==NULL)
    			cout<<"underflow";
    		else
    		{
    			Node *temp = front;
    			front = front->next;
    			if(front==NULL)
    				rear=NULL;
    			else
    			{
    				front->prev = NULL;
				}
				free(temp);
				size--;
			}
		}
    	void deleteRear()
    	{
    		if(front==NULL)
    			cout<<"underflow";
    		else
    		{
    			Node *temp = rear;
    			rear = rear->prev;
    			
    			if(rear==NULL)
    				front=NULL;
    			else
    				rear->next = NULL;
    			free(temp);
    			size--;
			}
		}
		void print()
		{
			if(front==NULL)
				cout<<"empty";
			else
			{
				Node *temp = front;
				while(temp!=NULL)
				{
					cout<<temp->data<<" ";
					temp = temp->next;
				}
			}
		}
		int getFront()
		{
    		// If deque is empty, then returns
    		// garbage value
    		if (front==NULL)
        		return -1;
    		return front->data;
		}
};

int main()
{
	Deque dq;
	dq.insertFront(5);
	dq.insertFront(6);
	dq.insertFront(7);
	dq.insertRear(8);
	dq.insertRear(9);
	
	dq.print();
	cout<<endl;
	dq.deleteFront();
	dq.deleteRear();
	dq.print();	
}

