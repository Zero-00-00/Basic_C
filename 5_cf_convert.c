#include <stdio.h>

int c2f(int);
int f2c(int);

int main()
{
	char v;
	int c, f;
	
	printf("Input is in c/f: ");
	scanf("%c", &v);
	
	if (v=='c')
	{
		printf("Enter the Centigrade Value: ");
		scanf("%d", &c);
		printf("Fahrenheit Value: %dF\n", c2f(c));
	}
	else if (v=='f')
	{
		printf("Enter the Fahrenheit Value: ");
		scanf("%d", &f);
		printf("Centigrade Value: %dC\n", f2c(f));
	}
	else
		printf("Invalid Input");
}

int c2f(int c)
{
	return ((c*(9/5))+5);
}

int f2c(int f)
{
	return ((f-32)*(5/9));
}
