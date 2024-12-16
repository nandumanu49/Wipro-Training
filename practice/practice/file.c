#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
	FILE *p;
	char ch;
	if((p=fopen("test","r"))==NULL)
	{
		printf("\nCan't open file\n");
		return 1;
	}
	int ch,lines=0,words=0,charcters=0;
	int in_word=0;

	while((ch=getc(p))!=EOF)
	{
		charcters++;
		if(ch=='\n')

