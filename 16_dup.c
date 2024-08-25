#include <stdio.h>

int main()
{
	int n, e, a;
	
	printf("Enter the number of elements: ");
	scanf("%d", &n);
	int arr[n], dup[n];
	
	for (int i=0; i<n; i++)
	{
		printf("Enter %d Element: ", i+1);
		scanf("%d", &e);
		arr[i]=e;
	}
	
	printf("The Duplicate Elements: ");
	for (int i=0; i<n; i++)
	{
		for (int j=0; j<n; j++)
		{
			if (i!=j)
				if (arr[i]==arr[j])
					a=arr[i];
					dup[i]=a;
					
		}
	}
	
	for (int i=0; i<n; i++)
	{
		printf("%d ", dup[i]);
	}
	printf("\n");
}
