#include<stdio.h>
int main()
{
	int i,n,a[50];
	printf("enter n :");
	scanf("%d",&n);
	printf("enter array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	printf("reverse of the elements:");
	for(i=n-1;i>=0;i--)
	{
		printf("%d ",a[i]);
	}
	
}
	
