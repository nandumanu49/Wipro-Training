#include <stdio.h>
#include <stdlib.h>
typedef struct employee
{
	int eno;
	char name[20];
	double salary;
}em;

int main()
{
	em *ptr,*ptr1;
	ptr1=(em *) calloc(3,sizeof(em)); //Dynamically allocating memory for 3 struct variables

	for(ptr=ptr1;ptr<=ptr1+2;ptr++)
	{
		printf("Enter empno name and salary for employee %d =",(ptr-ptr1)+1);
		scanf("%d %s %lf",&ptr->eno,ptr->name,&ptr->salary);
	}

	printf("\nEMPLOYEE NO        NAME        SALARY\n ");
	for(ptr=ptr1;ptr<=ptr1+2;ptr++)
	{
		 printf("\n%d           %s            %lf\n",ptr->eno,ptr->name,ptr->salary);
	}




}
