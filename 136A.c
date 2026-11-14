#include <stdio.h>

int main()
{
    int n, a[101], ans[101];

    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(int i = 1; i <= n; i++)
    {
        ans[a[i]] = i;
    }

    for(int i = 1; i <= n; i++)
    {
        printf("%d ", ans[i]);
    }

    return 0;
}

