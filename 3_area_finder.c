#include <stdio.h>

int tri(int, int);
int sq(int);
int rect(int, int);

int main()
{
	int c, l, s, b, h, ba;
	printf("1. Triangle\n2. Square\n3. Rectangle\nWhat do you want? ");
	scanf("%d", &c);
	if (c==1)
	{
		printf("Enter the Base & Height: ");
		scanf("%d %d", &ba, &h);
		printf("Area= %d\n", tri(ba,h));
	}
	else if (c==2)
	{
		printf("Enter the side: ");
		scanf("%d", &s);
		printf("Area= %d\n", sq(s));
	}
	else if (c==3)
	{
		printf("Enter the length & breadth: ");
		scanf("%d %d", &l, &b);
		printf("Area= %d\n", rect(l, b));
	}
	else
		printf("Wrong Input");
}

int tri(int b, int h)
{
	return (0.5*b*h);
}

int sq(int s)
{
	return (s*s);
}

int rect(int l, int b)
{
	return (l*b);
}
