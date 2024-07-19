//implementation of singly linkes list
#include<stdio.h>
#include<stdlib.h>
//self referential structure
struct node{
	int data;
	struct node *next;

};
typedef struct node Node;
// head as a global variable
Node *head=NULL;
// creation of node
void create()
{
	Node *temp=head,*newnode;
	newnode=(Node*)malloc(sizeof(Node));
	int data;
	printf("enter data\n");
	scanf("%d",&data);
	newnode->data=data;
	newnode->next=NULL;
	if(head==NULL)
	{
		head=newnode;
	}
	 else
	 {
	    while(temp->next!=NULL)
	    {
	    	temp=temp->next;
		}
		temp->next=newnode;
	 }
}
// insert at head
void insert_at_head(int val)
{
 Node *newnode=(Node*)malloc(sizeof(Node));
 newnode->data=val;
 newnode->next=NULL;
 if(head==NULL)
 {
 	head=newnode;
 }
 else
 {
 	newnode->next=head;
 	head=newnode;
 }
}
// insert at tail
 void insert_at_tail(int val)
 {
     Node *temp= head;
	 Node *newnode=(Node*)malloc(sizeof(Node));
	 newnode->data=val;
	 newnode->next=NULL;
	 if(head==NULL)
	 {
	 	head=newnode;
		 }	
		 else
		 {
		 	while(temp->next!=NULL)
		 	{
		 		temp=temp->next;
			 }
			 temp->next=newnode;
		 }
 }
 //function to insert at a given position
void insert_at_position(int data,int n)
{
   Node *newnode ,*temp=head;
   newnode=(Node*)malloc(sizeof(Node));
   newnode->data=data;
   newnode->next=NULL;
   int i=1;
   while(i<n-1 && temp!=NULL)
   {
   	temp=temp->next;
   	i++;
	   }
	   if(temp==NULL)
	   {
	   	printf("invalid position\n");
	   	return ;
	   }
	   newnode->next=temp->next;
	   temp->next=newnode;	
}
 // display
void display()
{
	if(head==NULL)
	{
		printf("no nodes ");
	}
	else
	{
		Node *temp=head;
		while(temp!=NULL)
		{
			printf("%d ",temp->data);
			temp=temp->next;
		}
		printf("\n");
	}
}
	// delete at head
	void delete_at_head()
	{
		if(head==NULL)
		{
			printf("no nodes to be deleted");
		}
	else
	   {
	   	Node *temp=head;
	   	head=head->next;
	   	free(temp);
	   }
	}
	// delete at position
void delete_at_position(int position)
{
	Node *temp=head;
	int i=1;
	while(i<position-1)
	{
		temp=temp->next;
		i++;
	}
	temp->next=temp->next->next;
}
	// delete at end
	void delete_at_end()
	{
		Node *temp=head, *prevnode=NULL;
		if(head==NULL)
		{
			printf("no nodes to be deleted");
			return ;
		}
		else if(temp->next==NULL)
		{
			free(temp);
			head=NULL;
		}
		else
		{
		while(temp->next!=NULL)
		{
			prevnode=temp;
			temp=temp->next;
		}
		prevnode->next=NULL;
		free(temp);
	
	}
	}
// function to reverse
void reverse()
{
   Node *prev=NULL,*current=head,*nextnode=head;
   while(nextnode!=NULL)
   {
   	nextnode=nextnode->next;
   	current->next=prev;
   	prev=current;
   	current=nextnode;
   }
   head=prev;
}
	
int main()
{
	int ch;
	while(1)
	{
		printf("\nenter\n1.creation \n2.insert at head\n3.insert at tail\n4.insert at position\n5.display\n6. deletion at head\n7. deletion at position \n.8dlelte at end\n9.reverse\nany other to exist\n");
		scanf("%d",&ch);
	  if (ch==1)
	  {
	  	// create
	  	create();
	  }
	  else if(ch==2)
		{
		// insertion at head
		int val;
		printf("\nenter a value for the node to be inserted");
		scanf("%d",&val);
		insert_at_head(val);	
		}
		else if(ch==3)
		{
			// insertion at tail
			int val;
			printf(" enter data to be inserted at end");
			scanf("%d",&val);
		 insert_at_tail(val);	
		}
		else if(ch==4)
		{
			// insert at position
			printf("enter the data\n");
			int data;
			scanf("%d",&data);
			printf("enter the position\n");
			int position;
			scanf("%d",&position);
			insert_at_position(data,position);
		}
		else if(ch==5)
		{
			//display
			display();
		}
		else if(ch==6)
		{
			// delete at head
			delete_at_head();
		}
		else if(ch==7)
		{
			// delete at position
			printf("enter the position\n");
			int position;
			scanf("%d",&position);
			delete_at_position(position);
		}
		else if(ch==8)
		{
			// delete at tail
			delete_at_end();
		}
		else if(ch==9)
		{
			// reverse
			reverse();			
		}
		else
		
		{
			printf("thank you for the testing ");
			break;
		}
	}
}
	
	


