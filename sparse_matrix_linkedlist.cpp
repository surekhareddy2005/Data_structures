#include<stdio.h>
#include<stdlib.h>
struct node
{
	int row,col,data;
	struct node *next;
};
typedef struct node N;
N *head=NULL;
void insert_at_tail(int r,int c,int val)
{
	N *temp;
	N *newnode=(N*)malloc(sizeof(N));
	newnode->row=r;
	newnode->col=c;
	newnode->data=val;
	newnode->next=NULL;
	if (head==NULL)
	{
		head=temp=newnode;
	}
	else{
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newnode;
	}
}
void display()
{
	printf(" non-zero elementd of the given sparse matrix arw :\n");
	printf("row\tcol\tval\n");
	N *temp=head;
	while(temp!=NULL)
	{
		printf("%d\t%d\t%d\n",temp->row,temp->col,temp->data);
		temp=temp->next;
	}
}
int main()
{
	int r,c;
	scanf("%d %d",&r,&c);
	int i,j;
	int arr[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(arr[i][j]!=0)
			{
				insert_at_tail(i,j,arr[i][j]);
			}
		}
	}
	display();
	
}
