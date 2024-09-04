#include<stdio.h>
#include<conio.h>
//with return with paramiter

	 int  sum (int a,int b)
	 {
	 	return a+b;
	 }
	 int sub(int a,int b)
	 {
	 	return a-b;
	 }
	 int multiply(int a,int b)
	 {
	 	return a*b;
	 }
	 int divide(int a,int b)
	 {
	 	return a/b;
	 }
	 int modul(int a,int b)
	 {
	 	return a%b;
	 }
void main()
{
	int choice,c,d,result,i=1,j,n;
	
	while(i==1)
	{
	printf("\npress 1 +\n");
	printf("press 2 -\n");
	printf("press 3 *\n");
	printf("press 4 /\n");
	printf("press 5 %\n");
	printf("press 0 for exit\n");
	
	 printf("enter choice:");
	 scanf("%d",&choice);
	 
	 if(choice==6)
	 {
	 	break;
	 }
	  printf("enter the first:");
	 scanf("%d",&c);
	 printf("enter second:");
	 scanf("%d",&d);
	 
	 switch(choice)
	 {
	 	case 1:
	 	result=sum(c,d);
	 	printf("sum of %d and %d is %d",c,d,result);
	 	break;
	 	
	 	case 2:
	 	result=sub(c,d);
	 	printf("sub of %d and %d is %d",c,d,result);
	 	break;
	 	
	 	case 3:
	 	result=multiply(c,d);
	 	printf("multiply of %d and %d is %d",c,d,result);
	 	break;
	 	
	 	case 4:
	 	result=divide(c,d);
	 	printf("divide of %d and %d is %d",c,d,result);
	 	break;
	 	
	 	case 5:
	 	result=modul(c,d);
	 	printf("modul of %d and %d is %d",c,d,result);
	 	break;
	 	
	 	default:
		 printf("exit");	
	 }
	 
	}
	
	printf("code closed");
}
	    
	
	 
	
	 
	 
	
	 
	
	 
	
	 
	
	    


