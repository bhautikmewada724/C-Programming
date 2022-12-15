# include<stdio.h>

int main()
{
	int P,C,M;
	float avg;
	
	printf("Enter value of P,C,M: ");
	scanf("%d %d %d",&P,&C,&M);
	
	avg=(P+C+M)/3;
	
	if(avg>85)
	{
		printf("Grade A");
	}
	else if(avg>75)
	{
		printf("Grade B");
	}
	else if(avg>50)
	{
		printf("Grade C");
	}
	else
	{
		printf("Fail");
	}
	return 0;
}
