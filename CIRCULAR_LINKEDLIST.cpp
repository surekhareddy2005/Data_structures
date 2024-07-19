#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node*head=NULL;
// insertion at head
insert_at_head(int val)
{
	struct node*temp=head;
	 struct node *newnode=(struct node*)malloc(sizeof( struct node));
 newnode->data=val;
 newnode->next=NULL;
 if(head==NULL)
 {
 	head=newnode;
 	newnode->next=newnode;
 }
 else
 {
 	newnode->next=head;
 	while(temp->next!=head)
 	{
 		temp=temp->next;
	 }
	 temp->next=newnode;
	 head=newnode;

 }
}
// insertion at tail
void insert_at_tail(int val)
{
	struct node *temp=head;
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=val;
	newnode->next=NULL;
	if(head==NULL)
	{
		head=newnode;
		newnode->next=newnode;
	}
	else
	{
		while(temp->next!=head)
		{
			temp=temp->next;
		}
		temp->next=newnode;
		newnode->next=head;
	}
}
// delete at head;
void delete_at_head()
{
	struct node *temp=head,*nextnode;
	if(head==NULL)
	{
		printf("no nodes to be deleted");
	}
	else if(head->next==head)
	{
		head=NULL;
		free(temp);
	}
	else 
	{
		nextnode= head;
		while(temp->next!=head)
		{
			temp=temp->next;
		}
		temp->next=head->next;
		head=head->next;
		free(nextnode);
	}
}
// delete at tail
void delete_at_end()
{
	struct node *nextnode;
	if(head==NULL)
	{
		printf("no nodes");
	}
	else if(head==head->next)
	{
		head=NULL;
		free(head);
	}
	else
	{
		struct node *temp=head;
		
		while(temp->next->next!=head)
		{
			temp=temp->next;
		}
		nextnode=temp->next;
		temp->next=head;
		free(nextnode);
	
	}
}
// normal display;
void display()
{
	if(head==NULL)
	{
		printf("no nodes ");
	}
	else
	{
		struct node *temp=head;
		do
		{
			printf("%d ",temp->data);
			temp=temp->next;
		}
	   while(temp!=head);
		printf("\n ");
	}
}

// nth display
void n_nodes(int n)
{
	if(head==NULL)
	{
		printf(" no nodes");
	}
	else
	{
	 struct	node *temp=head;
		for(int i=0;i<n;i++)
		{
			printf("%d",temp->data);
			temp=temp->next;
		}
		printf("\n ");
	}
}
int main()
{
	int ch;
	while(1)
	{
		printf("\nenter \n1.insert at head\n2.insert at tail\n3.display\n4. deletion at head\n5. deletion at tail\n6. for n printing \n.any other to exist");
		scanf("%d",&ch);
		if(ch==1)
		{
		// insertion at head
		int val;
		printf("\nenter a value for the node to be inserted");
		scanf("%d",&val);
		insert_at_head(val);	
		}
	

		else if(ch==2)
		{
			// insertion at tail
			int val;
			printf(" enter data to be inserted at end");
			scanf("%d",&val);
		 insert_at_tail(val);	
		}
		else if(ch==3)
		{
			//display
			display();
		}
	

		else if(ch==4)
		{
			//delete at head
			delete_at_head();
		}
		else if(ch==5)
		{
			// delete at end
			delete_at_end();
		}
		else if(ch==6)
		{ // nth display
			int n;
			printf("enter n value\n");
			scanf("%d",&n);
			n_nodes(n);
		}
		else
		{
			printf("thank you for the testing ");
			break;
		}
	}
}

