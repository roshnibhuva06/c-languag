#include<stdio.h>
#include<conio.h>

void table(int n)
{
	if(n%3==0 && n%5==0)
	{
		printf("value is divisible by both 3 & 5 ");
	}
	else if(n%3==0)
	{
		printf("value is divisible by 3");
	}
	else if(n%5==0)
	{
	printf("value is divisible by 5");	
	}
	else
	{
		printf("value is not divisible by both");
	}
}
void main()
	{
		table(15);
	}

