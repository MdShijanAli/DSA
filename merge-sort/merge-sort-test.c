#include <stdio.h>

void merge(int arr[], int start, int mid, int end)
{
    int n1 = mid - start + 1;
    int n2 = end - mid;

    int left[n1], right[n2];

    for (int i = 0; i < n1; i++)
        left[i] = arr[start + i];
    for (int j = 0; j < n2; j++)
        right[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = start;

    while (i < n1 && j < n2)
    {
        if (left[i] <= right[j])
        {
            arr[k] = left[i];
            i++;
        }
        else
        {
            arr[k] = right[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        arr[k] = left[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = right[j];
        j++;
        k++;
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