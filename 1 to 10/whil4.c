#include<stdio.h>
#include<conio.h>

void main()
{
	int a;
	int b;
	printf("enter a:");
	scanf("%d",&a);
	printf("enter b:");
	scanf("%d",&b);
	while(a<=b)
	{
		if(a%4==0)
		{
			printf("%d",a);
		}
	    a++;
		
	}
	
	
}
