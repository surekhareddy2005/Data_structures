//array reversal using another array
#include<stdio.h>
int main()
{
	int n,i,j,t;
	printf("enter the no of elements of array\n");
	scanf("%d",&n);
	printf("enter the array elements\n");
	int arr[n];
	int b[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)       //for(i=n-1,j=0;i>=0;i--,j++)
	{                      //b[j]=arr[i];
		b[i]=arr[n-(i+1)]; 
	}
	for(i=0;i<n;i++)
	{
	printf("%d ",b[i]);
	
	}
	printf("\n");
	//array reversal in same array
	for(i=0,j=n-1;i<n,j>i;i++,j--) //for(i=0;i<n/2;i++
		{                          // int t=arr[i-i-1];
	  	t=arr[i];                  //arr[i-i-1]=arr[i];
	  	arr[i]=arr[j];             //arr[i]=t;  
	  	arr[j]=t;
		  
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	//printing array in reverse
	for(i=n-1;i>=0;i--)
	{
		printf("%d ",arr[i]);
	}
}
