#include<stdio.h>
int main()
{
   int n,i;
  int student[i];
  printf("enter array size");
  scanf("%d",&n);
  
  printf("enter marks of the students");
  for(i=1;i<=n;i++)
  {
  	scanf("%d",&student[i]);
  }
  for(i=1;i<=n;i++)
  {
  	printf("\nmarks of students:%d",student[i]);
  }
   return 0;
}
