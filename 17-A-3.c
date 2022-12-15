#include<stdio.h>

int main()
{
	int a,b;
	
	printf("Ente value of a and b: ");
	scanf("%d %d",&a,&b);
	
	int *ptr,*ptr1;
	
	ptr=&a;
	ptr1=&b;
	
	printf("Sum is:%d",*ptr+*ptr1);
	
	return 0;
}
