//1. Perform Addition, Subtraction, Multiplication and Division of 2 numbers as per user’s choice.

#include<stdio.h>

int main()
{
	int a,b,ans;
	char o;
	
	printf("Enter value of a,b,o: ");
	scanf("%d %d %c",&a,&b,&o);
	
	if (o=='+')
	{
		ans=a+b;
		printf("ans=%d",ans);
	}
	else if(o=='-')
	{
		ans=a-b;
		printf("ans=%d",ans);
	}
	else if (o=='*')
	{
		ans=a*b;
		printf("ans=%d",ans);
	}
	else if (o=='/')
	{
		ans=a/b;
		printf("ans=%d",ans);
	}
	else
	{
		printf("Invalid choice");
	}
	return 0;
}
