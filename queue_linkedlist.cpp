
#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node *next;
};
// GLOBAL DECLARATION
//***********************************************************************************************************************
struct node * rear=NULL, *front=NULL;
int count=0;
// ENQUEUE
//**********************************************************************************************************************
void enqueue(int val)
{
	
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=val;
    newnode->next =NULL;
    if(front==NULL)
    {
    	front=rear=newnode;
    	count++;
	}
	else
	{
	 rear->next=newnode;
	 rear=newnode;
	 count++;
	}
}
// DEQUEUE
//**********************************************************************************************************************
void dequeue()
{
	if(rear==NULL&&front==NULL)
	{
		printf("no nodes to be dequeued");
	}
	else if(rear==front)
	{
		rear=front=NULL;
		count --;
	}
	else
	{
	
	front=front->next;
	count--;
}
}
// GET FRONT
//**********************************************************************************************************************
void get_front()
{
	if(front==NULL)
	{
		printf("no front element\n");
		return ;
	}
	else
	{
		printf("the data in front is %d\n",front->data);
	}
}
//GET REAR
//**********************************************************************************************************************
void get_rear()
{
	if(rear==NULL)
	{
		printf("no rear element\n");
		return ;
	}
	else
	{
		printf("the data in rear is %d\n",rear->data);
	}
}
// GET SIZE
//***********************************************************************************************************************
void get_size()
{
	printf("the size of the give queue is %d\n",count);
}
// DISPLAY
//***********************************************************************************************************************
void display()
{
	if(rear==NULL||front==NULL)
	{
		printf("queue is empty\n");
	}
	struct node *temp=front;
	while(temp!=NULL)
	{
		printf("%d  ",temp->data);
		temp=temp->next;
	}
	printf("\n");
}

int main()
{
	while(1)
	{
		int ch;
		printf("enter\n 1.enqueue\n2.dequeue\n3.get front\n4.display\n5.get rear\n6.get size\n");
		scanf("%d",&ch);
		if(ch==1)
		{
			
			int val;
			printf("enter the value\n");
			scanf("%d",&val);
			enqueue(val);
		}
		else if(ch==2)
		{
			dequeue();
		}
		else if(ch==3)
		{
			get_front();
		}
		else if(ch==4)
		{
			display();
		}
		else if(ch==5)
		{
			get_rear();
		} 
		else if(ch==6)
		{
			get_size();
		}
		else
		{
			printf("thank you\n");
		}
	}
}
