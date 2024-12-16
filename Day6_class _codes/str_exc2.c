//Take string input as single or multiple words
#include <stdio.h>
#include <string.h>

int main()
{
	char str1[30]="HELLO",str2[30]="WIPRO",str3[30];
	printf("\nString is -%s and string2 is %s\n",str1,str2);
	// finding length of string using strlen()
	printf("Length of string is %lu and string2 is %lu\n",strlen(str1),strlen(str2));
	//joining two strings using strcat()
	strcat(str1,str2);
	printf("\n string joing is %s\n",str1);
	printf("\n string 1 befor e using strcpy() is -%s\n",str1);
	//copying string using strcpy()
	strcpy(str1,str2);
	printf("\n string 1 cpy is -%s\n",str1);
	return 0;
}
