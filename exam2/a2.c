#include<stdio.h>
#include<conio.h>

void main()
{
	int n,i;
	
	printf("enter n:");
	scanf("%d",&n);
	
	do
	{
		printf("%d",n);
		n=n/10;
		
	}while(n%2==9);
}
