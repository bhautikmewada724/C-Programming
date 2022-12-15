//2. Determine the roots of the equation ax2+bx+c=0.


# include<stdio.h>
#include<math.h>

int main()
{
	float a,b,c,delta,root1,root2;
	
	printf("Enter value of a,b,c: ");
	scanf("%f %f %f",&a,&b,&c);
	
	delta=b*b-(4*a*c);
	printf("%f",delta);
	if(delta>0)
	{
		root1= (-b+sqrt(delta))/2*a;
		root2= (-b-sqrt(delta))/2*a;
		
		printf("\nroot 1=%f",root1);
		printf("\nroot 2=%f",root2);
	}
	else if(delta<0)
		{
			root1=-b/2*a;
			root2=sqrt(delta)/2*a;
			printf("\nroot 1=%f-i%f\n",root1,root2);
			printf("\nroot 2=%f+i%f\n",root1,root2);
		}
	else
		{
			root1=-b/2*a;
			root2=-b/2*a;
			
			printf("\nroot 1=%f",root1);
			printf("\nroot 2=%f",root2);
		}
	return 0;
}
