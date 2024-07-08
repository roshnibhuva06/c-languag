#include<stdio.h>
#include<conio.h>

void main()
{
	int x,y;
	printf("enter any number:");
	scanf("%d",&x,y);
	if(x<0)
	{
	printf("This number is positiv");
}
    else if(x==0)
    {
    printf("This number is nagative");
}
     else if(x>0)
     {
     	printf("This number is neutral");
	 }
}
