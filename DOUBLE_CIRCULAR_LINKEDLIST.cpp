#include<stdio.h>
 #include<stdlib.h>
 struct node{
 	int data;
 	struct node *prev;
 	struct node *next;
 };
 struct node *head=NULL;
 //function to create a node
 struct node* createnode()
 {
 	struct node*temp=NULL;
 	int data;
 	struct node*newnode=(struct node*)malloc(sizeof(struct node));
 	printf("enter data\n");
 	scanf("%d",&data);
 	newnode->data=data;
 	newnode->prev=NULL;
 	newnode->next=NULL;
 	if(head==NULL)
 	{
 		 head=newnode;
 		 newnode->next=head;
 		 newnode->prev=head;
	 }
	 else
	 {
	 	temp=head->prev;
	 	temp->next=newnode;
	 	newnode->prev=temp;
	 	newnode->next=head;
	 	head->prev=newnode;
	
	 }
 }
 // function to display
 void display()
 {
 	if(head==NULL)
 	{
 		printf("no nodes to be displayes\n");
 		return ;
	 }
	 struct node *temp=head;
	 do
	 {
	 	printf("%d  ",temp->data);
	 	temp=temp->next;
	 }while(temp!=head);
	 printf("\n");
 }
 // function to  add at begining
 void addatbeggining(int data)
 {
 	struct node*newnode;
 	newnode=(struct node*)malloc(sizeof(struct node));
 	newnode->data=data;
 	newnode->next=head;
 	newnode->prev=head;
 	if(head==NULL)
 	{
 		head=newnode;
 		head->next=newnode;
 		head->prev=newnode;
	 }
	 else
	 {
	 	newnode->next=head;
	 	newnode->prev=head->prev;
	    head->prev->next=newnode;
	    head->prev=newnode;
	    head=newnode;	
	 }
 }
 // function to add at end
 void addatend(int data)
 {
 	struct node*newnode=(struct node*)malloc(sizeof(struct node));
 	newnode->data=data;
 	newnode->next=NULL;
 	newnode->prev=NULL;
 	if(head==NULL)
 	{
 		head=newnode;
 		head->prev=newnode;
 		head->next=newnode;
	 }
	 else
	 {
	 	newnode->next=head;
	 	newnode->prev=head->prev;
	 	head->prev->next=newnode;
	 	head->prev=newnode;
	 }
 }
 // function to add at given position
 void position(int n,int data)
 {
 	struct node *newnode,*temp=head;
 	newnode=(struct node*)malloc(sizeof(struct node));
 	newnode->data=data;
 	newnode->next=NULL;
 	newnode->prev=NULL;
 	int i=1;
 	while(i<n-1)
 	{
 		temp=temp->next;
 		i++;
	 }
	 newnode->next=temp->next;
	 newnode->prev=temp;
	 temp->next->prev=newnode;
	 temp->next=newnode;
 }
int main()
{
	int ch;
	while(1)
	{
		printf("enter\n1.create\n2.display\n3.beggin\n4.end\n5.position");
		scanf("%d",&ch);
		if(ch==1)
		{
		createnode();
		}
		else if(ch==2)
		{
		     display();
		}
		else if(ch==3)
		{
			int data;
			printf("enter data\n");
			scanf("%d",&data);
			addatbeggining(data);
		}
		else if(ch==4)
		{
			int data;
			printf("enter data\n");
			scanf("%d",&data);
			addatend(data);
		}
		else if(ch==5)
		{
			int data,n;
			printf("enter data\n");
			scanf("%d %d",&data,&n);
			position(n,data);
		}
		else
		{
			printf("thank you\n");
		}
	}
}
