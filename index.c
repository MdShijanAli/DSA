#include <stdio.h>

void selectionSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[minIndex] > arr[j])
            {
                minIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

void insertionSortDescending(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] < key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void bubbleSortDescending(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {5, 2, 4, 1, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Array elements: \n");
    printArray(arr, size);

    selectionSort(arr, size);

    printf("Sorted array: \n");
    printArray(arr, size);

    insertionSortDescending(arr, size);

    printf("Array sorted in descending order: \n");
    printArray(arr, size);

    bubbleSortDescending(arr, size);

    printf("Array sorted in descending order using bubble sort: \n");
    printArray(arr, size);

    return 0;
}