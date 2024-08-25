#include <stdio.h>

int prime(int);

int main()
{
	int n1, n2;
	printf("Enter the Start & End Number: ");
	scanf("%d %d", &n1, &n2);
	for (;n1<n2;n1++)
	{
		if (prime(n1)==1)
			printf("%d ", n1);
	}
	printf("\n");
}

int prime(int n)
{
	int b;		
	
	if (n<2)
		b=0;
	else if (n==2)
		b=1;
	else if (n%2==0)
		b=0;
	else
		for (int i=1; (i<=((n*(0.5))+1)); i+=2)
		{
			if ((n/i)==0)
				b=0;
			else
				b=1;
		}
	
	return b;
}
