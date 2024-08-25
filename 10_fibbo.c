#include <stdio.h>

int main()
{
	int n, n1=0, n2=1, s;
	printf("Enter the number of terms: ");
	scanf("%d", &n);
	for (int i=0; i<n; i++)
	{
		printf("%d ", n1);
		s=n2;
		n2+=n1;
		n1=s;
	}
}
