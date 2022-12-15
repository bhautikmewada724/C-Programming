#include<stdio.h>

int main()
{
	int i,mul=1,n;
	
	printf("Enter value of n: ");
	scanf("%d",&n);
	
	printf("Table of given number is:\n");
	
	for(i=1;i<=10;i++)
	{	
		mul=n*i;
		
		printf("%d*%d=%d\n",n,i,mul);
	}
	return 0;
}
