#include<stdio.h>

int main()
{
	int a,b,c;
	printf("Enter value of a,b,c: ");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b && a>c)
	{
		if(b>c)
		{
			printf("b is second largest");
		}
		else
		{
			printf("c is second largest");
		}
	}
	else if(b>a && b>c)
	{
		if(a>c)
		{
			printf("a is second largest");
		}
		else
		{
			printf("c is secondlargest");
		}
	}
	else
	{
		if(a>b)
		{
			printf("a is second largest");
		}
		else
		{
			printf("b is second largest");
		}
	}
	return 0;
}
