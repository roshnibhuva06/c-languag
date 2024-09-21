#include<stdio.h>
#include<conio.h>

void main()
{
	//c program to find sum of elements of a matrix.
	int i,j,n;
	
	printf("enter is a element:");
	scanf("%d",&n);
	
	int a[n][n],b[n][n],sum[n][n];
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("enter a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("enter b[%d][%d]",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
		}
	}
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
		   printf("%d ",sum[i][j]);
		}
	}

	
}
