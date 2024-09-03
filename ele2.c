#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,n,a,[3][3]
	
	printf("enter the array row & column size:");
	scanf("%d",&n);
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("enter a[%d][%d]:",i,j);
			scanf("%d",&a[j][i]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
}
