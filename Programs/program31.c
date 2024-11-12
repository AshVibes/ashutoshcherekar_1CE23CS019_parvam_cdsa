#include<stdio.h>
void main()
{
	int arr[100],i,n;
	printf("Enter the number of values:\n");
	scanf("%d",&n);
	printf("Enter the array:\n");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	printf("array is: \n");
	for(i=0;i<n;i++)
	printf("%d ",arr[i]);
	printf(" \n The reversed array is\n");
	for(i=(n-1);i>=0;i--)
	printf("%d ",arr[i]);
}

