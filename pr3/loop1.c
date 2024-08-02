#include<stdio.h>
#include<conio.h>

void main()
{
	int n;
	
	printf("enter a:");
	scanf("%d ",&n);
	
	int ld=n%10;
	
	printf("last digit:%d\n",ld);
	
	while(n>9)
	{
		n=n/10;
	}
	printf("first digit:%d\n\n",n);
	printf("sum of first and last:%d",ld+n);
}
