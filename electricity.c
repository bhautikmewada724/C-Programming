//1. Input electricity unit charge and calculate the total electricity bill according to the given condition:
//- For first 50 units Rs. 0.50/unit
//- For next 100 units Rs. 0.75/unit
//- For next 100 units Rs. 1.20/unit
//- For unit above 250 Rs. 1.50/unit
//- An additional surcharge of 20% is added to the bill.

#include<stdio.h>

int main()
{
	int unit,tax;
	double price;
	float total_price;
	
	printf("Enter value of unit: ");
	scanf("%d",&unit);
	
	if(unit<=50)
	{
		price=unit*0.50;		
	}
	else if(unit<=150)
	{
		price=50*0.50+(unit-50)*0.75;
	}
	else if(unit<=250)
	{
		price=50*0.50+100*0.75+(unit-150)*1.20;
	}
	else
	{
		price=50*0.50+100*0.75+100*1.20+(unit-250)*1.50;
	}
	tax=price*0.20;
	total_price=price+tax;
	printf("Total Amt. of bill=%lf",total_price);
	return 0;
}
