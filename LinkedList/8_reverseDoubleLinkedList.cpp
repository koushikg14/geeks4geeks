#include <bits/stdc++.h>

using namespace std;

struct node
{	
	int data;
	struct node *next;
	struct node *prev;
};
	
void insert(node* &head,int val)
{
	node *newnode=(node*)malloc(sizeof(node));
	newnode->data=val;
	newnode->next=NULL;
	newnode->prev=NULL;

	node *start=head;
	if(start==NULL)
	{
		head=newnode;
		return ;
	}

	while(start->next)
		start=start->next;
	start->next=newnode;
	newnode->prev=start;

	return ;
}

void printList(node *head)
{
	while(head)
	{
		cout<<head->data;
		head=head->next;
		if(head)
			cout<<"->";
	}
	cout<<endl;
	return;
}

struct node *reverseList(node *head)
{
	if(head==NULL)
		return head;
	node *curr=head,*prev=NULL,*nxt;

	while(curr)
	{
		nxt=curr->next;
		curr->next=prev;
		curr->prev=curr->next;
		prev=curr;
		curr=nxt;
	}
	head=prev;
	return head;
}

int main()
{
	struct node *head=NULL;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int val;
		cin>>val;
		insert(head,val);
	}
	
	printList(head);
	head=reverseList(head);
	printList(head);
	return 0;
}