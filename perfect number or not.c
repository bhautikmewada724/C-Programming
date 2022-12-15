#include <stdio.h>

int main()
{
	int i=1,n,sum=0;
		printf("Enter value of n: ");
		scanf("%d",&n);
		
		while(i<n)
		{
			if(n%i==0){
				sum=i+sum;
			}
			i++;
		}
		if(sum==n){
			printf("Perfect Number");
		}
		else
		{
			printf("Not Perfect");
		}
		return 0;
}
