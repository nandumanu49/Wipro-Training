#include <stdio.h>
#include <string.h>
int main()
{
	char str[30],revstr[30];
	int i,j;

	printf("\n Enter the string-");
	fgets(str,29,stdin);

	for (i=0,j=strlen(str)-1;j>=0;i++)
	{
		revstr[i]= str[j];
	}
	revstr[i]='\0';
	if(strcmp(str,revstr)==0)
	{
		printf("str palindrome.\n");
	}
	else
	{
		printf("The str is not palindrome\n");
	}
	return 0;
}
