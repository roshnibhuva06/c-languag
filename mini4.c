#include<stdio.h>
#include<conio.h>

void main()

{
	int maths,english,science;
	float Averagemarks,per;
	printf("enter mark maths:");
	scanf("%d",&maths);
	printf("enter mark english:");
	scanf("%d",&english);
	printf("enter mark science:");
	scanf("%d",&science);
	
	Averagemarks=maths+english+science;
    per =Averagemarks*100/300;
	printf("%.2f",per);
	
}
