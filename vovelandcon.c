#include<stdio.h>

int main()
{
	char ch,uppercase,lowercase;
	
	printf("Enter value of ch: ");
	scanf("%c",&ch);
	
	uppercase=(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U');
	lowercase=(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u');
	
	if(uppercase||lowercase)
	{
		printf("Vovel");
	}
	else
	{
		printf("Consonant");
	}
	return 0;
}
