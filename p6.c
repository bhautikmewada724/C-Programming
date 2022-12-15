#include <stdio.h>

int main()
{
	char ch='a',ah='A';
	
	while(ah<='Z')
	{
		printf("%c",ah);
		ah++;
	}
	printf("\n");
	while(ch<='z')
	{		
		printf("%c",ch);
		ch++;
	}	
	return 0;
}
