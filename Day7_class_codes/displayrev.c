#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *fp;
	char ch;
	long int pos;
	if((fp=fopen("myfile","r"))==NULL)
	{
		printf("\nCan't open file\n");
		return 1;
	}
	fseek(fp,-1L,2);
	pos=ftell(fp);
	while(pos>=0L)
	{
		ch=getc(fp);
		printf("%c\t",ch);
		pos--;
		fseek(fp,-2L,1);
	}
	fclose(fp);
}
