//1.Read n numbers from user and print in normal and reverse order.


#include<stdio.h>


int main()
{
	int num[100],n,i;
	printf("Enter number of array elements=");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
	printf("Enter array element=");
	scanf("%d",&num[i]);
	}
	
	for(i=n-1;i>=0;i--)
	{
	printf("%d\n",num[i]);
	}
	return 0;
}
