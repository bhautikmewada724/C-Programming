#include <stdio.h>

int main()
{
    int a[100],i,n,tofnd;
   
    printf("Enter size of the  array : ");
    scanf("%d", &n);
    
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the No To find array : ");
    scanf("%d", &tofnd);
     
    for(i=0; i<n; i++)
    {
        if(a[i]==tofnd)
        {
			printf("Element found in Array");
            return 0;		 
        }
 
    }
	printf("Element found in Array");
}
