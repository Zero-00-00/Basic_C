#include <stdio.h>

double pow1(double a, double b)
{
	double s=1;

	for (int i=0; i<b; i++)
	{
		s*=a;
	}
	return s;
}

void main()
{
	double a, b, p;

	printf("Enter the a, b: ");
	scanf("%lf %lf", &a, &b);
	p=pow1(a, b);
	printf("%.1lf\n", p);
}
