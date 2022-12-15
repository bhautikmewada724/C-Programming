//1.Read n numbers from user and print in normal 

#include<stdio.h>

int main()
{
	int array[100],size,i;
	
	printf("Enter value of size: ");
	scanf("%d",&size);
	
	for(i=0;i<size;i++)
	{
	printf("Enter array element=");
	scanf("%d",&array[i]);
	}
	for(i=0;i<size;i++)
	{
	printf("%d\n",array[i]);
	}
	return 0;
}
