#include <stdio.h>

int binarySearchLeftmost(int arr[], int n, int target)
{
    int left = 0;
    int right = n - 1;
    int result = n;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] >= target)
        {
            result = mid;
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }

    return result;
}

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int target;
    scanf("%d", &target);

    int index = binarySearchLeftmost(arr, n, target);

    int count = n - index;

    printf("%d\n", count);

    return 0;
}
