#include<stdio.h>
#include<conio.h>

void main()
{
	int x=2;
	int y=5;
	int z=6;
	printf("(x+y)2=%d\n",(x*x)+(2*x*y)+(y*y));
	printf("(x-y)2=%d\n",(x*x)-(2*x*y)+(y*y));
	printf("(x+y)3=%d\n",(x*x*x)+((3*x*y)*(x+y))+(y*y*y));
	printf("(x-y)3=%d\n",(x*x*x)-(y*y*y)-(3*x*y)*(x+y));
	printf("(x+y+z)3=%\n",(x*x*x)+(y*y*y)+(z*z*z)+(3*(x+y)*(x+z)*(z+x)));
	
	printf("(x-y-z)3=%\n",(x*x*x)-(y*y*y)-(z*z*z)-(3*(x+y))+(3*(y+z)+(3*(z+x))));
}
