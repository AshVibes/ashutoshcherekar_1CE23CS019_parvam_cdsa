#include<stdio.h>
void main()
{
	char ch;
	int asciivalue;
	printf("Enter the string");
	scanf("%c",&ch);
	asciivalue=(int)ch;
	if(ch>65&&ch<=90)
	{
		printf("It is uppercase character");
	}
	else
	{
		printf("It is lowercase character");
	}
}
	
