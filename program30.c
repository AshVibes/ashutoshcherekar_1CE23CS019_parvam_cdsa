#include<stdio.h>
int main()
{
	int a,b,sum,diff,product,quot;
	int op;
	printf("Enter value of a:");
	scanf("%d",&a);
	printf("Enter value of b:");
	scanf("%d",&b);
	printf("Enter your choice(1.SUM 2.DIFF 3.PRODUCT 4.QUOTIENT)");
	scanf("%d",&op);
	switch(op)
	{
		case 1:
			printf("Sum is %d",a+b);
			break;
		case 2:
			printf("Diffrence is %d",a-b);
			break;
		case 3:
			printf("Product is %d",a*b);
			break;
		case 4:
			printf("Quotient is %d",a/b);
			break;
		default:
			printf("Invalid Choice");
			break;
	}
	return 0;
}
