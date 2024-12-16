#include <stdio.h>
#include <malloc.h>
int main()
{
	double *ptr;
	ptr=(int *) malloc(sizeof(double)*5);
	printf("Enter double type values-");
	for(int i=0;i<5;i++)
	{
		scanf("%lf" ,ptr+i);
	}
	printf("\nThe values in the array\n");
	for(int i=0;i<5;i++)
	{
		printf("%lf",*(ptr+i));
	}
	free(ptr);
	ptr=NULL;
	return 0;
}
