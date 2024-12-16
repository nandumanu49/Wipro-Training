#include <stdio.h>
typedef struct date_of_birth
{
	int day;
	int mon;
	int year;
}dob;
typedef struct employee
{
	int eno;
	char name[20];
	double salary;
	dob bd;
}em;

int main()
{
	em v1[3];

	for(int i=0;i<3;i++)
	{
		printf("Enter empno name and salary for employee%d =",i+1);
		scanf("%d %s %lf",&v1[i].eno,v1[i].name,&v1[i].salary);
		printf("\nEnter data of birth as day month year-\n");
		scanf("%d %d %d",&v1[i].bd.day,&v1[i].bd.mon,&v1[i].bd.year);
	}

	printf("\nEMPLOYEE NO        NAME       SALARY  BIRTHDAY\n ");
	for(int i=0;i<3;i++)
	{
		 printf("\n%d           %s            %lf  %d-%d-%d",v1[i].eno,v1[i].name,v1[i].salary,v1[i].bd.day,v1[i].bd.mon,v1[i].bd.year);
	}




}
