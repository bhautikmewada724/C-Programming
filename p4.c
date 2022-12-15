#include<stdio.h>

int main()
{
	int i,base,exponent,ans=1;
	
	printf("Enter value of base and exponent: ");
	scanf("%d %d",&base,&exponent);
	
	for(i=1;i<=exponent;i++)
	{
		ans=ans*base;
	}
	printf("Answer=%d",ans);
}
