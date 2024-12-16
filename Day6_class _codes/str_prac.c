//programm t0 reverse a string and display
#include <stdio.h>
#include <string.h>
int main()
{
	char str[30];
	printf("\n Enter the string-");
	fgets(str,29,stdin);
	for(int i=strlen(str)-1;i>=0;i--)
	{
		printf(" %c", str[i]);
	}
	printf("\n");
	return 0;
}
