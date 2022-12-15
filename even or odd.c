#include<stdio.h>

int main()
{
	int a,digit;
	printf("Enter value of a: ");
	scanf("%d",&a);
	
	digit=a%10;
	
	if(digit%2==0)
	{
		printf("Even");
	}
	else
	{
		printf("Odd");
	}
	return 0;
}
