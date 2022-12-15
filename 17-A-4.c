#include<stdio.h>

int main()
{
	int a,b,c;
	
	printf("Enter value of a and b:\n");
	scanf("%d %d",&a,&b);
	
	int *ptr,*ptr1,*ptr2;
	
	ptr1=&a;
	ptr2=&b;
	int temp;
	
	temp=ptr1;
	ptr1=ptr2;
	ptr2=temp;
	
//	printf("%d\n",ptr);
//	printf("%d\n",ptr1);
//	printf("%d",ptr2);
	
	
	printf("A=%d\n",*ptr1);
	printf("B=%d",*ptr2);
	
	return 0;
}
