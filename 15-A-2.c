#include <stdio.h>

int main()
{
    int array[100];
    int i,n,count=0;
    
    printf("Enter size of the array : ");
    scanf("%d", &n);
 
    for(i=0; i<n; i++)
    {
    	printf("Enter elements in array : ");
        scanf("%d", &array[i]);
    }
    for(i=0; i<n; i++)
    {
        if(array[i]<0)
        {
            count++;
        }
    }
    printf("\nTotal number of negative elements = %d", count);

    return 0;
}
