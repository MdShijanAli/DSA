#include <stdio.h>

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void mergeSortedArrays(int a[], int n1, int b[], int n2, int c[])
{
    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2)
    {
        if (a[i] <= b[j])
        {
            c[k++] = a[i++];
        }
        else
        {
            c[k++] = b[j++];
        }
    }

    while (i < n1)
    {
        c[k++] = a[i++];
    }

    while (j < n2)
    {
        c[k++] = b[j++];
    }
}

int searchRightmost(int arr[], int n, int k)
{
    int rightmost = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == k)
        {
            rightmost = i;
        }
    }

    return rightmost;
}

int main()
{
    int n1, n2;

    scanf("%d", &n1);
    int a[n1];
    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &n2);
    int b[n2];
    for (int i = 0; i < n2; i++)
    {
        scanf("%d", &b[i]);
    }

    bubbleSort(a, n1);

    insertionSort(b, n2);

    int c[n1 + n2];
    mergeSortedArrays(a, n1, b, n2, c);

    int k;
    scanf("%d", &k);

    int index = searchRightmost(c, n1 + n2, k);

    if (index != -1)
    {
        printf("%d\n", index);
    }
    else
    {
        printf("not found\n");
    }

    return 0;
}
