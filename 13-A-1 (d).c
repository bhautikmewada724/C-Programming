#include<stdio.h>

int main()
{
	int i,j,k,n;
	
	printf("Enter value of n: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(k=n-1;k>=i;k--)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	return 0;
}
