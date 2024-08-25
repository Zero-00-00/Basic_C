#include <stdio.h>
#include <stdlib.h>
void main()
{
	int n;
	char s;
	printf("Enter the number you wanna check: ");
	scanf("%d", &n);
	
	if (n%2==0)
		{
		s='A';
		printf("Set: %c\n", s);
		}
	else if (n%3==0)
		{
		s='B';
		printf("Set: %c\n", s);
		}
	else if (n%4==0)
		{
		s='C';
		printf("Set: %c\n", s);
		}
	else 
		printf("The provided number does not belong in any of the given sets\n");
}
