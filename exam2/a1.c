#include<stdio.h>
#include<conio.h>

void main()
{
	int n,revers,ld;
	
       printf("enter n:");
       scanf("%d",&n);
       
       while(n>0)
       {
       	 ld=n%10;
       	 revers=(revers*10)+ld;
       	 n=n/10;
	   }
	   printf("enter is %d",revers-ld);
}
