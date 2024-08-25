#include <stdio.h>

int lcm(int a, int b)
{
	int i=1, lcm;
	do
	{
		if ((i%a==0)&&(i%b==0))
		{
			lcm=i;
			break;
		}
		i++;
	}while(1);
	return lcm;
}


int main()
{
	int x, y, gcd;
	
	printf("Enter the two numbers: ");
	scanf("%d %d", &x, &y);
	
	printf("\nThe LCM is %d\n", lcm(x, y));
	
	gcd=((x*y)/(lcm(x, y)));
	printf("The GCD is %d\n", gcd);
	
	
}
