#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c;
	
	printf("enter a:");
	scanf("%d",&a);
	printf("enter b:");
	scanf("%d",&b);
	printf("enter c:");
	scanf("%d",&c);
	//a,b,c
	if(a<b)
	{
		//a,c
	     if(a<c)
		 {
		 	printf("a is minimum");
		 }
		 else
		 {
		 	printf("c is minimum");
		 }	
	}
	//b,c		
	else
	{
		printf("b is minimum");
	}
}
