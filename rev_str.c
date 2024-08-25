#include <stdio.h>

int main()
{
	char str[100];
	int len; 
	printf("Enter your string: ");
	scanf("%[^\n]s", str);
	
	for (len=0; str[len]!='\0'; len++);
	
	for (int i=0; (i<=((len/2)-1)); i++)
	{
		char temp=str[i];
		str[i]=str[len-i-1];
		str[len-i-1]=temp;
	}
	
	printf("%s\n", str);
}
