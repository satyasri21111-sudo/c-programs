#include<stdio.h>
int main()
{
	int i,n=0,sum,num[50]={1,2,3,4,5,6};
	num[3]=8;
	sum=0;
	for(i=0;i<=5;i++)
	{
		n+=num[i];
	}
	sum=n;
	printf("\nsum is:%d",sum);
	return 0;
	
	
}
