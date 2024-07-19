#include<stdio.h>
int print_array(int *a,int i,int size)
{
	if(i==size)
	return 0;
	else
	return a[i]+print_array(a,i+1,size);
}
int main()
{
	int n,i;
	printf("enter the no of elements\n");
	scanf("%d",&n);
	int arr[n];
	printf("enter the elements of array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("%d",print_array(arr,0,n));
	
}
