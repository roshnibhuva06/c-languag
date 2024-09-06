#include<stdio.h>
#include<conio.h>

void main()
{
	int n,caunt,ld;
	
	printf("enter n:");
	scanf("%d",&n);
	
	ld=n%10;
	
	while(n==0)
	{
		n=n/10;
		caunt++;
	}
	printf("enter your caunt %d",caunt+ld);
}
