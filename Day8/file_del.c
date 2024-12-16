#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
	FILE *p,*p1;
	char fn[20];
	printf("Enter file name to remove vowels:");
	scanf("%s",fn);
	char ch;
	p=fopen("myfile","r");
	p1=fopen("temp","w");
	while((ch=getc(p))!=EOF)
	{
		if(toupper(ch)!='A' && toupper(ch)!='E' && toupper(ch)!='I' && toupper(ch)!='O' && toupper(ch)!='U')
		putc(ch,p1);
	}
	fclose(p);
	fclose(p1);
	remove("myfile");
	rename("temp",fn);
}


