#include <stdio.h>
int add(int,int);
int main()
{
	int (*p)(int,int);
	p=add; //address of add function is aassigned to function pointer p
	int a=90,b=100;
	printf("\n%d+%d=%d\n",a,b,(*p)(a,b));
	return 0;
}
int add(int a, int b)
{
	return (a+b);
}
