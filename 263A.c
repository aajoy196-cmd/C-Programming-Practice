#include <stdio.h>

int main()
{
    int a, i, j;
    int row, col;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            scanf("%d", &a);

            if (a == 1)
            {
                row = i;
                col = j;
            }
        }
    }

    if (row >= 3)
    {
        row = row - 3;
    }
    else
    {
        row = 3 - row;
    }

    if (col >= 3)
    {
        col = col - 3;
    }
    else
    {
        col = 3 - col;
    }

    printf("%d\n", row + col);

    return 0;
}

