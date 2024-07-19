
#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node *next;
};
struct node *head=NULL;
void push(int data)
{
	struct node *temp=NULL,*newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=data;
	newnode->next=NULL;
	if(head==NULL)
	{
		head=temp=newnode;
	}
	else
	{
		newnode->next=head;
		head=newnode;
	
	}
	
}
void pop()
{
	if(head==NULL)
	{
		printf("stack is empty\n");
		return ;
	}
	else if(head->next==NULL)
	{
	 printf("the element which is deleted is %d\n",head->data);
	  head=NULL;	
	}
	else
	{
	printf("the element which is deleted is %d\n",head->data);
	head=head->next;
    }
}
void display()
{
  if(head==NULL)
  {
  	printf("the stack is empty\n");
  	return ;
   } 
   struct node *temp=head;
   while(temp!=NULL)
   {
   	printf("%d  ",temp->data);
   	temp=temp->next;
   }
   printf("\n");
}
void peek()
{
	if(head==NULL)
	{
		printf("the stack is empty\n");
		return ;
	}
	printf("the topmost element is %d\n",head->data);
}
void getsize()
{
	struct node *temp=head;
	int k=0;
	while(temp!=NULL)
	{
		++k;
		temp=temp->next;
	}
	printf("the size of stack is %d\n",k);
}
int main()
{
	int ch;
	while(1)
	{
		printf("enter\n1.push\n2.pop\n3.display\n4.peek\n.5get size\n6.exit");
		scanf("%d",&ch);
		if(ch==1)
		{
			printf("enter data to be pushed\n");
			int data;
			scanf("%d",&data);
		    push(data);
		}
		else if(ch==2)
		{
			pop();
		}
		else if(ch==3)
		{
			display();
		}
		else if(ch==4)
		{
			peek();
		}
		else if(ch==5)
		{
			getsize();
		}
		else
		{
			printf("thank you\n");
		}
	}
}

