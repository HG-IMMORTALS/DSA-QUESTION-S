#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

Node* isempty(int data)
{
	Node *temp=malloc(sizeof(Node)); 
	temp->data=data;
	temp->next=NULL;
	return temp;
}

Node *atend(Node *head,int data)
{
	Node *newnode=malloc(sizeof(Node)); 
	newnode->data=data;
	newnode->next=NULL;
	Node *temp=head;
	while(temp->next)
	{
	  temp=temp->next;
	}
	temp->next=newnode;
	return head;
}

Node *insert(Node *head,int data)
{
	Node *temp;
	Node *newnode=malloc(sizeof(Node)); 
	newnode->data=data;
	newnode->next=NULL;
	int key=data;
	if(head==NULL||key<head->data)
	{
		newnode->next=head;
		head=newnode;
	}
	else
	{
		temp=head;
		while(temp->next &&temp->next->data<key)
		{
			temp=temp->next;
		}
		newnode->next=temp->next;
		temp->next=newnode;
	}
	return head;
}

void print(Node *head)
{
	Node *temp=head;
	while(temp)
	{
	  printf("%d ",temp->data);
	  temp=temp->next;	
	}
	print("\n");
}
int main()
{
	Node *head=NULL;
	head=isempty(24);
	atend(head,30);
	atend(head,40);
	atend(head,63);
	atend(head,54);
	head=insert(head,60);
	print(head);
	return 0;
}

