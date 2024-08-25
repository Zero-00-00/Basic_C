#include <stdio.h>

int main()
{
	int m;
	char g='n';
	printf("Enter the Marks: ");
	scanf("%d", &m);
	
	if ((m>=0)&&(m<=100))
	{
		if (m>=90)
			g='A';
		else if ((m<90)&&(m>=80))
			g='B';
		else if ((m<80)&&(m>=70))
			g='C';	
		else if ((m<70)&&(m>=60))
			g='C';
		else
			g='F';		
	}
	else if (g=='n')
		printf("Invalid Input\n");
		
	if (g=='F')
		printf("Fail\n");
	else if (g=='n')
	{}
	else
		printf("Grade= %c\n", g);
}
