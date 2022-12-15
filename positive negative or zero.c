#include<stdio.h>

int main()
{
	int n=0;
	printf("Enter value of n: ");
	scanf("%d",&n);
	
	if(n>0)
	{
		printf("No. is positive");
	}
	else if(n==0)
	{
		printf("No. is zero");
	}
	else
	{
		printf("No. is Negative");
	}
	return 0;
}
