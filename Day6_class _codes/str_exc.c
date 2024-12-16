//Take string input as single or multiple words
#include <stdio.h>
#include <string.h>

int main()
{
	char str[20];
	printf("Enter the string-");
	scanf("%s",str);
	printf("\nString is -%s\n",str);
	gets(str);
	fgets(str,19,stdin);
	printf("\nString is -%s\n",str);


	return 0;
}
