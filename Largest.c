#include <stdio.h>

float main()
{
	//printf("Hello World\n");
	
	float a, b, c;
	printf("Enter the numbers: ");
	scanf("%f %f %f", &a, &b, &c);
	
	if (a>b)
	{
		printf("%.2f is the largest\n", a);
	}
	else
	{
		if (b>c)
		{
			printf("%.2f is the largest\n", b);
		}
		else
		{
			printf("%.2f is the largest\n", c);
		}
	}
}
