#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n;
	float avg,sum=0;
     
      printf("enter n:");
      scanf("%d",&n);
      
      int a[n]; 
	
	for(i=0;i<n;i++)
	{
		printf("enter a[%d]:",i);
		scanf("%d",&a[i]);
	}

	

	
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
		
	}
		avg=sum/n;
	printf("avg of arrey %.2f",avg);
	
}
