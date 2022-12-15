//3.Count number of even or odd number from an array of n numbers.


#include<stdio.h>

int main()
{
	int num[100],n,i,evencount,oddcount;
	
	printf("Enter array element=");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
	printf("Enter array element=");
	scanf("%d",&num[i]);
	
	if(num[i]%2==0)
	{
		printf("Number is Even\n");
		evencount++;
	}
	else
	{
		printf("Number is Odd\n");
		oddcount++;
	}
	}
	printf("Evencount are %d\n",evencount);	
	printf("Oddcount are %d",oddcount);
	return 0;
}
