#include<stdio.h>
int main()
{
	int a=10;
	int *p=&a;
	int **ptr=&p;
	int ***ptrs=&ptr;
	
	printf("%d",a);
	printf("\n%d",*p);
	printf("\n%d",**ptr);
	printf("\n%d",***ptrs);
}
