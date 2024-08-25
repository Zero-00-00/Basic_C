#include <stdio.h>

int rev(int arr);
	
int main()
{
	int n, e, a;
	
	printf("Enter the number of elements: ");
	scanf("%d", &n);
	int arr[n], rev[n];
	
	for (int i=0; i<n; i++)
	{
		printf("Enter %d Element: ", i+1);
		scanf("%d", &e);
		arr[i]=e;
	}
	
	for (int i=0; i<=n; i++)
	{
		a=arr[(n-i)];
		rev[i]=a;
	}
	printf("Reversed Array: ");

	for (int i=1; i<=n; i++)
	{
		printf("%d ", rev[i]);
	}
	printf("\n");	
}

	
	

	
