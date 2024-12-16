//Take string input as single or multiple words
#include <stdio.h>
#include <string.h>

int main()
{
	char str1[30]="hello",str2[30]="nandu";
	printf("Enter the two string-");;
	printf("%s %s",str1,str2);
	int rv=strcmp(str1,str2);
	if(rv>0)
	{
		printf("%s the first string is big\n",str1);
	}
	else if(rv<0)
	{
		printf("\n%s the second string is big\n",str2);
	}
	else
	{
		printf(" both are equal");
	}

	return 0;
}
