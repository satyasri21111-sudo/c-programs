#include<stdio.h>
int main()
{
	int a;
	printf("enter a number");   //**even or odd**//
	scanf("%d",&a);
	{	
	if(a%2==0)
	printf("\n%d is even number",a);
	else
	printf("\n%d is odd number",a);}
	return 0;
}
