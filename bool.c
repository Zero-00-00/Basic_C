#include <stdio.h>
//includes standerd input output header file
#include <stdbool.h>

int main()
{
	bool x= (!true && false) || (!false && true);
	printf("%d", x);
}
