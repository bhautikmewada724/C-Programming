//2. Enter basic salary of an employee and calculate Gross salary according to given conditions:
//- Basic Salary >= 10000 : HRA = 20% of basic, DA = 80% of basic
//- Basic Salary >= 20000 : HRA = 25% of basic, DA = 90% of basic
//- Basic Salary >= 30000 : HRA = 30% of basic, DA = 95% of basic

#include<stdio.h>

int main()
{
	int basic,hra,da,gross;
	
	printf("Enter value of basic: ");
	scanf("%d",&basic);
	
	if(basic>=10000)
	{
		hra=0.2*basic;
		da=0.8*basic;
		gross=basic+hra+da;
	}
	else if(basic>=20000)
	{
		hra=0.2*basic;
		da=0.9*basic;
		gross=basic+hra+da;
	}
	else if(basic>=30000)
	{
		hra=0.3*basic;
		da=0.95*basic;
		gross=basic+hra+da;
	}
	else
	{
		printf("Invalid Information\n");
	}
	printf("gross=%d",gross);
	return 0;
}
