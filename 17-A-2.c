#include<stdio.h>
                                                                                
int main()                                                                     
{                                                                               
    char ch, *chptr;                                                              
    int i, *iptr;                                                                 
    float f, *fptr;                                                              
    printf("Enter character: ");                                                
    scanf("%c", &ch); 
	
	 chptr = &ch; 
	 printf("\nAddress contained in chptr: %u", chptr);   
	 printf("\nValue of ch using ch pointer: %c", *chptr);                                                      
                                                                                
    printf("\n\nEnter integer: ");                                                
    scanf("%d", &i);  
	
	iptr = &i;          
	printf("\nAddress contained in iptr: %d", iptr);  
	printf("\nValue of i using i pointer: %d", *iptr);                                              
                                                                                
    printf("\n\nEnter float: ");                                                  
    scanf("%f", &f);                                                           
                                                                                                                                                                                                            
    fptr = &f;                                                                   
	printf("\nAddress contained in fptr: %u", fptr);                                
  	printf("\nValue of f using  pointer: %f", *fptr);   
	  
	return 0;                       
}     
