
#include <stdio.h>

void quicksort(int arr[], int low, int high)
{
    int i, j, pivot, temp;

    if (low < high)
    {
        pivot = arr[low];
        i = low + 1;
        j = high;

        for (; i <= j;)
        {
            for (; i <= high; i++)
            {
                if (arr[i] > pivot)
                    break;
            }

            for (; j > low; j--)
            {
                if (arr[j] <= pivot)
                    break;
            }

            if (i < j)
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

        temp = arr[low];
        arr[low] = arr[j];
        arr[j] = temp;

        quicksort(arr, low, j - 1);
        quicksort(arr, j + 1, high);
    }
}

int main()
{
    int arr[100], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    quicksort(arr, 0, n - 1);

    printf("Sorted array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
