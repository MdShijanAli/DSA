#include <stdio.h>

void merge(int arr[], int start, int mid, int end)
{
    int temp, i = start, j = mid + 1;

    while (arr[i] <= mid && arr[j] <= end)
    {
        if (arr[i] <= arr[j])
        {
            temp = arr[i];
            i++;
        }
        else
        {
            temp = arr[j];
            j++;
        }
    }

    while (arr[i] <= mid)
    {
        temp = arr[i];
        i++;
    }

    while (arr[j] <= end)
    {
        temp = arr[j];
        j++;
    }

    for (int k = 0; k <= end; k++)
    {
        arr[k] = temp;
    }
}

void mergeSort(int arr[], int start, int end)
{
    if (start < end)
    {
        int mid = start + (end - start) / 2;

        mergeSort(arr, start, mid);
        mergeSort(arr, mid + 1, end);

        merge(arr, start, mid, end);
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    int arr[] = {38, 27, 43, 3, 9, 82, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int start = 0;
    int end = size - 1;

    printArray(arr, size);

    mergeSort(arr, start, end);
    printf("Sorted array: \n");
    printArray(arr, size);

    return 0;
}