#include<stdio.h>

int main()
{
	int n,i,j,sum1=0,sum2=0;
	
	printf("Enter value of n: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			sum2=sum2+1;
		}
		sum1=sum1+sum2;
	}
	printf("%d",sum1);
	return 0;	
}
