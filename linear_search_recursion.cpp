#include<stdio.h>
int linear_search_rec(int *a,int n,int i,int key)
{
	if(i==n)
	{
		return -1;
	}
	if(a[i]==key)
	{
		return i;
	}
	return linear_search_rec(a,n,i+1,key);
}
int main()
{
	int n,k,i;
	printf("enter no of elements\n");
	scanf("%d",&n);
	printf("enter the key value\n");
	scanf("%d",&k);
	int arr[n];
	printf("enter the array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int j=linear_search_rec(arr,n,0,k);
	if(j!=-1)
	printf("the key is present at %d",j);
	else
	printf("key is not found");
	}
