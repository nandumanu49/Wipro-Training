#include <stdio.h>

void count_duplicates(int *arr, int n);

int main()
{
    int size;
    printf("Enter the no of elements in the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d elements into the array:\n", size);
    for (int i = 0; i < size; i++)
    {
        printf("Element [%d]: ", i);
        scanf("%d", &arr[i]);
    }

    count_duplicates(arr, size);
    return 0;
}

void count_duplicates(int *arr, int n)
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        int is_duplicate = 0;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                is_duplicate = 1;
                break;
            }
        }

        if (is_duplicate)
        {
            int already_counted = 0;
            for (int k = 0; k < i; k++)
            {
                if (arr[i] == arr[k])
                {
                    already_counted = 1;
                    break;
                }
            }

            if (!already_counted)
                count++;
        }
    }

    printf("The number of duplicate elements in the array is: %d\n", count);
}
