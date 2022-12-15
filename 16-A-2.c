//2. Count number of positive, negative and zero elements from 3 X 3 matrix.

#include<stdio.h>

int main()
{
    int countPositive=0, countNegative=0, countZero=0, arr[10],i,n;
    printf("Enter 10 Numbers: ");
    for(i=0; i<10; i++)
        scanf("%d", &arr[i]);
    for(i=0; i<n; i++)
    {
        if(arr[i]<0)
            countNegative++;
        else if(arr[i]>0)
            countPositive++;
        else
            countZero++;
    }
    printf("\n Count of Positive Numbers = %d", countPositive);
    printf("\n Count of Negative Numbers = %d", countNegative);
    printf("\n Count of Zero = %d", countZero);
   
    return 0;
}
