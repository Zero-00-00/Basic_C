#include <stdio.h>

int main()
{
	char al[]={'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H' ,'I' ,'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V','W', 'X', 'Y', 'Z', 'a' ,'b' ,'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	char di[]={'0','1','2','3','4','5','6','7','8','9'};
	char sp[]={ '+', '-', '&', '|', '!', '(', ')', '{', '}', '[', ']', '^', '~', '*', '?', ':'};
	
	char c;
	int j;
	
	printf("Enter the Charecter: ");
	scanf("%c", &c);
	
	for (int i=0; i<(sizeof(al)); i++)
	{
		if (c==al[i])
			printf("Alphabet\n");
	}
	
	for (int i=0; i<(sizeof(di)); i++)
	{
		if (c==di[i])
			printf("Digit\n");
	}
	
	for (int i=0; i<(sizeof(sp)); i++)
	{
		if (c==sp[i])
			printf("Special Charecter\n");
	}
}
