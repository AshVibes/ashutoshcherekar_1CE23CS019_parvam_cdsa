#include<stdio.h>
int main()
{
	int i,n;
	int a[5];
	printf("Enter the numbers");
	scanf("%d",&n);
	printf("Enter each element");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("The reverse string is");
	for(i=(n-1);i>=0;i--)
		printf("%d",a[i]);
		
	return 0;
		
}
	
