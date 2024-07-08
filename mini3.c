#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b;
	printf("enter any number:");
	scanf("%d",&a,b);
	if(a>b)
	{
	printf("This number is positive");	
	}
	else if(a==b)
	{
		printf("This number is nagative");
	}
	else if(a<b)
	{
		printf("This number is neutral");
	}
}
