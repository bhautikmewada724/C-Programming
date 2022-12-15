#include <stdio.h>    
     
int main()    
{         
    int arr1[10],i,n;            
    
    int arr2[i]; 
	
	printf("Enter size of Array:");
	scanf("%d",&n);
	
	printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr1[i]);
    }  
          
    for (i=0; i<n;i++) 
    
	{     
        arr2[i]=arr1[i];     
    }      
	    
    printf("Elements of original array: \n");    
    for (i=0;i<n;i++) 
	{     
        printf("%d\n", arr1[i]);    
    }           
    printf("Elements of new array: \n");    
    for (i = 0; i <n; i++) {     
        printf("%d\n", arr1[i]);    
    }    
    return 0;    
}    
