#include<stdio.h>
// function to linear search
int Linear_search(int *arr,int n,int key)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(arr[i]==key)
		{
			return 1;
		}
	}
	return 0;
}
int main()
{
	int n;
	printf("enter no of elements\n");
	scanf("%d",&n);
	int arr[n];
	int i;
	printf("enter the elements of array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter key\n");
	int key;
	scanf("%d",&key);
	int result=Linear_search(arr,n,key);
	if(result==1)
	{
		printf("the key is found\n");
	}
	else
	{
		printf("the key is not found\n");
	}
}
