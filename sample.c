#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int data;
	struct node * next;
}node;
node * createnode(int n);
void display(node * head);
int atbeg(node * head, int n);
int atend(node * head, int n);
int atnth(node * head,int pos, int n);
int deletenode(node * head,int n);

void main()
{   int n=0,x=0,y=0,a=0,b=0,c=0;
	node * HEAD = NULL;
	printf("enter the no. of node");
	scanf("%d",&n);
	HEAD = createnode(n);
	display(HEAD);
	printf("enter the data to add at beg new node");
	scanf("%d",&x);
	HEAD = atbeg(HEAD,x);
	display(HEAD);
	printf("enter the data to add at end new node");
	scanf("%d",&y);
	HEAD = atend(HEAD,y);
	display(HEAD);
	printf("enter the data to add at nth pos new node");
	scanf("%d%d",&a,&b);
	HEAD = atnth(HEAD,a,b);
	display(HEAD);
	printf("enter the data to delete");
	scanf("%d",&c);
	HEAD = deletenode(HEAD,c);
	display(HEAD);
}
int deletenode(node * head,int n){
	int i=0;
	node * p,*q;
	p=head;
	q=NULL;
	for(i=1;i<n-1;i++)
	{
		p=p->next;
	}
	q=p->next;
	p->next=q->next;
	free(q);
	
	return head;
}
int atnth(node * head,int pos, int n)
{
	int i=0;
	node * temp;
	node * s=head;
	temp=(node *)malloc(sizeof(node));
	temp->data=n;
	temp->next=NULL;
	for(i=1;i<pos-1;i++)
	{
		s=s->next;
	}
	temp->next=s->next;
	s->next=temp;
	
	return head;
}
int atend(node * head, int n)
{
	node * temp;
	node * p=head;
	temp= (node *)malloc(sizeof(node));
	temp->data=n;
	temp->next=NULL;
	while(p->next!=NULL)
	{
		p=p->next;
	}
	p->next=temp;
	
	return head;
	
}
int atbeg(node * head, int n)
{
	node * temp;
	temp = (node *)malloc(sizeof(node));
	temp->data=n;
	temp->next=head;
	head=temp;
	
	return head;
}
node * createnode(int n)
{   int i=0;
	node * p = NULL;
	node * temp = NULL;
	node * head = NULL;
	
	for(i=0;i<n;i++)
	{
		temp= (node *)malloc(sizeof(node));
		printf("enter the data for %d ", i+1);
		scanf("%d",&(temp->data));
		temp->next=NULL;
		
		if(head==NULL)
		{
			head=temp;
		}
		else
		{
			p=head;
			while(p->next!=NULL)
			 p=p->next;
			
			p->next=temp; 
		}
		
	}
	return head;
}
void display(node * head)
{
	node * p=head;
	while(p!=NULL)
	{
		printf(" %d -> %d ",p->data,p->next);
		p=p->next;
	}
}
