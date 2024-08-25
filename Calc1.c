#include <stdio.h>

void main()
{
	char op;
	int a, b;
	printf("Enter operator: ");
	scanf("%c", &op);
	printf("Enter the two numbers: ");
	scanf("%d %d", &a, &b);
	
	switch (op)
	{
		case '+':
		printf("%d + %d = %d\n", a, b, a+b);
		break;

		case '-':
		printf("%d - %d = %d\n", a, b, a-b);
		break;

		case '*':
		printf("%d * %d = %d\n", a, b, a*b);
		break;
	
		case '/':
		if (b==0)
			{
				printf("ERROR\n");
				break;
			}
		else
			printf("%d / %d = %d\n", a, b, a/b);
			break;

		default:
		printf("Operator not found\n");
	}
}
