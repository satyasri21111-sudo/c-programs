#include<stdio.h>     //c program for register keyword
int display()
{
	register int a=10;
	a++;
    return a;
}
int main()
{
	printf("value of a: %d\n",display());
	printf("value of a: %d\n",display());
	printf("value of a: %d\n",display());
	return 0;
}
