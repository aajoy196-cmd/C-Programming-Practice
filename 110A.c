#include <stdio.h>

int main() {
    long long n;
    int count = 0;

    scanf("%lld", &n);

    while (n > 0)
    {
        int digit = n % 10;

        if (digit == 4 || digit == 7)
        {
            count++;
        }

        n = n / 10;
    }

    if (count == 4 || count == 7)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}

