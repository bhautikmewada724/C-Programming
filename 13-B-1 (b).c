#include<stdio.h>

int main()
{
	int n,i,j,k=1;
	
	printf("Enter value of n:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		k=i%2;
		for(j=1;j<=i;j++)
		{	 
			printf("%d",k);
			printf(" ");
			k=!k;
		}
		printf("\n");
	}
	return 0;
}
