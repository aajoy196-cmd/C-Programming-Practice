#include <stdio.h>

int main()
{
    int n, a, b;
    int current = 0, max = 0;

    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        scanf("%d %d", &a, &b);

        current = current - a + b;

        if(current > max)
        {
            max = current;
        }
    }

    printf("%d\n", max);

    return 0;
}

