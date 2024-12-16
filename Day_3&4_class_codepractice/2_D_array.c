#include <stdio.h>
int main()
{
	int arr[3][4];
	for(int r=0;r<3;r++)
	{
		for(int c=0;c<4;c++)
		{
			printf("Enter the value for row %d col %d-" ,r+1,c+1);
			scanf("%d",&arr[r][c]);
		}
	}
	printf("Contents of the array\n");
	for(int r=0;r<3;r++)
	{
		for(int c=0;c<4;c++)
		{
			printf("Enter the value for row %d col %d-" ,r+1,c+1);
			scanf("%d",&arr[r][c]);
		}
	}


}
