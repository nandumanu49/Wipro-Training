#include <stdio.h>
int add(int,int);
int main()
{
	int(*p)(int,int);
	p=add;//address of add function is assigned to pointer p
	int a=90,b=100;
	printf("\n%d+%d=%d\n",a,b,(*p)(a,b));
}
int add(int a, int b)
{
	return(a+b);
}
