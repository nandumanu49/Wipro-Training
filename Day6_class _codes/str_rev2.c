//programm t0 reverse a string through func and display
#include <stdio.h>
#include <string.h>
void reverse(char *);
int main()
{
	char str[30];
	printf("\n Enter the string-");
	fgets(str,29,stdin);
	reverse(str); //passing base address of string to function
	
	return 0;
}
void reverse(char *ptr)
{
	//reversing using index
	for(int i=strlen(ptr)-1;i>=0;i--)
	{
		printf("%c ",ptr[i]);
	}
	printf("\n");
	// rev using a pointer
	char *ptr1;
	for(ptr1=ptr+(strlen(ptr)-1);ptr1>=ptr;ptr1--)
	{
		printf("%c",*ptr1);
	}
	return 0;
}
