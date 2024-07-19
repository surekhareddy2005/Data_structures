#include<stdio.h>
int search(int *arr,int n,int key)
{
	int low=0,high=n-1;
	int mid;
	while(low<=high)
	{
		 mid=(low+high)/2;
		if(arr[mid]==key)
		return 1;
		else if(arr[mid]<key)
		low=mid+1;
		else if(arr[mid]>key)
		high=mid-1;
	}
	return 0;
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
	
	int result=search(arr,n,key);
	if(result==1)
	printf("the key is found\n");
	else
	printf("the key is not found\n");
}
