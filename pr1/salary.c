#include<stdio.h>
#include<conio.h>

void main()
{
	int salary,grosssalary,a,b,c;
	
	printf("enter your salary:");
	scanf("%d",&salary);
	
	int hra=10;
	int da=5;
    int ta=8;
    
   a =salary*hra/100;
   b =salary*da/100;
   c =salary*ta/100;
   
   grosssalary=salary+a+b+c;
   
	printf("%d",grosssalary,&grosssalary);

}
