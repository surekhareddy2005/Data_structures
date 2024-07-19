#include<stdio.h>
int q[100];
int front =0;
int rear=0;
int size;
void enqueue(int val)
{
	if(rear-front==size)
	{
		printf("queue is full\n");
		return ;
	}
	q[rear++]=val;
	
	
}
void dequeue()
{
	if(front==rear)
	{
		printf("queue is empty\n");
		return ;
	}
	printf("%d is remove\n",q[front]);
    ++front ;
}
void display()
{
	if(front == rear)
	{
		printf("queue is empty\n");
		return ;
	}
	for(int i=front ;i<rear;i++)
	{
		printf("%d   ",q[i]);
	}
	printf("\n");
}
void get_front()
{
	printf(" the front element is %d\n",q[front]);
}
void get_rear()
{
	printf(" the rear element is %d\n",q[rear-1
	]);
}
void is_empty()
{
	if(rear==front)
	{
		printf("the queue is empty\n");
	}
}
void is_full()
{
	if(rear-front==size)
	{
		printf("the queue is full\n");
	}
}
int main()
{
	printf("enter the size of the queue\n");
	scanf("%d",&size);
	int ch;
	while(1)
	{
		printf("enter\n1. ENQUEUE\n2. DEQUEUE\n3. DISPLAY \n4.get front\n5.get rear\n6.is empty\n7.is full ANY OTHER TO EXIST\n");
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
		else if(ch==4)
		{
			get_front();
		}
		else if(ch==5)
		{
			get_rear();
		}
		else if(ch==6)
		{
			is_empty();
		}
		else if(ch==7)
		{
			is_full();
		}
		else
		break;
	}
}
