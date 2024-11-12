#include<stdio.h>
void main()
{
	int n1,n2,i;
	printf("Enter the number");
	scanf("%d %d",&n1,&n2);
	if(n1<n2)
	for(i=n1;i<=n2;i++)
	printf("%d",i);
	else
	printf("Invalid Choice");
}	
	
