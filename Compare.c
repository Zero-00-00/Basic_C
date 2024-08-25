#include<stdio.h>

int main()
{
	char str1[100], str2[100];
	int len1, len2; 
	printf("Enter your first string: ");
	scanf("%[^\n]s", str1);
	printf("Enter your second string: ");
	scanf("%[^\n]s", str2);
	
	for (len1=0; str1[len1]!='\0'; len1++);
	for (len2=0; str2[len2]!='\0'; len2++);
	
	if (len1!=len2) 
	{
		printf("Strings not Equal");
	}
}
