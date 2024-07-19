#include<stdio.h>
void swap(int *x,int *y)
{  
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	
}
void search(int *arr,int n)
{
	int i,min,j;
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(arr[j]<arr[min])
			{
			  min=j;	
			}
		}
		if(min!=i)
		swap(&arr[i],&arr[min]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
int main()
{
	int n,i;
	printf("enter the no of elements\n");
	scanf("%d",&n);
	int arr[n];
	printf("enter the elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	search(arr,n);
}
