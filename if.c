#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c;
	printf("a is minimum:");
	scanf("%d",&a);
	printf("b is minimum:");
	scanf("%d",&b);
	printf("c is minimum:");
	scanf("%d",&c);
	
	if (a>b)
	{
		if(a>c)
		{
			printf("a is minimum");
		}
	    else
	    {
	        printf("c is minimum");	
		}
	}
	else
	{
	//b,c
	printf("b is minimum");	
	}
	     
	
	
}

	
		

	
	
	

