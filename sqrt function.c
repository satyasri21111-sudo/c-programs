#include<stdio.h>
#include<math.h>
int main()
{
	int num;
	float result;
	printf("enter a number");
	scanf("%d",&num);
	result=sqrt(num);   //using sqrt from math.h function
	printf("%.2f",result);
	return 0;
		
}
