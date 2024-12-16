#include <stdio.h>
void big(int);
void small(int);
void call_back(void(*p)(int),void (*q)(int),int);

int main()
{
	int num;
	printf("Enter a number-");
	scanf("%d" ,&num);
	call_back(big,small
	if(num>1000)
		call_back(big,num);//func call to func call back
	else
		call_back(small,num);//fun call to funccallback
	return 0;

}
void big(int n)
{
	printf("\n%d is a big num\n",n);
}
void small(int n)
{
	printf("\n%d is a big small\n",n);
}void call_back(void (*p)(int),int m)
{
	
	(*p)(m);
}
