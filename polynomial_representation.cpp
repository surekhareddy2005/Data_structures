//polynomial representation using a linled list
#include<stdio.h>
#include<stdlib.h>
struct node {
	float coeff;
	int expo;
	struct node *next;
};
typedef struct node node;
node *insert_term(node *head,float c,int e)
{
	node *newnode=(node*)malloc(sizeof(node));
	newnode->coeff=c;
	newnode->expo=e;
	newnode->next=NULL;
	if(head==NULL)
	{
		head = newnode;
		
	}
	else
	{
		node *temp=head;
		while(temp->next != NULL)
		{
			temp=temp->next;
		}
		temp->next=newnode;
	}
	return head;
}
void display(node *head)
{
	node *temp=head;
	while(temp!=NULL)
	{
		printf("(%.2f)x^%d%c",temp->coeff,temp->expo,(temp->next==NULL)? '\n':'+');
		temp=temp->next;
	}
}
 node* create_polynomial()
{
	node * head=NULL;
	int n;//number of terms;
	int i;
	printf("enter no of terms\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	float co;
	int ex;
	printf("enter coefficient of terms %d:  \n",i);
	scanf("%f",&co);
	printf("enter exponent of term %d:  \n",i);	
	scanf("%d",&ex);	
	 head=insert_term(head,co,ex);
	}
	return head;
	
	
	
	
}
int main()
{
	node *poly =create_polynomial();
	display(poly);
	return 0;
	
}
