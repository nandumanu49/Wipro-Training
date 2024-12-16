#include <stdio.h>
#include <string.h>
typedef union employee
{
	int eno;
	char name[20];
	double salary;
}emp;

int main()
{
	emp  v1; //declring variable of struct employee type
	printf("Enter empno name and salary=");
	scanf("%d  %lf %s",&v1.eno,&v1.salary,v1.name);
	printf("Empno is %d name is %s salary is %8.2lf\n",v1.eno,v1.name,v1.salary);
}

