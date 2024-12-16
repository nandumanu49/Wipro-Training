#include <stdio.h>
void count_frequency(int *arr, int n);

int main()
{
	int size;
	printf("Enter the no of elements in the array:");
	scanf("%d", &size);

	int arr[size];
	printf("Enter %d elements into the array:\n",size);
	for(int i=0;i<3;i++)
	{
		printf("Element [%d]: ",i);
		scanf("%d", &arr[i]);
	}

	count_frequency(arr, size);
	return 0;
}
void count_frequency(int *arr, int n)
{
	int counted[n];
	for(int i=0;i<n;i++)
	{
		counted[i]=0;
	}
	printf("The frequency of all elements in the array:\n");
	for(int i=0;i<n;i++)
	{
		if(counted[i]==1)
		{
			continue;
		}
		int count = 1;
		for(int j=1+1;j<n;j++)
		{
			if(arr[i] == arr[j])
			{
				count++;
				counted[j]=1;
			}
		}
		printf("%d occurs %d times\n", arr[i], count);
	}
}

