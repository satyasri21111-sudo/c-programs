#include<stdio.h>
int main()
{ 
int sum,num,rem,n;
printf("enter a five digit number");
scanf("%d",&num);
sum=0;
n=num;
while(num!=0)
{
	rem=num%10;
	sum+=rem;
	num=num/10;
}
printf("sum of %d is: %d",n,sum);
return 0;
}
