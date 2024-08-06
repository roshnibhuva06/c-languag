#include<stdio.h>
#include<conio.h>

void main()
{
	int n,rev=1;
	printf("enter n:");
	scanf("%d",&n);
	
	while(n>9)
	{
	    rev=rev % 10;
		n=n/10;
		
	}
		printf("enter valid num:%d",rev+n);
}
