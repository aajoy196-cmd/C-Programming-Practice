#include <stdio.h>
#include <stdbool.h>

bool is_prime(int x)
{
    if (x < 2)
    {
        return false;
    }
    if (x == 2)
    {
        return true;
    }

    if (x % 2 == 0)
    {
        return false;
    }

    for (int i = 3; i * i <= x; i += 2)
    {
        if (x % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n, x;

    scanf("%d", &n);

    while (n--)
    {
        scanf("%d", &x);
        if (is_prime(x))
        {
            printf("%d eh primo\n", x);
        }
        else
        {
            printf("%d nao eh primo\n", x);
        }
    }

    return 0;
}

