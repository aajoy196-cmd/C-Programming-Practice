#include <stdio.h>

int main()
 {
    int n, k, time, sum = 0, count = 0;

    scanf("%d %d", &n, &k);

    time = 240 - k;

    for (int i = 1; i <= n; i++)
    {
        sum = sum + i * 5;

        if (sum <= time)
        {
            count++;
        }
        else
        {
            break;
        }
    }

    printf("%d\n", count);

    return 0;
}

