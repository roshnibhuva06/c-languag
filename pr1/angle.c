#include<stdio.h>
#include<conio.h>

void main()
{
	int firstangle,secondangle,thirdangle;
	
	printf("enter firstangle:");
	scanf("%d",&firstangle);
	printf("enter secondangle:");
	scanf("%d",&secondangle);

	thirdangle=180-(firstangle+secondangle);
	printf("thirdangle:%d",thirdangle);
	
	
}
