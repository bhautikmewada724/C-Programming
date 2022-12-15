//2.Count number of positive or negative number from an array of n numbers

#include<stdio.h>

int main()
{
	int num[100],n,i;
	 printf("Enter value of array:");
	 scanf("%d",&n);
	 
	for(i=0;i<n;i++)
	{
	printf("Enter array element=");
	scanf("%d",&num[i]);
	
	if(num[i]>0)
	{
		printf("Number is positive\n");	
	}
	else
	{
		printf("Number is Negative\n");
	}
	}
	return 0;
}
