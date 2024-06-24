#include<stdio.h>
#include<conio.h>

void main()
{
	int x=2;
	int y=5;
	printf("(x+y)2=%d\n",(x*x)+(2*x*y)+(y*y));
	printf("(x-y)2=%d\n",(x*x)-(2*x*y)+(y*y));
	printf("(x+y)3=%d\n",(x*x*x)+(3*x*y)*(x+y)+(y*y*y));
}
