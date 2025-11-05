#include<stdio.h>
int main()
{
	float l,b,area;
	printf("enter length");
	scanf("%f",&l);
	printf("enter breadth");
	scanf("%f",&b);
	area=l*b;
	printf("area of rectangle is:%.2f",area);
	return 0;
}
