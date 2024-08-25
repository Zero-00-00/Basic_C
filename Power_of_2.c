#include<stdio.h>

void main()
{
	int n, s;
	
	printf("Enter the number: ");
	scanf("%d", &n);

	for (int i=0; i>=2; i/=2)
	{
		if (i%2==0)
			s=1;
		else
			s=0;
	}

	if (s==1)
		printf("%d is a power of 2\n", n);
	else
		printf("%d is not  a power of 2\n", n);
}
