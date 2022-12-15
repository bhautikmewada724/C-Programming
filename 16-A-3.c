//3.Read and store the roll no and marks of 20 students using 2D array.

#include<stdio.h>
 
int main()
{
 	int Size, i, j = 0, a[10];
 	int Positive_Count = 0, Negative_Count = 0, Zero_Count = 0;
 
 	printf("Enter the Size of an Array :  ");
 	scanf("%d",&Size);
 
 	printf("Enter the Array Elements\n");
 	for(i=0;i<Size; i++)
 	{
      scanf("%d", &a[i]);
	}
  
 	while(j<Size)
 	{
   		if(a[j] >= 0)
   		{	
 			Positive_Count++;
   		}
   		else if(a[j] <= 0)
   		{
 			Negative_Count++;
   		}
   		else
   		{
   			Zero_Count++;
		}
   		j++;
 	}	
  
 		printf("Total Number of Positive Numbers in this Array = %d\n", Positive_Count);
 		printf("Total Number of Negative Numbers in this Array = %d\n", Negative_Count);
 		printf("Total Number of Zero in this Array = %d", Zero_Count);
 		
		return 0;        
}
