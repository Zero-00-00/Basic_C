#include <stdio.h>

int main()
{
	int k, n;
	printf("Enter the Number you want to reverse: ");
	scanf("%d", &n);
	while(n!=0)
	{
		k=n%10;
		n=n/10;
		printf("%d", k);
	}
	printf("\n");
}
