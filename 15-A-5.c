#include <stdio.h>

int main()
{
	char arr[100];
	int i,n;
	
	printf("Enter size of the  array : ");
    scanf("%d", &n);
    
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%c",&arr[i]);
    }
    
	printf("String array Elements are:\n");
	for (i=0; i<n; i++)
	{
		printf("%c\n", arr[i]);
	}
return 0;
}

