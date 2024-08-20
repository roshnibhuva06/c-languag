#include<stdio.h>
#include<conio.h>

void main()
{
	int celsius,fahrenheit;
	printf("enter celsius:");
	scanf("%d",&celsius);
	
	fahrenheit=9/5*celsius+32;
	printf("fahrenheit=%d",fahrenheit);
}
