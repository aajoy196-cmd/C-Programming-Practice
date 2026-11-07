#include <stdio.h>

int main()
{
    int n, i, j;
    int h[30], a[30];
    int count = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d %d", &h[i], &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {

            if (i != j && h[i] == a[j])
            {
                count++;
            }

        }
    }

    printf("%d\n", count);

    return 0;
}

