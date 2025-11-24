#include<stdio.h>
int main()
{
	int i,j,k,a[2][2],b[2][2],mul[2][2],r1,c1,r2,c2;
	printf("enter size of first matrix rows and column:");
	scanf("%d%d",&r1,&c1);
	printf("enter size of second matrix rows and column:");
	scanf("%d%d",&r2,&c2);
	if(c1==r2)
	{
	printf("enter first matrix elements");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	} 
		printf("enter second matrix elements");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
		for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
		mul[i][j]=0;
		for(k=0;k<c1;k++)
		{
		  mul[i][j]+=a[i][k]*b[k][j];
		}
	    }
	}
	printf("multiplication of matrices is:");
		for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
		  printf("%d\t",mul[i][j]);
		}
		printf("\n");
	}
}
else
{
	printf("matrix mul is not possible");
}

	return 0;
	
}
