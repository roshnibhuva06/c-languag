#include<stdio.h>
#include<conio.h>

void main()
{
	//write a c program to print totle number of days in a month using switch case.
	
	int  choice;
	
	printf("enter is a month:");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1: printf("enter %d is a month are 30 day",choice);
		break;
		case 2: printf("enter %d is a month are 28 day",choice);
		break;
		case 3: printf("enter %d is a month are 30 day",choice);
		break;
		case 4: printf("enter %d is a month are 31 day",choice);
		break;
		case 5: printf("enter %d is a month are 30 day",choice);
		break;
		case 6: printf("enter %d is a month are 31 day",choice);
		break;
		case 7: printf("enter %d is a month are 30 day",choice);
		break;
		case 8: printf("enter %d is a month are 31 day",choice);
		break;
		case 9: printf("enter %d is a month are 30 day",choice);
		break;
		case 10: printf("enter %d is a month are 31 day",choice);
		break;
		case 11: printf("enter %d is a month are 30 day",choice);
		break;
		case 12: printf("enter %d is a month are 31 day",choice);
		break;
		default:printf("enter valid num");
	}
}
