#include <stdio.h>
int main()
{
	int var1,var2;
	printf("Enter two numbers-");
	scanf("%d %d" ,&var1,&var2);
	if(var1>var2)
	{
		printf("%d is the big number" ,var1);
	}

	else
	{
		printf("%d is the big number" ,var2);
	}
}
