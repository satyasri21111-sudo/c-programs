#include<stdio.h>
int main()
{
  float c,f;
  printf("Enter temperature in celsius");
  scanf("%f",&c);
  f=(c*9/5)+32;
  printf("fahrenheit temperature is:%.3f",f);
  return 0;
	
}
