#include<stdio.h>
int main()
{
	float A,B,c,d,e,f;
	printf("enter two numbers");
	scanf("%f",&A);
	scanf("%f",&B);
	c=A+B;
	d=A-B;
	e=A*B;
	f=(A/B);
	printf("\nsum is:%.0f",c);
	printf("\ndiff is:%.0f",d);
	printf("\nmul is:%.0f",e);
	printf("\ndiv is:%.2f",f);
	
}
