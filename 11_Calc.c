#include <stdio.h>

int main()
{
	int n, n1, n2;
	
	printf("1. Addition\n2. Substraction\n3. Multiplication\n4. Divition\n5. Exit\nEnter your Choice: ");
	scanf("%d", &n);
	printf("Enter the Numbers: ");
	scanf("%d %d", &n1, &n2);
	
	switch(n)
	{
		case 1:
		printf("The Summation: %d\n", n1+n2);
		break;
		case 2:
		printf("The Difference: %d\n", n1-n2);
		break;
		case 3:
		printf("The Product: %d\n", n1*n2);
		break;
		case 4:
		printf("The Quotant: %d\n", n1/n2);
		break;
		default:
		printf("Invalid Input");
		break;
	}
}
