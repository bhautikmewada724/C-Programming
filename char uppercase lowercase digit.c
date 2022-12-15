//3. Check whether the entered character is upper case, lower case, digit or any special character.

#include<stdio.h>

int main()
{
	char ch;
	
	printf("Enter value of ch: ");
	scanf("%c",&ch);
	if(ch>65 && ch<=90)
	{
		printf("Upper case");
	}
	else if(ch>97 && ch<=122)
	{
		printf("Lower case");
	}
	else if(ch>48 && ch<=57)
	{
		printf("Digit");
	}
	else
	{
		printf("Any Special Character");
	}
	return 0;
}
