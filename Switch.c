#include <stdio.h>

void main()
{
	int a;
	printf("Enter the number: ");
	scanf("%d", &a);
	
	switch (a)
	{
		case 1:
			 printf("Number is one\n");
			break;
	
		case -1:
			printf("Number is Negative one\n");
			break;

		default:
			printf("Don't Care\n");
			break;
	}
}
