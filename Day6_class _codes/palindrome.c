#include <stdio.h>
#include <string.h>
int main()
{
	char str[30],revstr[30];
	int i, j;
	

	printf("\n Enter the string-");
	fgets(str,29,stdin);	

	for(int k=0;str[k] !='\0';k++)
	{
		if(str[k]=='\n')
		{
			str[k]='\0';
			break;
		}
	}

	for (i=0,j=strlen(str)-1;j>=0;i++,j--)
	{
		revstr[j]= str[i];
	}
	revstr[j]='\0';
	printf("-%s- -%s-\n",str,revstr);
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

