#include<stdio.h>

int main()
{
	int i,j,k=1,n;
	
	printf("Enter value of n:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",k);
			k++;
			printf(" ");
		}		
		printf("\n");
	}
	return 0;
}
