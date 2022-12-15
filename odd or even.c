#include<stdio.h>

int main()
{
	int a;
	printf("Enter value of a: ");
	scanf("%d",&a);
	
	if(a/2==0)
	{
		printf("Even");
	}
	else
	{
		printf("Odd");
	}
	return 0;
}
