#include <stdio.h>
void show();//prototype
int main()
{
	void (*pf)();//pointer to function declaration
	pf=&show;//assign pf with teh address of show
	(*pf)();//func call;through pointer to function
}
void show()
{
	printf("n Hello All\n");
}
