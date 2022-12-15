#include<stdio.h>

int main()
{
	int a=10;
	int *pointer;
	
	pointer=&a;
	
  	printf("Value of A = %d\n", *pointer);
  	printf("Address of A = %d\n", pointer);
  			
	return 0;
}
