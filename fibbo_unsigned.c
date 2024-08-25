#include <stdio.h>

unsigned int main()
{
	unsigned int n, n1=0, n2=1, s;
	printf("Enter the number of terms: ");
	scanf("%u", &n);
	for (int i=0; i<n; i++)
	{
		printf("%u ", n1);
		s=n2;
		n2+=n1;
		n1=s;
	}
}
