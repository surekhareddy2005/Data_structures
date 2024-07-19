#include<stdio.h>
void print(int *arr, int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}
int partition(int *arr,int l,int h)
{
	int result[h-l+1];
	int k=0;
	int pivot=arr[l];
	int i;
	for(i=l+1;i<=h;i++)
	{
		if(arr[i]<=pivot)
		{
			result[k++]=arr[i];
		}
	}
	int output_index=l+k;
	result[k++]=pivot;
	for(i=l+1;i<=h;i++)
	{
		if(arr[i]>pivot)
		{
			result[k++]=arr[i];
		}
	}
	k=0;
	for(i=l;i<=h;i++)
	{
		arr[i]=result[k++];
	}
	return output_index;
}
void quicksort(int *arr,int l,int h)
{
   if(l<h)
   {
   	int p=partition(arr,l,h);
   	quicksort(arr,l,p-1);
   	quicksort(arr,p+1,h);
   }	
}
int main()
{
	int n;
	printf("enter the no of elements of array\n");
	scanf("%d",&n);
	int arr[n];
	int i;
	printf("enter the elements of array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("before sorting\n");
	print(arr,n);
	quicksort(arr,0,n-1);
	printf("after sorting\n");
	print(arr,n);
}
