#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
	struct node *prev;
};
typedef struct node node;
node *head=NULL;
node *tail=NULL;
 void insert_at_head(int x)
 {
 	node *newnode=(node*)malloc(sizeof(node));
 	newnode->data=x;
 	newnode->next=NULL;
 	newnode->prev=NULL;
 	if(head==NULL)
 	{
 		head=newnode;
 		tail=newnode;
	 }
	 else
	 {
	 	newnode->next=head;
	 	head->prev=newnode;
	 	head=newnode;
	 } 	
 }
 void display()
 {
 	if(head==NULL)
 	{
 		printf("no nodes to be printed");
	 }
	 else
	 {
	 	node *temp=head;
	 	while(temp!=NULL)
	 	{
	 		printf("%d ",temp->data);
	 		temp=temp->next;
		 }
		 printf("\n");
	 }
 }
 void display_back()
 {
 	if(head==NULL)
 	{
 		printf("no nodes to be printed");
	 }
	 else
	 {
	 	node *temp=tail;
	 	while(temp!=NULL)
	 	{
	 		printf("%d ",temp->data);
	 		temp=temp->prev;
		 }
		 printf("\n");
	 }
 }
 void insert_at_tail(int x)
 {
 	node *newnode=(node *)malloc(sizeof(node));
 	newnode->data=x;
 	newnode->next=NULL;
 	newnode->prev=NULL;
 	if(head==NULL)
 	{
 		head=newnode;
 		tail=newnode;
	 }
	 else
	 {
		 tail->next=newnode;
		 newnode->prev=tail;
		 tail=newnode;
	 }
 }
 void delete_at_head()
 {
 	if(head==NULL&&tail==NULL)
 	{
 		printf("enter to no node to be deleted");
	 }
	 else if(head->next==NULL)
	 {
	 	node *temp = head;
	 	head=NULL;
	 	tail=NULL;
	 	free(temp);
	 }
	 else
	 {
	 	node *temp=head;
	 	head->next->prev=NULL;
	 	head=head->next;
	 	free(temp);
	 }
 }
 void delete_at_tail()
 {
 	if(head==NULL)
 	{
 		printf("no nodes to be entered");
	 }
	 else if(head->next==NULL)
	 {
	 	node *temp=head;
	 	head=NULL;
	 	tail=NULL;
	 	free(temp);
	 }
	 else
	 {
	 	node *temp=tail;
	 	tail->prev->next=NULL;
	 	tail=tail->prev;
	 	free(temp);
	 }
 }
 int main()
 {
 	int ch;
 	while(1)
 	{
	  printf("\nenter \n1.insert at head\n2.insert at tail\n3.display from front\n4.display from back\n.5 deletion at head\n.6 deletion at tail \n7.any other to exist");
		scanf("%d",&ch);
		if(ch==1)
		{
			int x;
			printf("enter new value\n");
			scanf("%d",&x);
			insert_at_head(x);
		}
	   else	if(ch==2)
		{
			int x;
			printf("enter new value\n");
			scanf("%d",&x);
			insert_at_tail(x);
		}
		else if(ch==3)
		{
			display();
		}
		else if(ch==4)
		{
			display_back();
		}
		else if(ch==5)
		{
			delete_at_head();
		}
		else if(ch==6)
		{
			
			delete_at_tail();
		}
		else
		{
			printf("thank you\n");
		}
		
		
	}
		
 }
