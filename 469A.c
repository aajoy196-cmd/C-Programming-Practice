#include <stdio.h>

int main()
{
    int n, p, q;
    int a[100], b[100];
    int i, level, found;

    scanf("%d", &n);

    scanf("%d", &p);
    for(i = 0; i < p; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &q);
    for(i = 0; i < q; i++)
    {
        scanf("%d", &b[i]);
    }

    for(level = 1; level <= n; level++)
    {
        found = 0;

        for(i = 0; i < p; i++)
        {
            if(a[i] == level)
            {
                found = 1;
            }
        }

        for(i = 0; i < q; i++)
        {
            if(b[i] == level)
            {
                found = 1;
            }
        }

        if(found == 0)
        {
            printf("Oh, my keyboard!");
            return 0;
        }
    }

    printf("I become the guy.");

    return 0;
}

