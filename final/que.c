#include<stdio.h>
#include<conio.h>

void main()
{
	//write a c program find the third angle of a triangleif two angles are given
	
	int firstangle,secondangle,third;
	
	printf("enter is firstangel: ");
	scanf("%d",&firstangle);
	printf("enter is secondangle: ");
	scanf("%d",&secondangle);
	
	third=180-(firstangle+secondangle);
	
	printf("third is %d",third);
}
