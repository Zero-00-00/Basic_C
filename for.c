#include <stdio.h>
int main()
{
	int n;
	char str[20];
	printf("Enter number of times u wanna write: ");
	scanf("%d", &n);
	printf("What do u wanna print: ");
	fgets(str, 20, stdin);

	for (int i=0; i<n; i++)
	{
		printf("%s", str);
		printf("This is being written %d times\n", i+1);
	}
}
