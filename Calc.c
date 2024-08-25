#include<stdio.h>
int main()
{ 
        printf("NPTEL\n");

        do
        {
        	char a;
        	printf("Please enter the operand: ");
        	scanf("%c", &a);
        	int x, y;
        	printf("Enter the numbers: ");
        	scanf("%d %d", &x, &y);

        	if (a=="+")
        	{
                	printf("Result: %d", x+y);
        	}
        	else if (a=="-")
        	{ 
        	        printf("Result: %d", x-y);
        	}
		else if (a=="*")
        	{ 
        	        printf("Result: %d", x*y);
        	}
        	else if (a=="/")
        		{ 
        	        if (x==0 || y==0)
        	        {
        	        	printf("Sorry can't compute");
        	        }
        	        else
        	        {
        	        	printf("Result: %d", x/y);
        	        }
        }
}
