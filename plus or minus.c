#include<stdio.h>

void main()
{
	int a;
	printf("Enter value of a: ");
	scanf("%d",&a);
	
	if(a>0)
	{
		printf("Positive no.");
	}
	else if(a==0)
	{
		printf("Zero");	
	}
	else
	{
		printf("Negative no.");
	}
}
