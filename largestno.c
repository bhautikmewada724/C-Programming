#include<stdio.h>

int main()
{
	int a,b,c;
	printf("Enter value of a,b,c: ");
	scanf("%d %d %d",&a,&b,&c);
	
	(a>b)?((a>c)?printf("a is maximum"):printf("c is maximum")):((b>c)?printf("b is maximum"):printf("c is maximum"));
	return 0;
}
