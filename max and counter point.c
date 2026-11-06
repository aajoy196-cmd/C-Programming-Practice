#include <stdio.h>

int main()
{
    int num, max = -1, position = 0;

    for (int i = 1; i <= 100; i++)
    {
        scanf("%d", &num);

        if (num > max)
        {
            max = num;
            position = i;
        }
    }

    printf("%d\n", max);
    printf("%d\n", position);

    return 0;
}

