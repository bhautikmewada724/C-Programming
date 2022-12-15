#include<stdio.h>

int main()
{
	int i,j,k,n;
	char ch='A';
	
	printf("Enter value of n:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			for(j=1;j<=1;j++)
			{
				printf(" %c",ch);
				ch++;
			}
		}
		else
		{
			for(k=1;k<=i;k++)
			{
				printf( "%d",k);
			}
		}
		printf("\n");
	}
	return 0;
}
