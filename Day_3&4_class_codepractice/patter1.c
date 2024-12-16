#include <stdio.h>
int main()
{
	for(int i = 0; i<4; i++)
	{
		for(int j=10 -i; j<=10;j++)
		{
			printf("%4d" ,j);
			
		}
		printf("\n");
	}
	return 0;
}

