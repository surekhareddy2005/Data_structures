#include<stdio.h>
int stack[1000];
int size;
int top=-1;
//function to push data into stack
void push(int data)
{
	if(top==size-1)
	{
		printf("stack overflow\n");
	return ;
   }
   stack[++top]=data;	
}
// function to pop an element from the stack
void pop()
{
	if(top==-1)
	{
		printf("stack underflow\n");
		return;
	}
	printf("the element which is deleted is %d\n",stack[top--]);
}
// function to display the elements of the stack
void display()
{
	if(top==-1)
	{
		printf("the stack is empty\n");
		return ;
	}
	int i;
	printf("the elements in stack are \n");
	for(i=top;i>=0;i--)
	{
		printf("%d  ",stack[i]);
		
	}
	printf("\n");
}
// function to peek the top element of the stack
void peek()
{
	if(top==-1)
	{
		printf("the stack is empty\n");
		return ;
	}
	printf("the topmost element is %d\n",stack[top]);
}
void isempty()
{
	if(top==-1)
	{
		printf("stack is empty\n");
	}
	return ;
}
void isfull()
{
	if(top==size-1)
	{
		printf("stack is full\n");
	}
	return ;
}
int main()
{
	printf("enter the size of the stack\n");
	scanf("%d",&size);
	int ch;
	while(1)
	{
		printf("enter\n1.push\n2.pop\n3.display\n4.peek\n5.isempty\n6.isfull\n7.exit");
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
			isempty();
		}
		else if(ch==6)
		{
			isfull();
		}
		else
		{
			printf("thank you\n");
		}
	}
}
