#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
	FILE *p,*p1;
	char f1[20],f2[20];
	printf("Enter f1 file name:");
	scanf("%s",f1);
	printf("Enter f2 file name:");
	scanf("%s",f2);
	char ch;


	p=fopen(f1,"r");
	if(p==NULL)
	{
		printf("err: unable to open \n",f1);
		exit(1);
	}
	p1=fopen(f2,"a");
	if(p1==NULL)
	{
		printf("err: unable to open :\n",f2);
		fclose(p);
		exit(1);
	}
	while((ch=getc(p))!=EOF)
	{
		putc(ch,p1);
		//if(toupper(ch)!='A' && toupper(ch)!='E' && toupper(ch)!='I' && toupper(ch)!='O' && toupper(ch)!='U')
	}
	fclose(p);
	fclose(p1);
	return 0;
}


