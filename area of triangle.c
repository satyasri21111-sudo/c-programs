#include<stdio.h>
int main()
{
	float length,height,area;
	printf("enter the length");
	scanf("%f",&length);
	printf("enter height");
	scanf("%f",&height);
	area=0.5*length*height;
	printf("area of triangle is:%f",area);
	return 0;
	
}
