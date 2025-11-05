#include<stdio.h>
#include<math.h>
int main()
{
	float p,t,r,ci;
	printf("enter principle amount");
	scanf("%f",&p);
	printf("enter time");
	scanf("%f",&t);
	printf("enter rate of interest");
	scanf("%f",&r);
	ci=p*(pow(1+r/100,t)-1);
	printf("compound interest is:%f",ci);
	return 0;
		
}
