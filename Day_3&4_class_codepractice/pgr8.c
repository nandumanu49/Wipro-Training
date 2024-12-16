#include <stdio.h>
int main()
{
	int a=1,b=1;
	while(a<=5)
	{
		b=1;
		while(b<=a)
		{
			printf("%2d" ,b);
			b++;
		}
		printf("\n");
		a++;
	}
	return 0;
}

