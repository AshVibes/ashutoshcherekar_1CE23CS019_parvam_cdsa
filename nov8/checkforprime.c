#include<stdio.h>
void main()
{
	int n,i;
	printf("Enter the number");
	scanf("%d",&n);
	if(n==isprime(num))
		printf("prime");
	else
	 	printf("not prime");	
}	
int isprime(int n){
	int i;
	
	
	for(i=2;i*i<=n;i++)
		if(n%i==0)
		return 0;
	return 1;
}
