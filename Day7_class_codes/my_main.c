#include <stdio.h>
#include "myheader.h"
int main()
{
	int choice=0,num1,num2;
	printf("Enter two Numbers:");
	scanf("%d %d" ,&num1,&num2);
	while(choice!=5)
	{
		printf("\n 1.add\n 2.sub\n 3.mul \n 4.div\n 5.exit\n");
		printf("Enter choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: add(num1,num2);
				break;
			case 2: sub(num1,num2);
				break;
			case 3: mul(num1,num2);
				break;
			case 4: div(num1,num2);
				break
