#include <stdio.h>

int main()
{
	int n, e, sum=0;
	
	printf("Enter the number of elements: ");
	scanf("%d", &n);
	int arr[n];
	
	for (int i=0; i<n; i++)
	{
		printf("Enter %d Element: ", i+1);
		scanf("%d", &e);
		arr[i]=e;
	}
	
	for (int i=0; i<n; i++)
	{
		sum+=arr[i];
	}
	
	printf("The Summation is: %d\n", sum);
}
