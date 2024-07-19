#include<stdio.h>
void insertion_sort(int *a,int n)
{
	int i,key,k,j;
	for(i=1;i<=n-1;i++)
	{
		key=a[i];
		j=i-1;
		while(j>=0&&a[j]>key)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=key;
	}
	
	//printf("after sorting array\n");
	for(k=0;k<n;k++)
	{
		printf("%d ",a[k]);
	}
	printf("\n");

}
int main()
{
	int n,i;
	printf("enter the no of elements of array\n");
	scanf("%d",&n);
	int arr[n];
	printf("enter the elements in array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("before sorting array\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
  insertion_sort(arr,n);
}

