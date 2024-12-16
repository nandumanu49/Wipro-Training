#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
	FILE *p;
	char ch;
	if((p=fopen("test","r+"))==NULL)
	{
		printf("\n Cannot open file for operations\n");
		return 1;
	}
	while((ch=getc(p))!=EOF)
	{
		if(islower(ch))
		{
			ch=toupper(ch);
			fseek(p,-1L,1);
			putc(ch,p);
		}
	}
	printf("\n Changes are done in file ...\n");
	rewind(p);
	while((ch=getc(p))!=EOF)
	{

