#include <stdio.h>

int main()
{
    int n, x;
    int a[2001] = {0};

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        a[x]++;
    }

    for(int i = 1; i <= 2000; i++)
    {
        if(a[i] > 0)
        {
            printf("%d aparece %d vez(es)\n", i, a[i]);
        }
    }

    return 0;
}

