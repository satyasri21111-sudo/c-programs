#include<stdio.h>
int main()
{
	int a[3][3],t[3][3],i,j,row,col;
	printf("enter no.of rows and columns");
	scanf("%d%d",&row,&col);
	printf("enter matrix elements:");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			t[j][i]=a[i][j];
		}
	}
		for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
		printf("%d\t",t[i][j]);
		}
		printf("\n");
	}
	return 0;
	
}
