#include<stdio.h>
int main()
{
	char a1[10],a2[20],i,j;
	printf("Enter string one \n");
	scanf("%s",a1);
	printf("Enter string two \n");
	scanf("%s",a2);
	printf("String one is %s \n",a1);
	printf("String two is %s \n",a2);
	for(i=0;a1[i]='\0';++i)
		for(j=0;a2[j]='\0';++j)
			a1[i]=a2[j];
		a1[i]='\0';
	printf("Result string is %s",a1);
	return 0;
}


