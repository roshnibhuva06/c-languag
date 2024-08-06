#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n,ld=1;
	
	printf("enter num:");
	scanf("%d",&i);
	
	printf("ld %d :ld");
	
	
	while(n>9)
	{
		n=n/10;
		
	}
	printf("first digit:%d\n\n",n);
	printf("first digit last digit:%d",ld+n);
}
