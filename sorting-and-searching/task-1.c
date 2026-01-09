#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n], b[n], c[2 * n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }

    int i = 0;
    int j = 0;
    int k = 0;

    while (i < n && j < n)
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

    while (i < n)
    {
        c[k++] = a[i++];
    }

    while (j < n)
    {
        c[k++] = b[j++];
    }

    for (int x = 0; x < 2 * n; x++)
    {
        printf("%d", c[x]);
        if (x != 2 * n - 1)
            printf(" ");
    }
    printf("\n");

    return 0;
}
