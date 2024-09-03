#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,n,r,c,n1,sum;
	printf("enter the array row by both:");
	scanf("%d",&n);
	printf("enter the array column by both:");
	scanf("%d",&n);
	
	int a[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("enter a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	printf("enter the array row:");
	scanf("%d",&n1);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(n1==i)
			{
				printf("%d",a[i][j]);
				sum=sum+a[i][j];
			}
		}
		printf("\n");
	}
}
