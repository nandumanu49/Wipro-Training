#include <stdio.h>
typedef struct employee
{
	int eno;
	char name[20];
	double salary;
}em;

int main()
{
	em v1[3]; //an array of 3 struct employee type variables

	for(int i=0;i<3;i++)
	{
		printf("Enter empno name and salary for employee%d =",i+1);
		scanf("%d %s %lf",&v1[i].eno,v1[i].name,&v1[i].salary);
	}
	printf("\nEMPLOYEE NO        NAME        SALARY\n");
	for(int i=0;i<3;i++)
	{
		printf("\n%d      %s         %lf",v1[i].eno,v1[i].name,v1[i].salary);
	}

}
