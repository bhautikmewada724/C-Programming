#include<stdio.h>

int main()
{
	int i,n,fact=1;
	
	printf("Enter value of n: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("Factorial of given number is=%d",fact);
	return 0;
}
