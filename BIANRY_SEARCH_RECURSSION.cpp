#include<stdio.h>
int search(int *arr,int n,int low,int high,int key)
{
	int mid;
	if(low>high)
	{
	return 0;
}
	else
	{
		mid=(low+high)/2;
		if(arr[mid]==key)
		return 1;
		else if(arr[mid]<key)
		 return search(arr,n,mid+1,high,key);
		else if(arr[mid]>key)
		 return search(arr,n,low,high-1,key);
	}
}
int main()
{
	printf("enter no of elements\n");
	int n;
	scanf("%d",&n);
	int arr[n];
	int key;
	printf("enter key value\n");
	scanf("%d",&key);
	int i;
	printf("enter array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
    } 
	int result=search(arr,n,0,n-1,key);
	if(result==1)
	printf("the key is found\n");
	else
	printf("the key is not found\n");
}
