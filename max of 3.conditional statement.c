#include<stdio.h>
int main()
{
	int a,b,c,max;
	printf("enter a,b,c values");
	scanf("%d %d %d",&a,&b,&c);     //max of 3 numbers using conditional statements
	max=a>b?(a>c?a:c):(b>c?b:c);
	printf("largest number is:%d",max);
	return 0;
}
