#include <stdio.h>
#pragma pack(1)
struct student
{
   int x;
   char a;
   char b;
   int m;
} stud1;

int main()
{
	printf("\n size is-%lu\n",sizeof(stud1));
	return 0;
}
