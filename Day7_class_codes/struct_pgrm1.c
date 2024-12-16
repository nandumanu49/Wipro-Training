#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *fp;
	char ch;
	fp=fopen("myfile","a");
	printf("\nEnter some charcters and then press enter \n");
	while((ch=getc(stdin))!='\n')
	{
		putc(ch,fp);
	}
	fclose(fp);
	printf("\nread data from fiel and display\n");
	fp=fopen("myfile","r");
	while((ch=getc(fp))!=EOF)
	{
		putc(ch,stdout);
	}
	fclose(fp);
	return 0;
}


