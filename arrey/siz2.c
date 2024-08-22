#include<stdio.h>
#include<stdio.h>

void main()
{
	int n,i;
	
	printf("enter n: ");
	scanf("%d",&n);
	                     //74952
	                     //13173
	int a[n],b[n],c[n];
	
	for(i=0;i<n;i++)
	{
		printf("enter a: ");
		scanf("%d",&a[i]);
	}
	printf("/n");
	for(i=0;i<n;i++)
	{
		printf("enter b: ");
		scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++)
	{
		c[i]=a[i]+b[i];
	}
	for(i=0;i<n;i++)
	{
		printf("c=%d\n",c[i]);
	}
}
