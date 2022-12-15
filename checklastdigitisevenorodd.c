//4. Input an integer number and check the last digit of number is even or odd.

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
