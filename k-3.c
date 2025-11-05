#include<stdio.h>
int main()
{
  float s1,s2,s3,s4,s5,average;
  printf("enter marks for subject 1:");
  scanf("%f",&s1);
  printf("enter marks for subject 2:");
  scanf("%f",&s2);
  printf("enter marks for subject 3:");	
  scanf("%f",&s3);
  printf("enter marks for subject 4:");
  scanf("%f",&s4);
  printf("enter marks for subject 5:");
  scanf("%f",&s5);
  average=(s1+s2+s3+s4+s5)/5;
  printf("Average is:%.3f",average);
   
  return 0;
	
}
