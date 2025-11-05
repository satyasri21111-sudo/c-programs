#include<stdio.h>
int main()
{
	float first,second;
	char op;
	printf("enter an operator(+,-,*,/):");
	scanf("%c",&op); 
	printf("enter two numbers:");
	scanf("%f %f",&first,&second);
	switch(op){
		case'+':
	     printf("%.1f+%.1f=%.2f",first,second,first+second);
	     break;
	    case'-':
	     	printf("%.1f-%.1f=%.2f",first,second,first-second);
	     	break;
	    case'*':
	    	printf("%.1f*%.1f=%.2f",first,second,first*second);
	    	break;
	    case'/':
	    	printf("%.1f/%.1f=%.2f",first,second,first/second);
	    	break;
	    	
	    	default:
	    		printf("error!!s");
	}
	return 0;
	
	
}
