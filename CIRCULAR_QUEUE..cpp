#include<stdio.h>
#include<stdlib.h>
int *q;
int capacity;
int size;
int front;
int rear;
void enqueue(int val)
{
 if(size==capacity)
 {
 	printf("the queue is full\n");
 	return;
 }
	rear=(rear+1)%capacity;
	q[rear]=val;
	size++;
}
void dequeue()
{
	if(size==0)
	{
		printf("queue is empty\n");
		return ;
	}
	printf("%d is deleted\n",q[front]);
front = (front+1)%capacity;
size--;
}
void display()
{
	if(size==0)
	{
		printf("queue is empty\n");
		return ;
	}
	for(int i=front ;i<=rear;i=(i+1)%capacity)
	{
		printf("%d   ",q[i]);
	}
	printf("\n");
}
int main()
{
	
printf("enter the size of the queue\n");
	scanf("%d",&capacity);
	q=(int *)malloc(sizeof(int)*capacity);
	size=0;
	front=0;
	rear=capacity-1;
	int ch;
	while(1)
	{
		printf("enter\n1. ENQUEUE\n2. DEQUEUE\n3. DISPLAY \n ANY OTHER TO EXIST\n");
		scanf("%d",&ch);
		if(ch==1)
		{
			int val;
			printf("enter the value to be enqueued\n");
			scanf("%d",&val);
			enqueue(val);
		}
		else if(ch==2)
		{
			dequeue();
		}
		else if(ch==3)
		{
		 display();	
		}
		else
		break;
	}
}

